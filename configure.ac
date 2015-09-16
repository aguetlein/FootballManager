AC_INIT([FootballManager], [0.01.00], [achim.guetlein@googlemail.com], [footballmanager])

AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([foreign subdir-objects -Wall -Werror])

# Libtool init and language selection

# Workaround for newer vs. older versions of Automake:
m4_ifdef([AM_PROG_AR], [AM_PROG_AR])

AC_LIBTOOL_DLOPEN
AC_PROG_LIBTOOL
AC_PROG_CXX

CXX_PROJECT_INIT
AX_CXX_COMPILE_STDCXX_11([noext],[mandatory])

# Output

AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([
	Makefile
])

AC_OUTPUT