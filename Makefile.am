ACLOCAL_AMFLAGS = -I m4 --install

MAINTAINERCLEANFILES = Makefile.in \
	aclocal.m4 ar-lib config.guess config.h.in config.h.in~ config.sub \
	configure depcomp install-sh ltmain.sh missing \
	m4/libtool.m4 m4/lt~obsolete.m4 m4/ltoptions.m4 m4/ltsugar.m4 \
	m4/ltversion.m4 \
	doc/html/* doc/latex/*

CLEANFILES = *.d *.so *_rdict.* *_rdict_* *.rootmap

# ========================================================
# CORE LIB

lib_LTLIBRARIES = libFMCore.la

libFMCore_la_SOURCES = src/core/Attribute.cpp \
	src/core/MatchEngine.cpp \
	src/core/PlayerInfo.cpp \
	src/core/Team.cpp

libFMCore_la_headers = src/core/Attribute.h \
	src/core/MatchEngine.h \
	src/core/PlayerInfo.h \
	src/core/Team.h

pkginclude_HEADERS = $(libFMCore_la_headers)

bin_PROGRAMS = FootballManager

FootballManager_SOURCES = src/main.cpp
FootballManager_LDADD = libFMCore.la
