#############################################
#                                           #
############  makefile  #####################
#                                           #
#############################################

EXE=main

##set up control#######
TOP:= $(shell pwd)
DIR_OBJ:= $(TOP)/obj
DIR_BIN:= $(TOP)/
DIR_SRC:= $(TOP)/src
DIR_INCLUDE:= $(TOP)/include


SRC = $(wildcard $(DIR_SRC)/*.cxx) 	
OBJ = $(patsubst $(DIR_SRC)/%.cxx,$(DIR_OBJ)/%.o,$(SRC)) 
#ALL:
#	@echo $(SRC)
#	@echo $(OBJ)

##ROOT#######################################
ROOTCFLAGS    = $(shell root-config --cflags)
ROOTLIBS      = $(shell root-config --libs)
ROOTGLIBS     = $(shell root-config --glibs)

CPPLIBS = $(ROOTLIBS) $(ROOTGLIBS) -ltbb
DIR_INCLUDE+=$(ROOTCFLAGS)

# #set up compilers#
CXX = g++
CPPFLAGS = -g -Wall -I$(DIR_INCLUDE)

####### Make Execuatbles#######
all: $(EXE)
$(EXE):$(OBJ) #$(DIR_BIN)
	$(CXX) $(OBJ) $(CPPLIBS)  -o $(DIR_BIN)/$(notdir $@)
#################################
$(DIR_OBJ)/%.o:$(DIR_SRC)/%.cxx  
	$(CXX) $(CPPFLAGS)  -c $(DIR_SRC)/$(notdir $<)  -o $(DIR_OBJ)/$(notdir $@)
#	$(AR) r $(DIR_SRC)/$(notdir $@) $(DIR_OBJ)/$(notdir $@)
#	$(RM) $(DIR_OBJ)/$(notdir $@)
#@echo 

.PHONY:clean
clean: 
	rm -f $(DIR_OBJ)/*.o rm -f main
