##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=07_UnscopedEnumeration
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/franciscokaleb/Documents/git/Cplusplus/[7]_LambdaExpressions[linux]
ProjectPath            :=/home/franciscokaleb/Documents/git/Cplusplus/[7]_LambdaExpressions[linux]/07_UnscopedEnumeration
IntermediateDirectory  :=../build-$(ConfigurationName)/07_UnscopedEnumeration
OutDir                 :=../build-$(ConfigurationName)/07_UnscopedEnumeration
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=franciscokaleb
Date                   :=16/03/23
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
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/x86_64-linux-gnu-as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/07_UnscopedEnumeration/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/07_UnscopedEnumeration/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/07_UnscopedEnumeration"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/07_UnscopedEnumeration"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/07_UnscopedEnumeration/.d:
	@mkdir -p "../build-$(ConfigurationName)/07_UnscopedEnumeration"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/07_UnscopedEnumeration/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/07_UnscopedEnumeration/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[7]_LambdaExpressions[linux]/07_UnscopedEnumeration/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/07_UnscopedEnumeration/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/07_UnscopedEnumeration/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/07_UnscopedEnumeration/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/07_UnscopedEnumeration/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/07_UnscopedEnumeration/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/07_UnscopedEnumeration//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


