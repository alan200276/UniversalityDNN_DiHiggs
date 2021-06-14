# -*- Makefile -*- (for emacs)
# Models/Feynrules/python/Makefile-FR.  Generated from Makefile-FR.in by configure.
#
# Herwig 7.2.2
#
# This Makefile is intended for compiling Herwig plugins
# You can find example plugins in the Contrib directory
#
# This Makefile received very little testing, 
# any bug reports are very welcome!
#

#
# C++ flags
# 
.PRECIOUS: %.o
.PHONY: all clean

CXX = g++

CXXFLAGS = -Wall -Wextra -pedantic -O2 -DBOOST_UBLAS_NDEBUG

# add additional package header directories here
CPPFLAGS = -I/root/Herwig_7_2_2/include -I/root/ThePEG_2_2_2/include -I/root/GSL_2_6/include

# add additional libraries here
LDFLAGS = 

ALLCCFILES=$(shell echo *.cc)
all : FRModel.so 
ALLOBJFILES=$(ALLCCFILES:.cc=.o)

%.so : $(ALLOBJFILES)
	$(CXX) -shared -fPIC $(CXXFLAGS) $(LDFLAGS) $^ -o $@  

%.o : %.cc
	$(CXX) -fPIC $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "Removing all generated files"
	@rm -f FRModel.so $(ALLOBJFILES) $(ALLCCFILES) *.h
	@rm -f *.run *.log *.out *.tex *.dot *.svg 
	@rm -f *.model *.spc *.in *.template Makefile
