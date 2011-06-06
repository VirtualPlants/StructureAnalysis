/* -*-c++-*-
 *  ----------------------------------------------------------------------------
 *
 *       TreeMatching : Comparison of Tree Structures
 *
 *       Copyright 1995-2009 UMR LaBRI
 *
 *       File author(s): P.ferraro (pascal.ferraro@labri.fr)
 * 
 # ---------------------------------------------------------------------------
 #
 #                      GNU General Public Licence
 #
 #       This program is free software; you can redistribute it and/or
 #       modify it under the terms of the GNU General Public License as
 #       published by the Free Software Foundation; either version 2 of
 #       the License, or (at your option) any later version.
 #
 #       This program is distributed in the hope that it will be useful,
 #       but WITHOUT ANY WARRANTY; without even the implied warranty of
 #       MERCHANTABILITY or FITNESS For A PARTICULAR PURPOSE. See the
 #       GNU General Public License for more details.
 #
 #       You should have received a copy of the GNU General Public
 #       License along with this program; see the file COPYING. If not,
 #       write to the Free Software Foundation, Inc., 59
 #       Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 #
 # ---------------------------------------------------------------------------
 */

#include "extract_list.h"
#include "export_list.h"
#include <boost/python.hpp>
#include "matchpath.h"

using namespace boost::python;
#define bp boost::python

class PyMatchPath : public MatchPath, public bp::wrapper<MatchPath>
{
public:

	//Constructor
  PyMatchPath(boost::python::object in_list,  boost::python::object ref_list) :  MatchPath( extract_vec<int,boost::python::extract,std::vector<int> >(in_list)(),extract_vec<int,boost::python::extract,std::vector<int> >(ref_list)()), bp::wrapper<MatchPath>() {
}

  virtual ~PyMatchPath() {}


  /*  void py_make( boost::python::object in_list,  boost::python::object ref_list){
    NodeList input_list = extract_vec<int,boost::python::extract,std::vector<int> >(in_list)();
    NodeList reference_list = extract_vec<int,boost::python::extract,std::vector<int> >(ref_list)();
    this->make2(input_list,reference_list);
    }*/

    /** Returns the edge cost between /e i_node and /e r_node*/
  virtual DistanceType edgeCost(int node1, int node2) 
    { 
	  if(bp::override f = this->get_override("edgeCost"))
	    return bp::call<DistanceType>(f.ptr(), bp::object(node1), bp::object(node2));
	  else return default_edgeCost(node1,node2);
	}

    /** Default implementation of edge cost method. Required for boost python*/
    DistanceType default_edgeCost(int node1, int node2) {
      return MatchPath::edgeCost(node1, node2); }


  boost::python::object py_minCostFlow(){
    VertexVector map_list;
    this->minCostFlow(map_list);
    boost::python::list result;
    VertexVector::iterator it = map_list.begin();
    for (it = map_list.begin();it!=map_list.end();it++)
      result.append(*it);
    return result;
  }
};

// A smart pointer on a PyMatchPath
typedef boost::shared_ptr<PyMatchPath> PyMatchPathPtr;
  

void export_MatchPath() {

	class_<PyMatchPath,PyMatchPathPtr,boost::noncopyable>
	  ("MatchPath", init<boost::python::object,boost::python::object>("Constructor of MatchPath"))
	  //	  .def( "make", &PyMatchPath::py_make,"Initialize a MatchPath")
	  .def( "minCostFlow", &PyMatchPath::py_minCostFlow,"Get the list of mapped vertices")
	  .def("edgeCost", &MatchPath::edgeCost, &PyMatchPath::default_edgeCost)
	;

}
