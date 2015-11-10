/* -*-c++-*-
 *  ----------------------------------------------------------------------------
 *
 *       AMAPmod: Exploring and Modeling Plant Architecture
 *
 *       Copyright 1995-2000 UMR Cirad/Inra Modelisation des Plantes
 *
 *       File author(s): C. Nouguier & F. Boudon (frederic.boudon@cirad.fr) nouguier
 *
 *       $Source$
 *       $Id$
 *
 *       Forum for AMAPmod developers    : amldevlp@cirad.fr
 *
 *  ----------------------------------------------------------------------------
 *
 *                      GNU General Public Licence
 *
 *       This program is free software; you can redistribute it and/or
 *       modify it under the terms of the GNU General Public License as
 *       published by the Free Software Foundation; either version 2 of
 *       the License, or (at your option) any later version.
 *
 *       This program is distributed in the hope that it will be useful,
 *       but WITHOUT ANY WARRANTY; without even the implied warranty of
 *       MERCHANTABILITY or FITNESS For A PARTICULAR PURPOSE. See the
 *       GNU General Public License for more details.
 *
 *       You should have received a copy of the GNU General Public
 *       License along with this program; see the file COPYING. If not,
 *       write to the Free Software Foundation, Inc., 59
 *       Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 *  ----------------------------------------------------------------------------
 */


#ifndef __config_h__
#define __config_h__

/* ----------------------------------------------------------------------- */
/*! \file config.h
 *  \brief Configuration file
 *
 *   This file control the compilation with some predefined macro.\n
 *      Uncomment the macro for particular compilation option. \n
 *      - Use double instead of float for real_t values \n
 *      \#define \b GEOM_USE_DOUBLE \n\n
 *      - Make debug code and output. \n
 *      \#define \b GEOM_DEBUG \n\n
 *      - Make debug code  and output about reference counting object. \n
 *      \#define \b RCOBJECT_DEBUG \n\n
 *      - Compile without namespace. \n
 *      \#define \b NO_NAMESPACE \n\n
 *      - Force the use of the lib glut. \n
 *      \#define \b WITH_GLUT \n\n
 *      - Force to not use the lib glut. \n
 *      \#define \b WITHOUT_GLUT \n\n
 *      - Force to not use the lib RogueWave. \n
 *      \#define \b RWOUT \n\n
 *      - Control if bison output some cpp.h or hpp file for some include \n
 *  If bison version is >= 1.30 then uncomment this macro. \n
 *  On windows force bison hpp by default. \n
 *      \#define \b BISON_HPP \n\n
 *      - Use forward definition \n
 *   By default, on windows when making DLL force not using fwd declaration, Else use it. \n
 *      \#define \b GEOM_FWDEF \n\n
 *      - Not creating dll (Win32 only) \n
 *      \#define \b GEOM_NODLL \n\n
 *      - Using lib GEOM as a dll (Win32 only) \n
 *      \#define \b GEOM_DLL \n\n
 *      - Creating GEOM dll (Win32 only) \n
 *      \#define \b GEOM_MAKEDLL
 *
 */


/*! \def GEOM_USE_DOUBLE
    \brief Use double instead of float for real_t values

    Uncomment to use this functionnality
*/
// #define GEOM_USE_DOUBLE



/*! \def GEOM_DEBUG
    \brief Make debug code and output.

    Uncomment to use this functionnality
*/
// #define GEOM_DEBUG

/*! \def RCOBJECT_DEBUG
    \brief Make debug code  and output about reference counting object.

    Uncomment to use this functionnality
*/
// #define RCOBJECT_DEBUG


/*! \def NO_NAMESPACE
    \brief Compile without namespace.

    Uncomment to use this functionnality
*/
// #define NO_NAMESPACE

#ifndef NO_NAMESPACE


/*! \def GEOM_NAMESPACE_NAME
    \brief Redefined the GEOM namespace name.

    Uncomment to use this functionnality
*/
#define GEOM_NAMESPACE_NAME GEOM

/*! \def TOOLS_NAMESPACE_NAME
    \brief Redefined the Tools namespace name.

    Uncomment to use this functionnality
*/
#define TOOLS_NAMESPACE_NAME TOOLS

#endif

/*! \def WITH_GLUT
    \brief force the use of the lib glut.

    Uncomment to use this functionnality
*/
// #define WITH_GLUT

#ifndef WITH_GLUT
#ifndef WITHOUT_GLUT

/*! \def WITHOUT_GLUT
    \brief force to not use the lib glut.

    Uncomment to use this functionnality
*/
#define WITHOUT_GLUT 1

#endif
#endif

#ifndef RWOUT

/*! \def RWOUT
    \brief force to not use the lib RogueWave.

    Uncomment to use this functionnality
*/
#define RWOUT 1
#endif

/*! \def BISON_HPP
    \brief Macro used for bison output

    Control if bison output some cpp.h or hpp file for some include
        If bison version is >= 1.30 then uncomment this macro.
    On windows force bison hpp by default.
        Uncomment to use this functionnality
*/

#ifndef BISON_HPP
#define BISON_HPP
#endif

#ifdef _WIN32
#ifndef BISON_HPP
#define BISON_HPP 1
#endif
#endif

/*! \def GEOM_FWDEF
    \brief Use forward definition

    By default, on windows when making DLL force not using fwd declaration, Else use it.
        Uncomment to use this functionnality
*/
#define GEOM_FWDEF

/*! \def STL_EXTENSION
    \brief Include hash ccontainer as extension of STL
*/

#if defined(__GNUC__)
#ifndef GNU_STL_EXTENSION

#ifndef __MINGW32__
#include <features.h>
#endif

#if defined __GNUC_PREREQ
#if __GNUC_PREREQ(3,0)
#define GNU_STL_EXTENSION
#endif
#elif defined (__MINGW32__)
#define GNU_STL_EXTENSION
#elif defined (SYSTEM_IS__CYGWIN)
#define GNU_STL_EXTENSION
#endif

#endif
#endif

#ifdef GNU_STL_EXTENSION
#define FMTFLAGS ios_base::fmtflags
#else
#define FMTFLAGS unsigned long
#endif

#ifdef GNU_STL_EXTENSION
#define STL_EXTENSION
#endif

#if _MSC_VER >= 1300 // Visual C++ 7
#define WIN32_STL_EXTENSION
#define STL_EXTENSION
#endif

#ifdef STL_EXTENSION
	#ifdef GNU_STL_EXTENSION
        #define STDEXT __gnu_cxx
	#else
		#ifdef WIN32_STL_EXTENSION
			#define STDEXT stdext
		#else
			#define STDEXT std
		#endif
	#endif
	#define STDEXT_USING_NAMESPACE using namespace STDEXT;
#else
	#define STDEXT std
	#define STDEXT_USING_NAMESPACE
#endif



/*! \def GEOM_NODLL
    \brief Not creating dll

    Uncomment to use this functionnality
        Do nothing on other platform than windows
*/
/*! \def GEOM_DLL
    \brief Using lib GEOM as a dll

    Uncomment to use this functionnality
        Do nothing on other platform than windows
*/
/*! \def GEOM_MAKEDLL
    \brief Creating GEOM dll

    Uncomment to use this functionnality
        Do nothing on other platform than windows
*/
#if defined(_WIN32)
#if defined(GEOM_NODLL)
#undef GEOM_MAKEDLL
#undef GEOM_DLL
#endif //#GEOM_NODLL

#if defined(GEOM_MAKEDLL)
#ifndef GEOM_DLL
#define GEOM_DLL
#endif
#endif //#GEOM_MAKEDLL

#ifdef GEOM_DLL

#ifdef GEOM_MAKEDLL             /* create a Geom DLL library */
#define GEOM_API  __declspec(dllexport)
#undef GEOM_FWDEF
#else                                                   /* use a Geom DLL library */
#define GEOM_API  __declspec(dllimport)
#endif //#GEOM_MAKEDLL


#define GEOM_TEMPLATE_API(T) template class GEOM_API T;
#endif //#GEOM_DLL

#else // OS != _WIN32

#undef GEOM_MAKEDLL             /* ignore these for other platforms */
#undef GEOM_DLL

#endif //#WIN32

#ifndef GEOM_API
#define GEOM_API
#define GEOM_TEMPLATE_API(T) 
#endif

#ifdef _WIN32
 // Turn off warnings generated by long std templates
 // This warns about truncation to 255 characters in debug/browse info
 #   pragma warning (disable : 4786)
 #   pragma warning (disable : 4250) // 'class' : inherits 'member' via dominance
 #   pragma warning (disable : 4251)
 #   pragma warning (disable : 4275)
 #   pragma warning (disable : 4996)

#endif

/* ----------------------------------------------------------------------- */

// __config_h__
#endif
