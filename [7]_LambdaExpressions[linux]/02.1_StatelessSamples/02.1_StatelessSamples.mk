##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=02.1_StatelessSamples
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/franciscokaleb/Documents/git/Cplusplus/[7]_LambdaExpressions[linux]
ProjectPath            :=/home/franciscokaleb/Documents/git/Cplusplus/[7]_LambdaExpressions[linux]/02.1_StatelessSamples
IntermediateDirectory  :=../build-$(ConfigurationName)/02_1_StatelessSamples
OutDir                 :=../build-$(ConfigurationName)/02_1_StatelessSamples
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=franciscokaleb
Date                   :=03/03/23
CodeLitePath           :=/home/franciscokaleb/.codelite
LinkerName             :=/usr/bin/x86_64-linux-gnu-g++
SharedObjectLinkerName :=/usr/bin/x86_64-linux-gnu-g++ -shared -fPIC
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
AR       := /usr/bin/x86_64-linux-gnu-ar rcu
CXX      := /usr/bin/x86_64-linux-gnu-g++
CC       := /usr/bin/x86_64-linux-gnu-gcc
CXXFLAGS :=  -g -O0 -Wall -std=c++20 $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/x86_64-linux-gnu-as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/02_1_StatelessSamples/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/02_1_StatelessSamples/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/02_1_StatelessSamples"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/02_1_StatelessSamples"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/02_1_StatelessSamples/.d:
	@mkdir -p "../build-$(ConfigurationName)/02_1_StatelessSamples"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/02_1_StatelessSamples/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/02_1_StatelessSamples/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[7]_LambdaExpressions[linux]/02.1_StatelessSamples/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/02_1_StatelessSamples/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/02_1_StatelessSamples/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/02_1_StatelessSamples/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/02_1_StatelessSamples/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/02_1_StatelessSamples/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/02_1_StatelessSamples//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


