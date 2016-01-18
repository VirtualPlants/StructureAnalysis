#include <boost/python.hpp>
#include <stat_tool/reestimation.h>

void _stat_tool_penalty_type()
{
        std::string stat_tool_0cdd446515295e8e8373e99f328c3748_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".stat_tool");
        boost::python::object stat_tool_0cdd446515295e8e8373e99f328c3748_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(stat_tool_0cdd446515295e8e8373e99f328c3748_name.c_str()))));
        boost::python::scope().attr("stat_tool") = stat_tool_0cdd446515295e8e8373e99f328c3748_module;
        boost::python::scope stat_tool_0cdd446515295e8e8373e99f328c3748_scope = stat_tool_0cdd446515295e8e8373e99f328c3748_module;
        boost::python::enum_< enum ::stat_tool::penalty_type >("penalty_type")
            .value("FIRST_DIFFERENCE", ::stat_tool::penalty_type::FIRST_DIFFERENCE)
            .value("SECOND_DIFFERENCE", ::stat_tool::penalty_type::SECOND_DIFFERENCE)
            .value("ENTROPY", ::stat_tool::penalty_type::ENTROPY);
}