##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Accounts
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/franciscokaleb/Documents/git/Cplusplus/[3]_ExceptionHandling
ProjectPath            :=/home/franciscokaleb/Documents/git/Cplusplus/[3]_ExceptionHandling/Accounts
IntermediateDirectory  :=../build-$(ConfigurationName)/Accounts
OutDir                 :=../build-$(ConfigurationName)/Accounts
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=franciscokaleb
Date                   :=20/02/23
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
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++-11
CC       := /usr/bin/gcc-11
CXXFLAGS :=  -g -O0 -std=c++14 -Wall -std=c++20 $(Preprocessors)
CFLAGS   :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/Accounts/Trust_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Accounts/Savings_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Accounts/Checkingz_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Accounts/Utilities.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Accounts/I_Printable.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Accounts/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Accounts/Account.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Accounts/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/Accounts"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/Accounts"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/Accounts/.d:
	@mkdir -p "../build-$(ConfigurationName)/Accounts"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Accounts/Trust_Account.cpp$(ObjectSuffix): Trust_Account.cpp ../build-$(ConfigurationName)/Accounts/Trust_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[3]_ExceptionHandling/Accounts/Trust_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Trust_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Accounts/Trust_Account.cpp$(DependSuffix): Trust_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Accounts/Trust_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Accounts/Trust_Account.cpp$(DependSuffix) -MM Trust_Account.cpp

../build-$(ConfigurationName)/Accounts/Trust_Account.cpp$(PreprocessSuffix): Trust_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Accounts/Trust_Account.cpp$(PreprocessSuffix) Trust_Account.cpp

../build-$(ConfigurationName)/Accounts/Savings_Account.cpp$(ObjectSuffix): Savings_Account.cpp ../build-$(ConfigurationName)/Accounts/Savings_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[3]_ExceptionHandling/Accounts/Savings_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Savings_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Accounts/Savings_Account.cpp$(DependSuffix): Savings_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Accounts/Savings_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Accounts/Savings_Account.cpp$(DependSuffix) -MM Savings_Account.cpp

../build-$(ConfigurationName)/Accounts/Savings_Account.cpp$(PreprocessSuffix): Savings_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Accounts/Savings_Account.cpp$(PreprocessSuffix) Savings_Account.cpp

../build-$(ConfigurationName)/Accounts/Checkingz_Account.cpp$(ObjectSuffix): Checkingz_Account.cpp ../build-$(ConfigurationName)/Accounts/Checkingz_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[3]_ExceptionHandling/Accounts/Checkingz_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Checkingz_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Accounts/Checkingz_Account.cpp$(DependSuffix): Checkingz_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Accounts/Checkingz_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Accounts/Checkingz_Account.cpp$(DependSuffix) -MM Checkingz_Account.cpp

../build-$(ConfigurationName)/Accounts/Checkingz_Account.cpp$(PreprocessSuffix): Checkingz_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Accounts/Checkingz_Account.cpp$(PreprocessSuffix) Checkingz_Account.cpp

../build-$(ConfigurationName)/Accounts/Utilities.cpp$(ObjectSuffix): Utilities.cpp ../build-$(ConfigurationName)/Accounts/Utilities.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[3]_ExceptionHandling/Accounts/Utilities.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Utilities.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Accounts/Utilities.cpp$(DependSuffix): Utilities.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Accounts/Utilities.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Accounts/Utilities.cpp$(DependSuffix) -MM Utilities.cpp

../build-$(ConfigurationName)/Accounts/Utilities.cpp$(PreprocessSuffix): Utilities.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Accounts/Utilities.cpp$(PreprocessSuffix) Utilities.cpp

../build-$(ConfigurationName)/Accounts/I_Printable.cpp$(ObjectSuffix): I_Printable.cpp ../build-$(ConfigurationName)/Accounts/I_Printable.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[3]_ExceptionHandling/Accounts/I_Printable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Accounts/I_Printable.cpp$(DependSuffix): I_Printable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Accounts/I_Printable.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Accounts/I_Printable.cpp$(DependSuffix) -MM I_Printable.cpp

../build-$(ConfigurationName)/Accounts/I_Printable.cpp$(PreprocessSuffix): I_Printable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Accounts/I_Printable.cpp$(PreprocessSuffix) I_Printable.cpp

../build-$(ConfigurationName)/Accounts/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Accounts/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[3]_ExceptionHandling/Accounts/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Accounts/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Accounts/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Accounts/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Accounts/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Accounts/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/Accounts/Account.cpp$(ObjectSuffix): Account.cpp ../build-$(ConfigurationName)/Accounts/Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[3]_ExceptionHandling/Accounts/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Accounts/Account.cpp$(DependSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Accounts/Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Accounts/Account.cpp$(DependSuffix) -MM Account.cpp

../build-$(ConfigurationName)/Accounts/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Accounts/Account.cpp$(PreprocessSuffix) Account.cpp


-include ../build-$(ConfigurationName)/Accounts//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


