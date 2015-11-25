#include <boost/python.hpp>
#include <stat_tool/compound.h>
#include <stat_tool/discrete_mixture.h>
#include <stat_tool/stat_tools.h>
#include <stat_tool/convolution.h>

void _stat_tool_reestimation_56c13912c505596b9c1abb0933dddae9()
{
        std::string stat_tool_0cdd446515295e8e8373e99f328c3748_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".stat_tool");
        boost::python::object stat_tool_0cdd446515295e8e8373e99f328c3748_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(stat_tool_0cdd446515295e8e8373e99f328c3748_name.c_str()))));
        boost::python::scope().attr("stat_tool") = stat_tool_0cdd446515295e8e8373e99f328c3748_module;
        boost::python::scope stat_tool_0cdd446515295e8e8373e99f328c3748_scope = stat_tool_0cdd446515295e8e8373e99f328c3748_module;
        void (::stat_tool::Reestimation<int>::*method_pointer_c2417c72627956cabd4138395a99c2be)(int) = &::stat_tool::Reestimation<int>::init;
        void (::stat_tool::Reestimation<int>::*method_pointer_c0951555cfb4587a9b71b19785f62776)(class ::stat_tool::Reestimation<int> const &) = &::stat_tool::Reestimation<int>::copy;
        class ::std::basic_ostream<char, std::char_traits<char> > & (::stat_tool::Reestimation<int>::*method_pointer_9955b730f43454df9e9a92bfaba790f8)(class ::std::basic_ostream<char, std::char_traits<char> > &, bool, bool) const = &::stat_tool::Reestimation<int>::ascii_characteristic_print;
        class ::std::basic_ostream<char, std::char_traits<char> > & (::stat_tool::Reestimation<int>::*method_pointer_d0ad5415335b504180a8ece3b2b31747)(class ::std::basic_ostream<char, std::char_traits<char> > &, bool) const = &::stat_tool::Reestimation<int>::ascii_circular_characteristic_print;
        class ::std::basic_ostream<char, std::char_traits<char> > & (::stat_tool::Reestimation<int>::*method_pointer_f69462b982b35a14a25fb0282448c0aa)(class ::std::basic_ostream<char, std::char_traits<char> > &) const = &::stat_tool::Reestimation<int>::print;
        void (::stat_tool::Reestimation<int>::*method_pointer_4680126645745fcb849b98993aac1844)() = &::stat_tool::Reestimation<int>::nb_value_computation;
        void (::stat_tool::Reestimation<int>::*method_pointer_39dc06b6989f56449a94626659209e35)() = &::stat_tool::Reestimation<int>::offset_computation;
        void (::stat_tool::Reestimation<int>::*method_pointer_df308a6a6e0952d8a660b65a409444a1)() = &::stat_tool::Reestimation<int>::nb_element_computation;
        void (::stat_tool::Reestimation<int>::*method_pointer_f78f6a9d19f95d61b1d1457f8eb1ac51)() = &::stat_tool::Reestimation<int>::max_computation;
        void (::stat_tool::Reestimation<int>::*method_pointer_8ba5f878cb8d507bb1b8dc0b88cd2d2d)() = &::stat_tool::Reestimation<int>::mean_computation;
        void (::stat_tool::Reestimation<int>::*method_pointer_897a3f6bc7c6518897fcc2cad9377605)(bool) = &::stat_tool::Reestimation<int>::variance_computation;
        double (::stat_tool::Reestimation<int>::*method_pointer_2a16f7c5c999561b964978b9cd31b394)() const = &::stat_tool::Reestimation<int>::mean_absolute_deviation_computation;
        double (::stat_tool::Reestimation<int>::*method_pointer_f3ff97b8ae5d589880d39261a9b7defe)() const = &::stat_tool::Reestimation<int>::log_geometric_mean_computation;
        double (::stat_tool::Reestimation<int>::*method_pointer_f895c8930c055762bd011156979aa8e2)() const = &::stat_tool::Reestimation<int>::skewness_computation;
        double (::stat_tool::Reestimation<int>::*method_pointer_dc65c9a0ef2b5da5905f8282edddd975)() const = &::stat_tool::Reestimation<int>::kurtosis_computation;
        double (::stat_tool::Reestimation<int>::*method_pointer_df8423e7a8a556029702199d97dcae0b)() const = &::stat_tool::Reestimation<int>::information_computation;
        double (::stat_tool::Reestimation<int>::*method_pointer_a7325ae4a3095565ba8af78b397c4f8d)(class ::stat_tool::Distribution const &) const = &::stat_tool::Reestimation<int>::likelihood_computation;
        void (::stat_tool::Reestimation<int>::*method_pointer_ad04da264d9c5706827b0f61b350b020)(class ::stat_tool::Distribution *) const = &::stat_tool::Reestimation<int>::distribution_estimation;
        double (::stat_tool::Reestimation<int>::*method_pointer_4a517883c0c25a2e895e942d982c63d3)(class ::stat_tool::DiscreteParametric *, int, bool) const = &::stat_tool::Reestimation<int>::binomial_estimation;
        double (::stat_tool::Reestimation<int>::*method_pointer_1b9b14e767f750aba9a125bd6c96f518)(class ::stat_tool::DiscreteParametric *, int, bool, double) const = &::stat_tool::Reestimation<int>::poisson_estimation;
        double (::stat_tool::Reestimation<int>::*method_pointer_372daba3fa9959df9599c3f09b561214)(class ::stat_tool::DiscreteParametric *, int, bool, double) const = &::stat_tool::Reestimation<int>::negative_binomial_estimation;
        double (::stat_tool::Reestimation<int>::*method_pointer_a08e244811b45407b6d64587ced2b48f)(class ::stat_tool::DiscreteParametric *, int, bool, double) const = &::stat_tool::Reestimation<int>::parametric_estimation;
        double (::stat_tool::Reestimation<int>::*method_pointer_c910b42ad7235d0cb2bfdaa22ab60108)(class ::stat_tool::DiscreteParametric *, int, bool, double) const = &::stat_tool::Reestimation<int>::type_parametric_estimation;
        class ::stat_tool::DiscreteParametric * (::stat_tool::Reestimation<int>::*method_pointer_821d24cd974a5505a7476fc7e53c90cd)(int, bool, double) const = &::stat_tool::Reestimation<int>::type_parametric_estimation;
        void (::stat_tool::Reestimation<int>::*method_pointer_a99ef95e615657529839b7708744306c)(class ::stat_tool::Reestimation<int> const *, double) = &::stat_tool::Reestimation<int>::equilibrium_process_combination;
        void (::stat_tool::Reestimation<int>::*method_pointer_4487cd30c9575ffa8939e0dc75ab7f34)(class ::stat_tool::Reestimation<int> const *, class ::stat_tool::Distribution *, double) const = &::stat_tool::Reestimation<int>::equilibrium_process_estimation;
        void (::stat_tool::Reestimation<int>::*method_pointer_9f1cf09a5d8155218556897d960197c9)(class ::stat_tool::ContinuousParametric *, int) const = &::stat_tool::Reestimation<int>::gamma_estimation;
        void (::stat_tool::Reestimation<int>::*method_pointer_a37011ff8284500e991c67c3a59d2011)(class ::stat_tool::ContinuousParametric *, int) const = &::stat_tool::Reestimation<int>::zero_inflated_gamma_estimation;
        boost::python::class_< class ::stat_tool::Reestimation<int>, std::shared_ptr< class ::stat_tool::Reestimation<int> > >("_Reestimation_56c13912c505596b9c1abb0933dddae9", boost::python::no_init)
            .def(boost::python::init< int >())
            .def(boost::python::init< class ::stat_tool::Reestimation<int> const & >())
            .def(boost::python::init< class ::std::vector<stat_tool::Reestimation<int> *, std::allocator<stat_tool::Reestimation<int> *> > const & >())
            .def("init", method_pointer_c2417c72627956cabd4138395a99c2be)
            .def("copy", method_pointer_c0951555cfb4587a9b71b19785f62776)
            .def("ascii_characteristic_print", method_pointer_9955b730f43454df9e9a92bfaba790f8, boost::python::return_internal_reference<>())
            .def("ascii_circular_characteristic_print", method_pointer_d0ad5415335b504180a8ece3b2b31747, boost::python::return_internal_reference<>())
            .def("print", method_pointer_f69462b982b35a14a25fb0282448c0aa, boost::python::return_internal_reference<>())
            .def("nb_value_computation", method_pointer_4680126645745fcb849b98993aac1844)
            .def("offset_computation", method_pointer_39dc06b6989f56449a94626659209e35)
            .def("nb_element_computation", method_pointer_df308a6a6e0952d8a660b65a409444a1)
            .def("max_computation", method_pointer_f78f6a9d19f95d61b1d1457f8eb1ac51)
            .def("mean_computation", method_pointer_8ba5f878cb8d507bb1b8dc0b88cd2d2d)
            .def("variance_computation", method_pointer_897a3f6bc7c6518897fcc2cad9377605)
            .def("mean_absolute_deviation_computation", method_pointer_2a16f7c5c999561b964978b9cd31b394)
            .def("log_geometric_mean_computation", method_pointer_f3ff97b8ae5d589880d39261a9b7defe)
            .def("skewness_computation", method_pointer_f895c8930c055762bd011156979aa8e2)
            .def("kurtosis_computation", method_pointer_dc65c9a0ef2b5da5905f8282edddd975)
            .def("information_computation", method_pointer_df8423e7a8a556029702199d97dcae0b)
            .def("likelihood_computation", method_pointer_a7325ae4a3095565ba8af78b397c4f8d)
            .def("distribution_estimation", method_pointer_ad04da264d9c5706827b0f61b350b020)
            .def("binomial_estimation", method_pointer_4a517883c0c25a2e895e942d982c63d3)
            .def("poisson_estimation", method_pointer_1b9b14e767f750aba9a125bd6c96f518)
            .def("negative_binomial_estimation", method_pointer_372daba3fa9959df9599c3f09b561214)
            .def("parametric_estimation", method_pointer_a08e244811b45407b6d64587ced2b48f)
            .def("type_parametric_estimation", method_pointer_c910b42ad7235d0cb2bfdaa22ab60108)
            .def("type_parametric_estimation", method_pointer_821d24cd974a5505a7476fc7e53c90cd, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("equilibrium_process_combination", method_pointer_a99ef95e615657529839b7708744306c)
            .def("equilibrium_process_estimation", method_pointer_4487cd30c9575ffa8939e0dc75ab7f34)
            .def("gamma_estimation", method_pointer_9f1cf09a5d8155218556897d960197c9)
            .def("zero_inflated_gamma_estimation", method_pointer_a37011ff8284500e991c67c3a59d2011)
            .def_readwrite("nb_value", &::stat_tool::Reestimation<int>::nb_value)
            .def_readwrite("alloc_nb_value", &::stat_tool::Reestimation<int>::alloc_nb_value)
            .def_readwrite("offset", &::stat_tool::Reestimation<int>::offset)
            .def_readwrite("nb_element", &::stat_tool::Reestimation<int>::nb_element)
            .def_readwrite("max", &::stat_tool::Reestimation<int>::max)
            .def_readwrite("mean", &::stat_tool::Reestimation<int>::mean)
            .def_readwrite("variance", &::stat_tool::Reestimation<int>::variance);
}