"""Top parameters

author: Thomas Cokelaer, Thomas.Cokelaer@inria.fr

"""
__revision__ = "$Id$"

import os
import openalea.stat_tool.interface as interface

from openalea.sequence_analysis._sequence_analysis import _Top_parameters
from openalea.sequence_analysis._sequence_analysis import MAX_POSITION
from openalea.sequence_analysis._sequence_analysis import DEFAULT_MAX_POSITION
from openalea.sequence_analysis._sequence_analysis import TOP_MIN_PROBABILITY
from openalea.sequence_analysis._sequence_analysis import MIN_RHYTHM_RATIO

from openalea.stat_tool import error

__all__ = ['TopParameters',
           '_Top_parameters']


# Extend dynamically class
interface.extend_class( _Top_parameters, interface.StatInterface)

# Add methods to _Vectors


def TopParameters(*args, **kargs):
    """TopParameters

    Construction of 'top' parameters from the three parameters or from an ASCII file.

    :Usage:

    >>> TopParameters(proba, axillary_proba, rhythm_ratio, MaxPosition=40)
    >>> TopParameters(file_name, MaxPosition=40)    


    :Arguments:

    * proba (int, real): growth probability of the parent shoot,
    * axillary_proba (int, real): growth probability of the offspring shoots,
    * rhythm_ratio (int, real): growth rhythm ratio offspring shoots / parent shoot,
    * file_name (string).
    
    :Optional Arguments:

    MaxPosition (int): maximum position for the computation of the distributions of the number of internodes of offspring shoots (default value: 20).
    
    :Returned Object:

    If the construction succeeds, an object of type top_parameters is returned, otherwise no object is returned.
    
    :Background:

    The aim of the model of 'tops' is to related the growth of offspring shoots to the growth of their parent shoot in the case of immediate branching. In the case where the arguments are the three 'top' parameters, the constraints over these parameters are described in the definition of the syntactic form of the type top_parameters (cf. File Syntax).
    
    .. seealso::

        :func:`~openalea.stat_tool.output.Save`, 
        :func:`~openalea.sequence_analysis.simulate.Simulate`.

    """

    error.CheckArgumentsLength(args, 1, 3)
    MaxPosition = kargs.get("MaxPosition", DEFAULT_MAX_POSITION)
    assert MaxPosition < MAX_POSITION
    
    if len(args)==1: 
        error.CheckType([args[0], MaxPosition], [str, int])
        #filename case
        filename = args[0]
        if os.path.isfile(filename):
            return _Top_parameters(filename, MaxPosition)
        else:
            raise IOError("bad file name")
    else: #sequences case
        error.CheckArgumentsLength(args, 3, 3)

        error.CheckType([args[0], args[1], args[2], MaxPosition],
                         [[int, float], [float, int], [float, int], int])
        
        probability = args[0]
        axillary_probability = args[1] 
        rhythm_ratio = args[2]
        
        assert probability >= TOP_MIN_PROBABILITY
        assert probability <= 1
        assert axillary_probability <= 1
        assert axillary_probability >= TOP_MIN_PROBABILITY
        
        assert rhythm_ratio >= MIN_RHYTHM_RATIO
        assert rhythm_ratio <= 1./ MIN_RHYTHM_RATIO
        
        return _Top_parameters(probability, axillary_probability, rhythm_ratio,
                               MaxPosition)
    
    

 
    


