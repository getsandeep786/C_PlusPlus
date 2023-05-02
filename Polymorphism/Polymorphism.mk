##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Polymorphism
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=D:/c++/Workspaces/codeLiteWorkspaces
ProjectPath            :=D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/Polymorphism
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Sandeep Narayanan
Date                   :=02/05/2023
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Polymorphism.txt"
PCHCompileFlags        :=
MakeDirCommand         :="C:/Program Files/CodeLite/mkdir.exe" -p
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
AR       := C:/mingw64/bin/ar.exe -r
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -O0 -gdwarf-2 -std=c++20 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/account.cpp$(ObjectSuffix) $(IntermediateDirectory)/dynamictrust.cpp$(ObjectSuffix) $(IntermediateDirectory)/dynamicsavings.cpp$(ObjectSuffix) $(IntermediateDirectory)/trust.cpp$(ObjectSuffix) $(IntermediateDirectory)/savings.cpp$(ObjectSuffix) $(IntermediateDirectory)/dynamicaccount.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/Polymorphism/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/account.cpp$(ObjectSuffix): account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/Polymorphism/account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/account.cpp$(PreprocessSuffix): account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/account.cpp$(PreprocessSuffix) account.cpp

$(IntermediateDirectory)/dynamictrust.cpp$(ObjectSuffix): dynamictrust.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/Polymorphism/dynamictrust.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/dynamictrust.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/dynamictrust.cpp$(PreprocessSuffix): dynamictrust.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/dynamictrust.cpp$(PreprocessSuffix) dynamictrust.cpp

$(IntermediateDirectory)/dynamicsavings.cpp$(ObjectSuffix): dynamicsavings.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/Polymorphism/dynamicsavings.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/dynamicsavings.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/dynamicsavings.cpp$(PreprocessSuffix): dynamicsavings.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/dynamicsavings.cpp$(PreprocessSuffix) dynamicsavings.cpp

$(IntermediateDirectory)/trust.cpp$(ObjectSuffix): trust.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/Polymorphism/trust.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/trust.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/trust.cpp$(PreprocessSuffix): trust.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/trust.cpp$(PreprocessSuffix) trust.cpp

$(IntermediateDirectory)/savings.cpp$(ObjectSuffix): savings.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/Polymorphism/savings.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/savings.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/savings.cpp$(PreprocessSuffix): savings.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/savings.cpp$(PreprocessSuffix) savings.cpp

$(IntermediateDirectory)/dynamicaccount.cpp$(ObjectSuffix): dynamicaccount.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/Polymorphism/dynamicaccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/dynamicaccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/dynamicaccount.cpp$(PreprocessSuffix): dynamicaccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/dynamicaccount.cpp$(PreprocessSuffix) dynamicaccount.cpp

##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


