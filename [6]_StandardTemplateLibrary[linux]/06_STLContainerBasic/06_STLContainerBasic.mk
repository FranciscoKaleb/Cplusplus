##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=06_STLContainerBasic
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/franciscokaleb/Documents/Cplusplus/StandardTemplateLibrary
ProjectPath            :=/home/franciscokaleb/Documents/Cplusplus/StandardTemplateLibrary/06_STLContainerBasic
IntermediateDirectory  :=../build-$(ConfigurationName)/06_STLContainerBasic
OutDir                 :=../build-$(ConfigurationName)/06_STLContainerBasic
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=franciscokaleb
Date                   :=16/02/23
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
Objects0=../build-$(ConfigurationName)/06_STLContainerBasic/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/06_STLContainerBasic/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/06_STLContainerBasic"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/06_STLContainerBasic"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/06_STLContainerBasic/.d:
	@mkdir -p "../build-$(ConfigurationName)/06_STLContainerBasic"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/06_STLContainerBasic/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/06_STLContainerBasic/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/Cplusplus/StandardTemplateLibrary/06_STLContainerBasic/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/06_STLContainerBasic/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/06_STLContainerBasic/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/06_STLContainerBasic/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/06_STLContainerBasic/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/06_STLContainerBasic/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/06_STLContainerBasic//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


