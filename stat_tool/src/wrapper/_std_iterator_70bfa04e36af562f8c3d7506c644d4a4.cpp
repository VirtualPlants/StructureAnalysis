#include <boost/python.hpp>
#include <stat_tool/compound.h>
#include <stat_tool/stat_tools.h>
#include <stat_tool/convolution.h>
#include <stat_tool/discrete_mixture.h>

void _std_iterator_70bfa04e36af562f8c3d7506c644d4a4()
{
        std::string std_a5e4e9231d6351ccb0e06756b389f0af_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
        boost::python::object std_a5e4e9231d6351ccb0e06756b389f0af_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(std_a5e4e9231d6351ccb0e06756b389f0af_name.c_str()))));
        boost::python::scope().attr("std") = std_a5e4e9231d6351ccb0e06756b389f0af_module;
        boost::python::scope std_a5e4e9231d6351ccb0e06756b389f0af_scope = std_a5e4e9231d6351ccb0e06756b389f0af_module;
        boost::python::class_< struct ::std::iterator<std::random_access_iterator_tag, stat_tool::Reestimation<int> *, long, stat_tool::Reestimation<int> **, stat_tool::Reestimation<int> *&>, std::shared_ptr< struct ::std::iterator<std::random_access_iterator_tag, stat_tool::Reestimation<int> *, long, stat_tool::Reestimation<int> **, stat_tool::Reestimation<int> *&> > >("_Iterator_70bfa04e36af562f8c3d7506c644d4a4", boost::python::no_init);
}