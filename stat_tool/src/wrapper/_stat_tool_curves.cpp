#include <boost/python.hpp>
#include <stat_tool/compound.h>
#include <stat_tool/discrete_mixture.h>
#include <stat_tool/curves.h>
#include <stat_tool/stat_tools.h>
#include <stat_tool/convolution.h>

void _stat_tool_curves()
{
        std::string stat_tool_0cdd446515295e8e8373e99f328c3748_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".stat_tool");
        boost::python::object stat_tool_0cdd446515295e8e8373e99f328c3748_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(stat_tool_0cdd446515295e8e8373e99f328c3748_name.c_str()))));
        boost::python::scope().attr("stat_tool") = stat_tool_0cdd446515295e8e8373e99f328c3748_module;
        boost::python::scope stat_tool_0cdd446515295e8e8373e99f328c3748_scope = stat_tool_0cdd446515295e8e8373e99f328c3748_module;
        void (::stat_tool::Curves::*method_pointer_8204b1f9428953b793ca6a11c508e6c0)(class ::stat_tool::Curves const &) = &::stat_tool::Curves::copy;
        void (::stat_tool::Curves::*method_pointer_dbd677cf5bd1512fb46974b8e337b517)(class ::stat_tool::Curves const &, int) = &::stat_tool::Curves::smooth;
        void (::stat_tool::Curves::*method_pointer_d941510568995943b11f44a2dfd1e379)() = &::stat_tool::Curves::remove;
        class ::std::basic_ostream<char, std::char_traits<char> > & (::stat_tool::Curves::*method_pointer_417a7fa84c2a5b3481b0c74c2a3a3ac2)(class ::std::basic_ostream<char, std::char_traits<char> > &, bool, class ::stat_tool::Curves const *) const = &::stat_tool::Curves::ascii_print;
        class ::std::basic_ostream<char, std::char_traits<char> > & (::stat_tool::Curves::*method_pointer_62a36ab9413c5462bc87fe06392ee7bc)(class ::std::basic_ostream<char, std::char_traits<char> > &, class ::stat_tool::Curves const *) const = &::stat_tool::Curves::spreadsheet_print;
        int (::stat_tool::Curves::*method_pointer_0e94622c5d265fca996dfce88a750f4c)() const = &::stat_tool::Curves::plot_length_computation;
        void (::stat_tool::Curves::*method_pointer_60d8c3bcd5b85350996fb9d25c4809f9)(int, class ::stat_tool::SinglePlot &) const = &::stat_tool::Curves::plotable_write;
        void (::stat_tool::Curves::*method_pointer_0e6ca46a684b5037acf82119fb1cd1dc)(class ::stat_tool::MultiPlot &) const = &::stat_tool::Curves::plotable_write;
        void (::stat_tool::Curves::*method_pointer_b388de4b0d8f56ce825d0ab68adee121)(class ::stat_tool::SinglePlot &) const = &::stat_tool::Curves::plotable_frequency_write;
        int (::stat_tool::Curves::*method_pointer_6d359e59d0cf51fda7730f88e372280a)() const = &::stat_tool::Curves::max_frequency_computation;
        int (::stat_tool::Curves::*method_pointer_e94311af09b856d6889b53a1f222abda)() const = &::stat_tool::Curves::nb_element_computation;
        double (::stat_tool::Curves::*method_pointer_9a007c299165594499a96997b32dda94)(int) const = &::stat_tool::Curves::mean_computation;
        double (::stat_tool::Curves::*method_pointer_b8f4f2ed0ffe5884933926b6a43d42fa)(int, double) const = &::stat_tool::Curves::total_square_sum_computation;
        boost::python::class_< class ::stat_tool::Curves, std::shared_ptr< class ::stat_tool::Curves > >("Curves", boost::python::no_init)
            .def(boost::python::init<  >())
            .def(boost::python::init< int, int, bool, bool, bool >())
            .def(boost::python::init< class ::stat_tool::Curves const &, enum ::stat_tool::curve_transformation, int >())
            .def(boost::python::init< class ::stat_tool::Distribution const & >())
            .def(boost::python::init< class ::stat_tool::FrequencyDistribution const & >())
            .def("copy", method_pointer_8204b1f9428953b793ca6a11c508e6c0)
            .def("smooth", method_pointer_dbd677cf5bd1512fb46974b8e337b517)
            .def("remove", method_pointer_d941510568995943b11f44a2dfd1e379)
            .def("ascii_print", method_pointer_417a7fa84c2a5b3481b0c74c2a3a3ac2, boost::python::return_internal_reference<>())
            .def("spreadsheet_print", method_pointer_62a36ab9413c5462bc87fe06392ee7bc, boost::python::return_internal_reference<>())
            .def("plot_length_computation", method_pointer_0e94622c5d265fca996dfce88a750f4c)
            .def("plotable_write", method_pointer_60d8c3bcd5b85350996fb9d25c4809f9)
            .def("plotable_write", method_pointer_0e6ca46a684b5037acf82119fb1cd1dc)
            .def("plotable_frequency_write", method_pointer_b388de4b0d8f56ce825d0ab68adee121)
            .def("max_frequency_computation", method_pointer_6d359e59d0cf51fda7730f88e372280a)
            .def("nb_element_computation", method_pointer_e94311af09b856d6889b53a1f222abda)
            .def("mean_computation", method_pointer_9a007c299165594499a96997b32dda94)
            .def("total_square_sum_computation", method_pointer_b8f4f2ed0ffe5884933926b6a43d42fa)
            .def_readwrite("nb_curve", &::stat_tool::Curves::nb_curve)
            .def_readwrite("length", &::stat_tool::Curves::length)
            .def_readwrite("offset", &::stat_tool::Curves::offset);
}