##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=15_SectionChallenge
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/jyuvi/OneDrive/Desktop/C++/Cplusplus/ObjectOriented
ProjectPath            :=C:/Users/jyuvi/OneDrive/Desktop/C++/Cplusplus/ObjectOriented/15_SectionChallenge
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/15_SectionChallenge
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=jyuvi
Date                   :=30/01/2023
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/bin/g++.exe -shared -fPIC
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
OutputDirectory        :=C:/Users/jyuvi/OneDrive/Desktop/C++/Cplusplus/ObjectOriented/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/bin/windres.exe
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/mingw64/bin/ar.exe rcu
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -std=c++20 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Savings_Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/Trust_Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/Utilities.cpp$(ObjectSuffix) $(IntermediateDirectory)/Checkingz_Account.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jyuvi/OneDrive/Desktop/C++/Cplusplus/ObjectOriented/15_SectionChallenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Savings_Account.cpp$(ObjectSuffix): Savings_Account.cpp $(IntermediateDirectory)/Savings_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jyuvi/OneDrive/Desktop/C++/Cplusplus/ObjectOriented/15_SectionChallenge/Savings_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Savings_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Savings_Account.cpp$(DependSuffix): Savings_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Savings_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Savings_Account.cpp$(DependSuffix) -MM Savings_Account.cpp

$(IntermediateDirectory)/Savings_Account.cpp$(PreprocessSuffix): Savings_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Savings_Account.cpp$(PreprocessSuffix) Savings_Account.cpp

$(IntermediateDirectory)/Trust_Account.cpp$(ObjectSuffix): Trust_Account.cpp $(IntermediateDirectory)/Trust_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jyuvi/OneDrive/Desktop/C++/Cplusplus/ObjectOriented/15_SectionChallenge/Trust_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Trust_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Trust_Account.cpp$(DependSuffix): Trust_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Trust_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Trust_Account.cpp$(DependSuffix) -MM Trust_Account.cpp

$(IntermediateDirectory)/Trust_Account.cpp$(PreprocessSuffix): Trust_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Trust_Account.cpp$(PreprocessSuffix) Trust_Account.cpp

$(IntermediateDirectory)/Utilities.cpp$(ObjectSuffix): Utilities.cpp $(IntermediateDirectory)/Utilities.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jyuvi/OneDrive/Desktop/C++/Cplusplus/ObjectOriented/15_SectionChallenge/Utilities.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Utilities.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Utilities.cpp$(DependSuffix): Utilities.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Utilities.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Utilities.cpp$(DependSuffix) -MM Utilities.cpp

$(IntermediateDirectory)/Utilities.cpp$(PreprocessSuffix): Utilities.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Utilities.cpp$(PreprocessSuffix) Utilities.cpp

$(IntermediateDirectory)/Checkingz_Account.cpp$(ObjectSuffix): Checkingz_Account.cpp $(IntermediateDirectory)/Checkingz_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jyuvi/OneDrive/Desktop/C++/Cplusplus/ObjectOriented/15_SectionChallenge/Checkingz_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Checkingz_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Checkingz_Account.cpp$(DependSuffix): Checkingz_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Checkingz_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Checkingz_Account.cpp$(DependSuffix) -MM Checkingz_Account.cpp

$(IntermediateDirectory)/Checkingz_Account.cpp$(PreprocessSuffix): Checkingz_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Checkingz_Account.cpp$(PreprocessSuffix) Checkingz_Account.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


