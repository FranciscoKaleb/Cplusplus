##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=07_streams
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/franciscokaleb/Documents/IO_Streams
ProjectPath            :=/home/franciscokaleb/Documents/IO_Streams/07_streams
IntermediateDirectory  :=../build-$(ConfigurationName)/07_streams
OutDir                 :=../build-$(ConfigurationName)/07_streams
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=franciscokaleb
Date                   :=08/02/23
CodeLitePath           :=/home/franciscokaleb/.codelite
LinkerName             :=/bin/x86_64-linux-gnu-g++
SharedObjectLinkerName :=/bin/x86_64-linux-gnu-g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /bin/x86_64-linux-gnu-ar rcu
CXX      := /bin/x86_64-linux-gnu-g++
CC       := /bin/x86_64-linux-gnu-gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /bin/x86_64-linux-gnu-as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/07_streams/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/07_streams/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/07_streams"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/07_streams"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/07_streams/.d:
	@mkdir -p "../build-$(ConfigurationName)/07_streams"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/07_streams/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/07_streams/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/IO_Streams/07_streams/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/07_streams/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/07_streams/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/07_streams/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/07_streams/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/07_streams/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/07_streams//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


