""" clean up tool

The reST files are automatically generated using sphinx_tools.

However, there are known issus which require cleaning.

This code is intended at cleaning these issues until a neat 
solution is found.

:known problem:

- in ./deploy/openalea_deploy_binary_deps_ref.rst, the automodule 
includes the module binary_deps.py but there is only one
function inside this module. The automodule fails. To prevent this failure
switch the automodule to autofunction and remove all the fields below 
'.. autofunction::' that are not required anymore.
"""
import os
import sys
from openalea.misc import sphinx_tools






filenames = ['tree_statistic/openalea_tree_statistic_trees_trees_ref.rst','tree_statistic/openalea_tree_statistic_hmt_hmt_ref.rst']

for file in filenames:
    process = sphinx_tools.PostProcess(file)
    process.remove_inheritance()

print 'Try python setup.py build_sphinx now.'

