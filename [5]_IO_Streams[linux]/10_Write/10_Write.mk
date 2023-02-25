##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=10_Write
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/franciscokaleb/Documents/git/Cplusplus/[6]_StandardTemplateLibrary[linux]
ProjectPath            :=/home/franciscokaleb/Documents/git/Cplusplus/[5]_IO_Streams[linux]/10_Write
IntermediateDirectory  :=../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write
OutDir                 :=../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=franciscokaleb
Date                   :=21/02/23
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
OutputFile             :=../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/bin/$(ProjectName)
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
Objects0=../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write/.d $(Objects) 
	@mkdir -p "../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write"
	@mkdir -p ""../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/bin""

../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write/.d:
	@mkdir -p "../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write"

PreBuild:


##
## Objects
##
../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write/main.cpp$(ObjectSuffix): main.cpp ../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[5]_IO_Streams[linux]/10_Write/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write/main.cpp$(ObjectSuffix) -MF../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write/main.cpp$(DependSuffix) -MM main.cpp

../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write/main.cpp$(PreprocessSuffix) main.cpp


-include ../../[6]_StandardTemplateLibrary[linux]/build-$(ConfigurationName)/__/[5]_IO_Streams[linux]/10_Write//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


