#include <boost/python.hpp>
#include <stat_tool/stat_tools.h>

void _std_iterator_a0dec6ba6e295357a2e71fd6dfb75b40()
{
        std::string std_a5e4e9231d6351ccb0e06756b389f0af_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
        boost::python::object std_a5e4e9231d6351ccb0e06756b389f0af_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(std_a5e4e9231d6351ccb0e06756b389f0af_name.c_str()))));
        boost::python::scope().attr("std") = std_a5e4e9231d6351ccb0e06756b389f0af_module;
        boost::python::scope std_a5e4e9231d6351ccb0e06756b389f0af_scope = std_a5e4e9231d6351ccb0e06756b389f0af_module;
        boost::python::class_< struct ::std::iterator<std::bidirectional_iterator_tag, std::pair<float, float>, long, const std::pair<float, float> *, const std::pair<float, float> &>, std::shared_ptr< struct ::std::iterator<std::bidirectional_iterator_tag, std::pair<float, float>, long, const std::pair<float, float> *, const std::pair<float, float> &> > >("_Iterator_a0dec6ba6e295357a2e71fd6dfb75b40", boost::python::no_init);
}