##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ExceptionHandling
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=D:/c++/Workspaces/codeLiteWorkspaces
ProjectPath            :=D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/ExceptionHandling
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
ObjectsFileList        :="ExceptionHandling.txt"
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/negativevalueexception.cpp$(ObjectSuffix) $(IntermediateDirectory)/dividebyzeroexception.cpp$(ObjectSuffix) $(IntermediateDirectory)/customexception.cpp$(ObjectSuffix) 



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
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/ExceptionHandling/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/negativevalueexception.cpp$(ObjectSuffix): negativevalueexception.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/ExceptionHandling/negativevalueexception.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/negativevalueexception.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/negativevalueexception.cpp$(PreprocessSuffix): negativevalueexception.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/negativevalueexception.cpp$(PreprocessSuffix) negativevalueexception.cpp

$(IntermediateDirectory)/dividebyzeroexception.cpp$(ObjectSuffix): dividebyzeroexception.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/ExceptionHandling/dividebyzeroexception.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/dividebyzeroexception.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/dividebyzeroexception.cpp$(PreprocessSuffix): dividebyzeroexception.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/dividebyzeroexception.cpp$(PreprocessSuffix) dividebyzeroexception.cpp

$(IntermediateDirectory)/customexception.cpp$(ObjectSuffix): customexception.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++/Workspaces/codeLiteWorkspaces/C_PlusPlus/ExceptionHandling/customexception.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/customexception.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/customexception.cpp$(PreprocessSuffix): customexception.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/customexception.cpp$(PreprocessSuffix) customexception.cpp

##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


