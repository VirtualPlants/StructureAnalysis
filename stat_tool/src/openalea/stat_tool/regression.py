"""Regression

:Author: Thomas Cokelaer <Thomas.Cokelaer@inria.fr>
"""
__version__ = "$Id$"

import error
import interface


from _stat_tool import _Regression
from _stat_tool import _Vectors
from _stat_tool import _ParametricModel
from _stat_tool import _Compound
from _stat_tool import _Convolution
from _stat_tool import _Mixture


from enumerate import algo_map
from enumerate import  bool_type


__all__ = ['_Regression',
           'Regression']


#todo: use args and kargs as arguments
def Regression(vec, utype, explanatory, response, 
               *args, **kargs):
    """
    Simple regression (with a single explanatory variable).

    :Parameters:
    
      * vec : vectors
        vectors
      * type : string
        `"Linear"` or `"MovingAverage"` or `"NearestNeighbors"`
      * explanatory_variable : int
        index of the explanatory variable
      * response_variable : int 
        index of the response variable
      * filter : list of float
        filter values on the half width i.e. from one extremity to the central value
        (with the constraint filter[i] + filter[m] = 1),
      * frequencies : list of float
        frequencies defining the filter,
      * dist : distribution, mixture, convolution, compound 
        symmetric distribution, whose size of the support is even, defining the filter 
        (for instance Distribution("BINOMIAL",0,4,0.5)),
      * span : float
        proportion of individuals in each neighbourhood. 

    :Keywords:
    
      * Algorithm : string
          - `"Averaging"` (default) 
          - `"LeastSquares"`
            
        This optional argument can only be used if the second mandatory argument
        specifying the regression type is "MovingAverage".

      * Weighting : bool 
        weighting or not of the neighbors according to their distance to the 
        computed point (default value: True). This optional argument can only
        be used if the second mandatory argument specifying the regression type 
        is "NearestNeighbors". 

    :Returns:
    
        An object of type regression is returned.

    :Examples:

    .. doctest::
        :options: +SKIP
    
        >>> Regression(vec, "Linear", explanatory_variable, response_variable)
        >>> Regression(vec, "MovingAverage", explanatory_variable, 
        ...    response_variable, filter, Algorithm="LeastSquares")
        >>> Regression(vec, "MovingAverage", explanatory_variable,
        ..     response_variable, frequencies, Algorithm="LeastSquares")
        >>> Regression(vec, "MovingAverage", explanatory_variable, 
        ...    response_variable, dist, Algorithm="LeastSquares")
        >>> Regression(vec, "NearestNeighbors", explanatory_variable, 
        ...    response_variable, span, Weighting=False)
    
    .. seealso::
        :func:`~openalea.stat_tool.output.Plot`

    """
    STAT_MINIMUM_SPAN = 0.05 # from aml not stat_tool or sequence headers
    
    error.CheckType([vec, utype, explanatory, response],
                    [_Vectors, str, int, int])
    
    possible_types = ["Linear", "NearestNeighbors", 
                      "NearestNeighbours", "MovingAverage"]

    Algorithm = error.ParseKargs(kargs, "Algorithm", 'Averaging', algo_map)
    Weighting = error.ParseKargs(kargs, "Weighting", True, bool_type)

    if utype == "Linear":
        error.CheckArgumentsLength(args, 0, 0)
        return vec.linear_regression(explanatory, response)

    elif utype == "MovingAverage":
        error.CheckArgumentsLength(args, 1, 1)
        param = args[0]
        #todo add CheckType for int and models
        # param is a list of float, int 
        if isinstance(args[0], list):
            # todo: check that sum equals 1
            return vec.moving_average_regression_values(explanatory, 
                            response, param, Algorithm)
        # or a set of distributions
        # todo: test case of compound, convolution, mixture 
        else:
            error.CheckType([param],
                            [[_ParametricModel, _Mixture,
                             _Convolution, _Compound]])
            return vec.moving_average_regression_distribution(
                            explanatory, response,
                            param, Algorithm)
        
    elif utype in ["NearestNeighbors", "NearestNeighbours"]:
        error.CheckArgumentsLength(args, 1, 1)
        span = args[0]
        error.CheckType([span], [[float, int]])
           
        
        assert span >= STAT_MINIMUM_SPAN 
        #todo: check this assert
        #assert span <= 1. - STAT_MINIMUM_SPAN 

        return vec.nearest_neighbours_regression(explanatory, response, 
                                                 float(span), Weighting)
    else:
        raise TypeError("Bad Regression type. Must be in %s" % possible_types)



# Extend _Regression class dynamically
interface.extend_class( _Regression, interface.StatInterface)




