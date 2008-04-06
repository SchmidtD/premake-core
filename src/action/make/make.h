/**
 * \file   make.h
 * \brief  Support functions for the makefile action.
 * \author Copyright (c) 2002-2008 Jason Perkins and the Premake project
 */
#if !defined(PREMAKE_MAKE_H)
#define PREMAKE_MAKE_H

#include "engine/session.h"

const char* make_get_solution_makefile(Session sess, Solution sln);

#endif
