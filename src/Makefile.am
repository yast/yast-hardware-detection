#
# Makefile.am for .../agent-hardware-detection/src
#

AM_CXXFLAGS = -DY2LOG=\"agent-hardware-detection\" -Wall

plugin_LTLIBRARIES = libpy2ag_hardware-detection.la
noinst_LTLIBRARIES = liby2ag_hardware-detection.la

liby2ag_hardware-detection_la_SOURCES =				\
	HardwareDetectionAgent.cc					\
	HardwareDetectionAgent.h
liby2ag_hardware-detection_la_LDFLAGS = -version-info 2:0
liby2ag_hardware-detection_la_LIBADD = @AGENT_LIBADD@

libpy2ag_hardware-detection_la_SOURCES =				\
        $(liby2ag_hardware-detection_la_SOURCES)			\
        Y2CCHardwareDetectionAgent.cc
libpy2ag_hardware-detection_la_LDFLAGS = -version-info 2:0
libpy2ag_hardware-detection_la_LIBADD = @AGENT_LIBADD@

INCLUDES = -I$(includedir)
