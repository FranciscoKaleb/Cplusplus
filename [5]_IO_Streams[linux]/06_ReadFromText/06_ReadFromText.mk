##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=06_ReadFromText
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/franciscokaleb/Documents/IO_Streams
ProjectPath            :=/home/franciscokaleb/Documents/IO_Streams/06_ReadFromText
IntermediateDirectory  :=../build-$(ConfigurationName)/06_ReadFromText
OutDir                 :=../build-$(ConfigurationName)/06_ReadFromText
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=franciscokaleb
Date                   :=11/02/23
CodeLitePath           :=/home/franciscokaleb/.codelite
LinkerName             :=/usr/bin/g++-11
SharedObjectLinkerName :=/usr/bin/g++-11 -shared -fPIC
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
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++-11
CC       := /usr/bin/gcc-11
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/06_ReadFromText/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/06_ReadFromText/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/06_ReadFromText"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/06_ReadFromText"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/06_ReadFromText/.d:
	@mkdir -p "../build-$(ConfigurationName)/06_ReadFromText"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/06_ReadFromText/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/06_ReadFromText/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/IO_Streams/06_ReadFromText/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/06_ReadFromText/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/06_ReadFromText/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/06_ReadFromText/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/06_ReadFromText/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/06_ReadFromText/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/06_ReadFromText//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


