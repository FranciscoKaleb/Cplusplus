##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Accounts
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/franciscokaleb/Documents/git/Cplusplus/[7]_LambdaExpressions[linux]
ProjectPath            :=/home/franciscokaleb/Documents/git/Cplusplus/[4]_SmartPointersAndExceptionHandling[linux]/Accounts
IntermediateDirectory  :=../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts
OutDir                 :=../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=franciscokaleb
Date                   :=29/03/23
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
OutputFile             :=../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/bin/$(ProjectName)
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
AR       := /usr/bin/x86_64-linux-gnu-ar rcu
CXX      := /usr/bin/x86_64-linux-gnu-g++
CC       := /usr/bin/x86_64-linux-gnu-gcc
CXXFLAGS :=  -g -O0 -std=c++14 -Wall -std=c++20 $(Preprocessors)
CFLAGS   :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/x86_64-linux-gnu-as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Trust_Account.cpp$(ObjectSuffix) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Savings_Account.cpp$(ObjectSuffix) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/I_Printable.cpp$(ObjectSuffix) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Checkingz_Account.cpp$(ObjectSuffix) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Account.cpp$(ObjectSuffix) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/main.cpp$(ObjectSuffix) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Utilities.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/.d $(Objects) 
	@mkdir -p "../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts"
	@mkdir -p ""../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/bin""

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/.d:
	@mkdir -p "../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts"

PreBuild:


##
## Objects
##
../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Trust_Account.cpp$(ObjectSuffix): Trust_Account.cpp ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Trust_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Trust_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Trust_Account.cpp$(ObjectSuffix) $(IncludePath)
../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Trust_Account.cpp$(DependSuffix): Trust_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Trust_Account.cpp$(ObjectSuffix) -MF../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Trust_Account.cpp$(DependSuffix) -MM Trust_Account.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Trust_Account.cpp$(PreprocessSuffix): Trust_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Trust_Account.cpp$(PreprocessSuffix) Trust_Account.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Savings_Account.cpp$(ObjectSuffix): Savings_Account.cpp ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Savings_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Savings_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Savings_Account.cpp$(ObjectSuffix) $(IncludePath)
../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Savings_Account.cpp$(DependSuffix): Savings_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Savings_Account.cpp$(ObjectSuffix) -MF../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Savings_Account.cpp$(DependSuffix) -MM Savings_Account.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Savings_Account.cpp$(PreprocessSuffix): Savings_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Savings_Account.cpp$(PreprocessSuffix) Savings_Account.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/I_Printable.cpp$(ObjectSuffix): I_Printable.cpp ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/I_Printable.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/I_Printable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix) $(IncludePath)
../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/I_Printable.cpp$(DependSuffix): I_Printable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/I_Printable.cpp$(ObjectSuffix) -MF../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/I_Printable.cpp$(DependSuffix) -MM I_Printable.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/I_Printable.cpp$(PreprocessSuffix): I_Printable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/I_Printable.cpp$(PreprocessSuffix) I_Printable.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Checkingz_Account.cpp$(ObjectSuffix): Checkingz_Account.cpp ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Checkingz_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Checkingz_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Checkingz_Account.cpp$(ObjectSuffix) $(IncludePath)
../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Checkingz_Account.cpp$(DependSuffix): Checkingz_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Checkingz_Account.cpp$(ObjectSuffix) -MF../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Checkingz_Account.cpp$(DependSuffix) -MM Checkingz_Account.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Checkingz_Account.cpp$(PreprocessSuffix): Checkingz_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Checkingz_Account.cpp$(PreprocessSuffix) Checkingz_Account.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Account.cpp$(ObjectSuffix): Account.cpp ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Account.cpp$(DependSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Account.cpp$(ObjectSuffix) -MF../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Account.cpp$(DependSuffix) -MM Account.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Account.cpp$(PreprocessSuffix) Account.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/main.cpp$(ObjectSuffix): main.cpp ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/main.cpp$(ObjectSuffix) -MF../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/main.cpp$(DependSuffix) -MM main.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/main.cpp$(PreprocessSuffix) main.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Utilities.cpp$(ObjectSuffix): Utilities.cpp ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Utilities.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/franciscokaleb/Documents/git/Cplusplus/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Utilities.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Utilities.cpp$(ObjectSuffix) $(IncludePath)
../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Utilities.cpp$(DependSuffix): Utilities.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Utilities.cpp$(ObjectSuffix) -MF../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Utilities.cpp$(DependSuffix) -MM Utilities.cpp

../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Utilities.cpp$(PreprocessSuffix): Utilities.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts/Utilities.cpp$(PreprocessSuffix) Utilities.cpp


-include ../../[7]_LambdaExpressions[linux]/build-$(ConfigurationName)/__/[4]_SmartPointersAndExceptionHandling[linux]/Accounts//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


