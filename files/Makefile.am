AM_CPPFLAGS = -I$(srcdir)/.. -I$(srcdir)/../headers $(SDL_CFLAGS) $(INCDIRS) $(WINDOWING_SYSTEM) \
		$(DEBUG_FLAGS) $(CPPFLAGS) -DEXULT_DATADIR=\"$(EXULT_DATADIR)\"

SUBDIRS = sha1 zip

noinst_LTLIBRARIES = libu7file.la

noinst_PROGRAMS = rwregress

rwregress_SOURCES = \
	rwregress.cc \
	utils.h

rwregress_LDADD = \
	libu7file.la \
	$(SYSLIBS)

if HAVE_SNPRINTF
SNPRINTF =
else
SNPRINTF = snprintf.cc
endif

libu7file_la_SOURCES =	\
	Flat.cc		\
	Flat.h		\
	Flex.cc		\
	Flex.h		\
	Table.cc	\
	Table.h		\
	IFF.cc		\
	IFF.h		\
	U7file.cc	\
	U7file.h	\
	U7fileman.cc	\
	U7fileman.h	\
	U7obj.cc	\
	U7obj.h	\
	utils.cc	\
	utils.h		\
	databuf.h	\
	listfiles.cc	\
	listfiles.h	\
	crc.cc		\
	crc.h		\
	msgfile.cc	\
	msgfile.h	\
	$(SNPRINTF)

EXTRA_DIST = 		\
	README

CLEANFILES = *~
