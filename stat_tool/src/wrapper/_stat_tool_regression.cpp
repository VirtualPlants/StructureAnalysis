#include <boost/python.hpp>
#include <stat_tool/compound.h>
#include <stat_tool/regression.h>
#include <stat_tool/convolution.h>
#include <stat_tool/stat_tools.h>
#include <stat_tool/discrete_mixture.h>
#include <stat_tool/mixture.h>

void _stat_tool_regression()
{
        std::string stat_tool_0cdd446515295e8e8373e99f328c3748_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".stat_tool");
        boost::python::object stat_tool_0cdd446515295e8e8373e99f328c3748_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(stat_tool_0cdd446515295e8e8373e99f328c3748_name.c_str()))));
        boost::python::scope().attr("stat_tool") = stat_tool_0cdd446515295e8e8373e99f328c3748_module;
        boost::python::scope stat_tool_0cdd446515295e8e8373e99f328c3748_scope = stat_tool_0cdd446515295e8e8373e99f328c3748_module;
        class ::stat_tool::Vectors * (::stat_tool::Regression::*method_pointer_f0f8e6da2e0c5362a32a10014a11cb45)() const = &::stat_tool::Regression::get_vectors;
        int (::stat_tool::Regression::*method_pointer_ceb101baacb35a3aad7ed11d70736b08)() const = &::stat_tool::Regression::get_nb_vector;
        double (::stat_tool::Regression::*method_pointer_dded4e359e5850748ba155cde8aa6856)(int) const = &::stat_tool::Regression::get_residual;
        boost::python::class_< class ::stat_tool::Regression, std::shared_ptr< class ::stat_tool::Regression >, boost::python::bases< class ::stat_tool::StatInterface, class ::stat_tool::RegressionKernel > >("Regression", boost::python::no_init)
            .def(boost::python::init<  >())
            .def(boost::python::init< enum ::stat_tool::parametric_function, int, int, class ::stat_tool::Vectors const & >())
            .def(boost::python::init< class ::stat_tool::Regression const & >())
            .def("get_vectors", method_pointer_f0f8e6da2e0c5362a32a10014a11cb45, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("get_nb_vector", method_pointer_ceb101baacb35a3aad7ed11d70736b08)
            .def("get_residual", method_pointer_dded4e359e5850748ba155cde8aa6856);
        boost::python::implicitly_convertible< std::shared_ptr< class ::stat_tool::Regression >, std::shared_ptr< class ::stat_tool::StatInterface > >();
        boost::python::implicitly_convertible< std::shared_ptr< class ::stat_tool::Regression >, std::shared_ptr< class ::stat_tool::RegressionKernel > >();
}