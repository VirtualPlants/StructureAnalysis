from setuptools import setup, find_packages
import os, sys
from os.path import join as pj
 
packagename = 'tree_statistic'
namespace = 'openalea'
build_prefix = "build-scons"

# Scons build directory
scons_parameters=["build_prefix="+build_prefix]


# platform dependencies
if("win" in sys.platform):
    install_requires = []
    setup_requires = install_requires + []
else:
    install_requires = []
    setup_requires = []



if __name__ == '__main__':
    
    setup(name='VPlants.Tree_Statistic',
          version='0.1.1',
          author='JB durand',
          description='Tree statistic library',
          url='',
          license='GPL',
          
          # Define where to execute scons
          scons_scripts=['SConstruct'],
          # Scons parameters  
          scons_parameters=scons_parameters,
        
          # Packages
          #packages=
          #package_dir=
      
          # Add package platform libraries if any
          include_package_data=True,
          zip_safe=False,

          # Specific options of openalea.deploy
          lib_dirs = {'lib' : pj(build_prefix, 'lib'),},
          inc_dirs = {'include' : pj(build_prefix, 'include') },
          

          # Dependencies
          setup_requires = setup_requires + \
                           ['openalea.deploy', 'vplants.aml'],
          install_requires = install_requires + ['vplants.aml'],
          dependency_links = ['http://openalea.gforge.inria.fr/pi'],
          )


    
