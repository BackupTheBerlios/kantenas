# set the include path for X, qt and KDE
INCLUDES = $(all_includes)

# these are the headers for your project
noinst_HEADERS = kantenas.h

# let automoc handle all of the meta source files (moc)
METASOURCES = AUTO

messages: rc.cpp
	$(XGETTEXT) *.cpp -o $(podir)/kantenas.pot

KDE_ICON = kantenas

#########################################################################
# APPLICATION SECTION
#########################################################################
# this is the program that gets installed.  it's name is used for all
# of the other Makefile.am variables
bin_PROGRAMS = kantenas

# the application source, library search path, and link libraries
kantenas_SOURCES = main.cpp kantenas.cpp kantenasMain.ui
kantenas_LDFLAGS = $(KDE_RPATH) $(all_libraries)
kantenas_LDADD = $(LIB_KDEUI)

# this is where the desktop file will go 
shelldesktopdir   = $(kde_appsdir)/Utilities
shelldesktop_DATA = kantenas.desktop

# this is where the shell's XML-GUI resource file goes
shellrcdir   = $(kde_datadir)/kantenas
shellrc_DATA = kantenasui.rc

