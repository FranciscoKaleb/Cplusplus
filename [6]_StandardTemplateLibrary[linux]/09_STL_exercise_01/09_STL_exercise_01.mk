##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=09_STL_exercise_01
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/franciscokaleb/Documents/git/Cplusplus/[6]_StandardTemplateLibrary[linux]
ProjectPath            :=/home/franciscokaleb/Documents/git/Cplusplus/[6]_StandardTemplateLibrary[linux]/09_STL_exercise_01
IntermediateDirectory  :=../build-$(ConfigurationName)/09_STL_exercise_01
OutDir                 :=../build-$(ConfigurationName)/09_STL_exercise_01
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=franciscokaleb
Date                   :=20/02/23
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
LinkOptions            :=  -static
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
CXXFLAGS :=  -Wfatal-errors -g -std=c++17 $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /bin/x86_64-linux-gnu-as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/09_STL_exercise_01/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/09_STL_exercise_01/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/09_STL_exercise_01"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/09_STL_exercise_01"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/09_STL_exercise_01/.d:
	@mkdir -p "../build-$(ConfigurationName)/09_STL_exercise_01"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/09_STL_exercise_01/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/09_STL_exercise_01/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[6]_StandardTemplateLibrary[linux]/09_STL_exercise_01/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/09_STL_exercise_01/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/09_STL_exercise_01/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/09_STL_exercise_01/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/09_STL_exercise_01/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/09_STL_exercise_01/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/09_STL_exercise_01//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


