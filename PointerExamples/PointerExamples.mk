##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PointerExamples
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=D:/c++/Workspaces/codeLiteWorkspaces
ProjectPath            :=D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/PointerExamples
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
ObjectsFileList        :="PointerExamples.txt"
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
Objects0=$(IntermediateDirectory)/smartpointers.cpp$(ObjectSuffix) $(IntermediateDirectory)/test.cpp$(ObjectSuffix) $(IntermediateDirectory)/a.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/pointersutilities.cpp$(ObjectSuffix) $(IntermediateDirectory)/b.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/smartpointers.cpp$(ObjectSuffix): smartpointers.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/PointerExamples/smartpointers.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/smartpointers.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/smartpointers.cpp$(PreprocessSuffix): smartpointers.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/smartpointers.cpp$(PreprocessSuffix) smartpointers.cpp

$(IntermediateDirectory)/test.cpp$(ObjectSuffix): test.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/PointerExamples/test.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test.cpp$(PreprocessSuffix): test.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test.cpp$(PreprocessSuffix) test.cpp

$(IntermediateDirectory)/a.cpp$(ObjectSuffix): a.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/PointerExamples/a.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/a.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/a.cpp$(PreprocessSuffix): a.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/a.cpp$(PreprocessSuffix) a.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/PointerExamples/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/pointersutilities.cpp$(ObjectSuffix): pointersutilities.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/PointerExamples/pointersutilities.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/pointersutilities.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/pointersutilities.cpp$(PreprocessSuffix): pointersutilities.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/pointersutilities.cpp$(PreprocessSuffix) pointersutilities.cpp

$(IntermediateDirectory)/b.cpp$(ObjectSuffix): b.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/PointerExamples/b.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/b.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/b.cpp$(PreprocessSuffix): b.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/b.cpp$(PreprocessSuffix) b.cpp

##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


