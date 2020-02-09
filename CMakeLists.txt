cmake_minimum_required(VERSION 3.15)

project(Notepad2 VERSION 1.0.0)

add_compile_definitions(
    STATIC_BUILD
    SCI_LEXER
    WIN32
    _WINDOWS
    NDEBUG
    _UNICODE
    UNICODE
    INCLUDE_DEPRECATED_FEATURES)

add_library(Notepad2Scintilla STATIC
  "scintilla/win32/ScintillaWin.cxx")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/lexers/LexA68k.cxx"
  PRIVATE "scintilla/lexers/LexAbaqus.cxx"
  PRIVATE "scintilla/lexers/LexAda.cxx"
  PRIVATE "scintilla/lexers/LexAPDL.cxx"
  PRIVATE "scintilla/lexers/LexAsm.cxx"
  PRIVATE "scintilla/lexers/LexAsn1.cxx"
  PRIVATE "scintilla/lexers/LexASY.cxx"
  PRIVATE "scintilla/lexers/LexAU3.cxx"
  PRIVATE "scintilla/lexers/LexAVE.cxx"
  PRIVATE "scintilla/lexers/LexAVS.cxx"
  PRIVATE "scintilla/lexers/LexBaan.cxx"
  PRIVATE "scintilla/lexers/LexBash.cxx"
  PRIVATE "scintilla/lexers/LexBatch.cxx"
  PRIVATE "scintilla/lexers/LexBibTeX.cxx"
  PRIVATE "scintilla/lexers/LexBullant.cxx"
  PRIVATE "scintilla/lexers/LexCaml.cxx"
  PRIVATE "scintilla/lexers/LexCIL.cxx"
  PRIVATE "scintilla/lexers/LexClw.cxx"
  PRIVATE "scintilla/lexers/LexCmake.cxx"
  PRIVATE "scintilla/lexers/LexCOBOL.cxx"
  PRIVATE "scintilla/lexers/LexCoffeeScript.cxx"
  PRIVATE "scintilla/lexers/LexConf.cxx"
  PRIVATE "scintilla/lexers/LexCPP.cxx"
  PRIVATE "scintilla/lexers/LexCsound.cxx"
  PRIVATE "scintilla/lexers/LexCss.cxx"
  PRIVATE "scintilla/lexers/LexD.cxx"
  PRIVATE "scintilla/lexers/LexDataflex.cxx"
  PRIVATE "scintilla/lexers/LexDiff.cxx"
  PRIVATE "scintilla/lexers/LexDMAP.cxx"
  PRIVATE "scintilla/lexers/LexDMIS.cxx"
  PRIVATE "scintilla/lexers/LexECL.cxx"
  PRIVATE "scintilla/lexers/LexEDIFACT.cxx"
  PRIVATE "scintilla/lexers/LexEiffel.cxx"
  PRIVATE "scintilla/lexers/LexErlang.cxx"
  PRIVATE "scintilla/lexers/LexErrorList.cxx"
  PRIVATE "scintilla/lexers/LexESCRIPT.cxx"
  PRIVATE "scintilla/lexers/LexFlagShip.cxx"
  PRIVATE "scintilla/lexers/LexForth.cxx"
  PRIVATE "scintilla/lexers/LexFortran.cxx"
  PRIVATE "scintilla/lexers/LexGAP.cxx"
  PRIVATE "scintilla/lexers/LexGui4Cli.cxx"
  PRIVATE "scintilla/lexers/LexHaskell.cxx"
  PRIVATE "scintilla/lexers/LexHTML.cxx"
  PRIVATE "scintilla/lexers/LexIndent.cxx"
  PRIVATE "scintilla/lexers/LexInno.cxx"
  PRIVATE "scintilla/lexers/LexJSON.cxx"
  PRIVATE "scintilla/lexers/LexKix.cxx"
  PRIVATE "scintilla/lexers/LexKVIrc.cxx"
  PRIVATE "scintilla/lexers/LexLatex.cxx"
  PRIVATE "scintilla/lexers/LexLISP.cxx"
  PRIVATE "scintilla/lexers/LexLout.cxx"
  PRIVATE "scintilla/lexers/LexLua.cxx"
  PRIVATE "scintilla/lexers/LexMake.cxx"
  PRIVATE "scintilla/lexers/LexMarkdown.cxx"
  PRIVATE "scintilla/lexers/LexMatlab.cxx"
  PRIVATE "scintilla/lexers/LexMaxima.cxx"
  PRIVATE "scintilla/lexers/LexMETAPOST.cxx"
  PRIVATE "scintilla/lexers/LexMMIXAL.cxx"
  PRIVATE "scintilla/lexers/LexModula.cxx"
  PRIVATE "scintilla/lexers/LexMSSQL.cxx"
  PRIVATE "scintilla/lexers/LexMySQL.cxx"
  PRIVATE "scintilla/lexers/LexNim.cxx"
  PRIVATE "scintilla/lexers/LexNimrod.cxx"
  PRIVATE "scintilla/lexers/LexNsis.cxx"
  PRIVATE "scintilla/lexers/LexNull.cxx"
  PRIVATE "scintilla/lexers/LexOpal.cxx"
  PRIVATE "scintilla/lexers/LexOScript.cxx"
  PRIVATE "scintilla/lexers/LexPascal.cxx"
  PRIVATE "scintilla/lexers/LexPB.cxx"
  PRIVATE "scintilla/lexers/LexPerl.cxx"
  PRIVATE "scintilla/lexers/LexPLM.cxx"
  PRIVATE "scintilla/lexers/LexPO.cxx"
  PRIVATE "scintilla/lexers/LexPOV.cxx"
  PRIVATE "scintilla/lexers/LexPowerPro.cxx"
  PRIVATE "scintilla/lexers/LexPowerShell.cxx"
  PRIVATE "scintilla/lexers/LexProgress.cxx"
  PRIVATE "scintilla/lexers/LexProps.cxx"
  PRIVATE "scintilla/lexers/LexPS.cxx"
  PRIVATE "scintilla/lexers/LexPython.cxx"
  PRIVATE "scintilla/lexers/LexR.cxx"
  PRIVATE "scintilla/lexers/LexREBOL.cxx"
  PRIVATE "scintilla/lexers/LexRegistry.cxx"
  PRIVATE "scintilla/lexers/LexRuby.cxx"
  PRIVATE "scintilla/lexers/LexRust.cxx"
  PRIVATE "scintilla/lexers/LexSAS.cxx"
  PRIVATE "scintilla/lexers/LexScriptol.cxx"
  PRIVATE "scintilla/lexers/LexSmalltalk.cxx"
  PRIVATE "scintilla/lexers/LexSML.cxx"
  PRIVATE "scintilla/lexers/LexSpecman.cxx"
  PRIVATE "scintilla/lexers/LexSpice.cxx"
  PRIVATE "scintilla/lexers/LexSQL.cxx"
  PRIVATE "scintilla/lexers/LexStata.cxx"
  PRIVATE "scintilla/lexers/LexSTTXT.cxx"
  PRIVATE "scintilla/lexers/LexTACL.cxx"
  PRIVATE "scintilla/lexers/LexTADS3.cxx"
  PRIVATE "scintilla/lexers/LexTAL.cxx"
  PRIVATE "scintilla/lexers/LexTCL.cxx"
  PRIVATE "scintilla/lexers/LexTCMD.cxx"
  PRIVATE "scintilla/lexers/LexTeX.cxx"
  PRIVATE "scintilla/lexers/LexTxt2tags.cxx"
  PRIVATE "scintilla/lexers/LexVB.cxx"
  PRIVATE "scintilla/lexers/LexVerilog.cxx"
  PRIVATE "scintilla/lexers/LexVHDL.cxx"
  PRIVATE "scintilla/lexers/LexVisualProlog.cxx"
  PRIVATE "scintilla/lexers/LexX12.cxx"
  PRIVATE "scintilla/lexers/LexYAML.cxx")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/lexlib/Accessor.cxx"
  PRIVATE "scintilla/include/ILexer.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/include/SciLexer.h"
  PRIVATE "scintilla/lexlib/PropSetSimple.h"
  PRIVATE "scintilla/lexlib/WordList.h"
  PRIVATE "scintilla/lexlib/LexAccessor.h"
  PRIVATE "scintilla/lexlib/Accessor.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/lexlib/CharacterSet.cxx"
  PRIVATE "scintilla/lexlib/CharacterSet.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/lexlib/LexerBase.cxx"
  PRIVATE "scintilla/include/ILexer.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/include/SciLexer.h"
  PRIVATE "scintilla/lexlib/PropSetSimple.h"
  PRIVATE "scintilla/lexlib/WordList.h"
  PRIVATE "scintilla/lexlib/LexAccessor.h"
  PRIVATE "scintilla/lexlib/Accessor.h"
  PRIVATE "scintilla/lexlib/LexerModule.h"
  PRIVATE "scintilla/lexlib/LexerBase.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/lexlib/LexerModule.cxx"
  PRIVATE "scintilla/include/ILexer.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/include/SciLexer.h"
  PRIVATE "scintilla/lexlib/PropSetSimple.h"
  PRIVATE "scintilla/lexlib/WordList.h"
  PRIVATE "scintilla/lexlib/LexAccessor.h"
  PRIVATE "scintilla/lexlib/Accessor.h"
  PRIVATE "scintilla/lexlib/LexerModule.h"
  PRIVATE "scintilla/lexlib/LexerBase.h"
  PRIVATE "scintilla/lexlib/LexerSimple.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/lexlib/LexerSimple.cxx"
  PRIVATE "scintilla/include/ILexer.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/include/SciLexer.h"
  PRIVATE "scintilla/lexlib/PropSetSimple.h"
  PRIVATE "scintilla/lexlib/WordList.h"
  PRIVATE "scintilla/lexlib/LexAccessor.h"
  PRIVATE "scintilla/lexlib/Accessor.h"
  PRIVATE "scintilla/lexlib/LexerModule.h"
  PRIVATE "scintilla/lexlib/LexerBase.h"
  PRIVATE "scintilla/lexlib/LexerSimple.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/lexlib/PropSetSimple.cxx"
  PRIVATE "scintilla/lexlib/PropSetSimple.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/lexlib/StyleContext.cxx"
  PRIVATE "scintilla/include/ILexer.h"
  PRIVATE "scintilla/lexlib/LexAccessor.h"
  PRIVATE "scintilla/lexlib/Accessor.h"
  PRIVATE "scintilla/lexlib/StyleContext.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/lexlib/WordList.cxx"
  PRIVATE "scintilla/lexlib/WordList.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/AutoComplete.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/lexlib/CharacterSet.h"
  PRIVATE "scintilla/src/AutoComplete.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/CallTip.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/CallTip.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/CellBuffer.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/SplitVector.h"
  PRIVATE "scintilla/src/Partitioning.h"
  PRIVATE "scintilla/src/CellBuffer.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/CharClassify.cxx"
  PRIVATE "scintilla/src/CharClassify.h"
  PRIVATE "scintilla/lexlib/CharacterSet.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/ContractionState.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/src/SplitVector.h"
  PRIVATE "scintilla/src/Partitioning.h"
  PRIVATE "scintilla/src/RunStyles.h"
  PRIVATE "scintilla/src/ContractionState.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/Decoration.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/SplitVector.h"
  PRIVATE "scintilla/src/Partitioning.h"
  PRIVATE "scintilla/src/RunStyles.h"
  PRIVATE "scintilla/src/Decoration.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/Document.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/ILexer.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/SplitVector.h"
  PRIVATE "scintilla/src/Partitioning.h"
  PRIVATE "scintilla/src/RunStyles.h"
  PRIVATE "scintilla/src/CellBuffer.h"
  PRIVATE "scintilla/src/PerLine.h"
  PRIVATE "scintilla/src/CharClassify.h"
  PRIVATE "scintilla/lexlib/CharacterSet.h"
  PRIVATE "scintilla/src/Decoration.h"
  PRIVATE "scintilla/src/Document.h"
  PRIVATE "scintilla/src/RESearch.h"
  PRIVATE "scintilla/src/UniConversion.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/Editor.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/ILexer.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/SplitVector.h"
  PRIVATE "scintilla/src/Partitioning.h"
  PRIVATE "scintilla/src/RunStyles.h"
  PRIVATE "scintilla/src/ContractionState.h"
  PRIVATE "scintilla/src/CellBuffer.h"
  PRIVATE "scintilla/src/KeyMap.h"
  PRIVATE "scintilla/src/Indicator.h"
  PRIVATE "scintilla/src/XPM.h"
  PRIVATE "scintilla/src/LineMarker.h"
  PRIVATE "scintilla/src/Style.h"
  PRIVATE "scintilla/src/ViewStyle.h"
  PRIVATE "scintilla/src/CharClassify.h"
  PRIVATE "scintilla/lexlib/CharacterSet.h"
  PRIVATE "scintilla/src/Decoration.h"
  PRIVATE "scintilla/src/Document.h"
  PRIVATE "scintilla/src/Selection.h"
  PRIVATE "scintilla/src/PositionCache.h"
  PRIVATE "scintilla/src/Editor.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/ExternalLexer.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/ILexer.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/include/SciLexer.h"
  PRIVATE "scintilla/lexlib/LexerModule.h"
  PRIVATE "scintilla/src/Catalogue.h"
  PRIVATE "scintilla/src/ExternalLexer.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/Indicator.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/Indicator.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/LineMarker.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/XPM.h"
  PRIVATE "scintilla/src/LineMarker.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/PerLine.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/SplitVector.h"
  PRIVATE "scintilla/src/Partitioning.h"
  PRIVATE "scintilla/src/CellBuffer.h"
  PRIVATE "scintilla/src/PerLine.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/PositionCache.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/SplitVector.h"
  PRIVATE "scintilla/src/Partitioning.h"
  PRIVATE "scintilla/src/RunStyles.h"
  PRIVATE "scintilla/src/ContractionState.h"
  PRIVATE "scintilla/src/CellBuffer.h"
  PRIVATE "scintilla/src/KeyMap.h"
  PRIVATE "scintilla/src/Indicator.h"
  PRIVATE "scintilla/src/XPM.h"
  PRIVATE "scintilla/src/LineMarker.h"
  PRIVATE "scintilla/src/Style.h"
  PRIVATE "scintilla/src/ViewStyle.h"
  PRIVATE "scintilla/src/CharClassify.h"
  PRIVATE "scintilla/lexlib/CharacterCategory.h"
  PRIVATE "scintilla/src/Decoration.h"
  PRIVATE "scintilla/include/ILexer.h"
  PRIVATE "scintilla/src/Document.h"
  PRIVATE "scintilla/src/Selection.h"
  PRIVATE "scintilla/src/PositionCache.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/RESearch.cxx"
  PRIVATE "scintilla/src/CharClassify.h"
  PRIVATE "scintilla/src/RESearch.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/RunStyles.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/SplitVector.h"
  PRIVATE "scintilla/src/Partitioning.h"
  PRIVATE "scintilla/src/RunStyles.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/ScintillaBase.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/ILexer.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/lexlib/PropSetSimple.h"
  PRIVATE "scintilla/include/SciLexer.h"
  PRIVATE "scintilla/lexlib/LexerModule.h"
  PRIVATE "scintilla/src/Catalogue.h"
  PRIVATE "scintilla/src/SplitVector.h"
  PRIVATE "scintilla/src/Partitioning.h"
  PRIVATE "scintilla/src/RunStyles.h"
  PRIVATE "scintilla/src/ContractionState.h"
  PRIVATE "scintilla/src/CellBuffer.h"
  PRIVATE "scintilla/src/CallTip.h"
  PRIVATE "scintilla/src/KeyMap.h"
  PRIVATE "scintilla/src/Indicator.h"
  PRIVATE "scintilla/src/XPM.h"
  PRIVATE "scintilla/src/LineMarker.h"
  PRIVATE "scintilla/src/Style.h"
  PRIVATE "scintilla/src/ViewStyle.h"
  PRIVATE "scintilla/src/AutoComplete.h"
  PRIVATE "scintilla/src/CharClassify.h"
  PRIVATE "scintilla/src/Decoration.h"
  PRIVATE "scintilla/src/Document.h"
  PRIVATE "scintilla/src/Selection.h"
  PRIVATE "scintilla/src/PositionCache.h"
  PRIVATE "scintilla/src/Editor.h"
  PRIVATE "scintilla/src/ScintillaBase.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/Selection.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/Selection.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/Style.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/Style.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/UniConversion.cxx"
  PRIVATE "scintilla/src/UniConversion.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/ViewStyle.cxx"
  PRIVATE "scintilla/src/UniqueString.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/src/SplitVector.h"
  PRIVATE "scintilla/src/Partitioning.h"
  PRIVATE "scintilla/src/RunStyles.h"
  PRIVATE "scintilla/src/Indicator.h"
  PRIVATE "scintilla/src/XPM.h"
  PRIVATE "scintilla/src/LineMarker.h"
  PRIVATE "scintilla/src/Style.h"
  PRIVATE "scintilla/src/ViewStyle.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/XPM.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/src/XPM.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/win32/PlatWin.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/src/UniConversion.h"
  PRIVATE "scintilla/src/XPM.h"
  PRIVATE "scintilla/src/FontQuality.h")

target_sources(Notepad2Scintilla
  PRIVATE "scintilla/src/AutoComplete.cxx"
  PRIVATE "scintilla/src/CallTip.cxx"
  PRIVATE "scintilla/src/CaseConvert.cxx"
  PRIVATE "scintilla/src/CaseFolder.cxx"
  PRIVATE "scintilla/src/CellBuffer.cxx"
  PRIVATE "scintilla/lexlib/CharacterCategory.cxx"
  PRIVATE "scintilla/lexlib/CharacterSet.cxx"
  PRIVATE "scintilla/src/CharClassify.cxx"
  PRIVATE "scintilla/src/ContractionState.cxx"
  PRIVATE "scintilla/src/DBCS.cxx"
  PRIVATE "scintilla/src/Decoration.cxx"
  PRIVATE "scintilla/lexlib/DefaultLexer.cxx"
  PRIVATE "scintilla/src/Document.cxx"
  PRIVATE "scintilla/src/EditModel.cxx"
  PRIVATE "scintilla/src/Editor.cxx"
  PRIVATE "scintilla/src/EditView.cxx"
  PRIVATE "scintilla/src/Indicator.cxx"
  PRIVATE "scintilla/src/KeyMap.cxx"
  PRIVATE "scintilla/src/LineMarker.cxx"
  PRIVATE "scintilla/src/MarginView.cxx"
  PRIVATE "scintilla/src/PerLine.cxx"
  PRIVATE "scintilla/win32/PlatWin.cxx"
  PRIVATE "scintilla/src/PositionCache.cxx"
  PRIVATE "scintilla/lexlib/PropSetSimple.cxx"
  PRIVATE "scintilla/src/RESearch.cxx"
  PRIVATE "scintilla/src/RunStyles.cxx"
  PRIVATE "scintilla/src/Selection.cxx"
  PRIVATE "scintilla/src/Style.cxx"
  PRIVATE "scintilla/src/UniConversion.cxx"
  PRIVATE "scintilla/src/UniqueString.cxx"
  PRIVATE "scintilla/src/ViewStyle.cxx"
  PRIVATE "scintilla/src/XPM.cxx"
  PRIVATE "scintilla/win32/HanjaDic.cxx"
  PRIVATE "scintilla/include/Platform.h"
  PRIVATE "scintilla/include/ILexer.h"
  PRIVATE "scintilla/include/Scintilla.h"
  PRIVATE "scintilla/include/SciLexer.h"
  PRIVATE "scintilla/lexlib/LexerModule.h"
  PRIVATE "scintilla/src/SplitVector.h"
  PRIVATE "scintilla/src/Partitioning.h"
  PRIVATE "scintilla/src/RunStyles.h"
  PRIVATE "scintilla/src/ContractionState.h"
  PRIVATE "scintilla/src/CellBuffer.h"
  PRIVATE "scintilla/src/CallTip.h"
  PRIVATE "scintilla/src/KeyMap.h"
  PRIVATE "scintilla/src/Indicator.h"
  PRIVATE "scintilla/src/XPM.h"
  PRIVATE "scintilla/src/LineMarker.h"
  PRIVATE "scintilla/src/Style.h"
  PRIVATE "scintilla/src/AutoComplete.h"
  PRIVATE "scintilla/src/ViewStyle.h"
  PRIVATE "scintilla/src/CharClassify.h"
  PRIVATE "scintilla/lexlib/CharacterCategory.h"
  PRIVATE "scintilla/src/Decoration.h"
  PRIVATE "scintilla/src/Document.h"
  PRIVATE "scintilla/src/Selection.h"
  PRIVATE "scintilla/src/PositionCache.h"
  PRIVATE "scintilla/src/Position.h"
  PRIVATE "scintilla/src/Editor.h"
  PRIVATE "scintilla/src/ScintillaBase.h"
  PRIVATE "scintilla/src/UniConversion.h"
  PRIVATE "scintilla/src/ExternalLexer.h")

target_include_directories(Notepad2Scintilla
  PRIVATE "scintilla/include"
  PRIVATE "scintilla/lexlib"
  PRIVATE "scintilla/src")

target_compile_features(Notepad2Scintilla
  PUBLIC cxx_std_17)

target_link_libraries(Notepad2Scintilla
  PUBLIC imm32.lib)

add_executable(Notepad2 WIN32
  "src/Notepad2.c")

target_sources(Notepad2
  PUBLIC "src/Dialogs.c"
  PUBLIC "src/Notepad2.h"
  PUBLIC "scintilla/include/scintilla.h"
  PUBLIC "src/Edit.h"
  PUBLIC "src/Helpers.h"
  PUBLIC "src/Dlapi.h"
  PUBLIC "src/Dialogs.h"
  PUBLIC "src/resource.h")

target_sources(Notepad2
  PUBLIC "src/Dlapi.c"
  PUBLIC "src/Dlapi.h")

target_sources(Notepad2
  PUBLIC "src/Edit.c"
  PUBLIC "src/Notepad2.h"
  PUBLIC "src/Helpers.h"
  PUBLIC "src/Dialogs.h"
  PUBLIC "scintilla/include/scintilla.h"
  PUBLIC "scintilla/include/scilexer.h"
  PUBLIC "src/Styles.h"
  PUBLIC "src/Edit.h"
  PUBLIC "src/resource.h")

target_sources(Notepad2
  PUBLIC "src/Helpers.c"
  PUBLIC "src/Helpers.h"
  PUBLIC "src/resource.h"
  PUBLIC "scintilla/include/scintilla.h")

target_sources(Notepad2
  PUBLIC "src/Styles.c"
  PUBLIC "src/Dialogs.h"
  PUBLIC "src/Helpers.h"
  PUBLIC "src/Notepad2.h"
  PUBLIC "scintilla/include/scintilla.h"
  PUBLIC "scintilla/include/scilexer.h"
  PUBLIC "src/Edit.h"
  PUBLIC "src/Styles.h"
  PUBLIC "src/resource.h")

target_sources(Notepad2
  PUBLIC "src/CodeRunner.cxx"
  PUBLIC "src/CodeRunner.h"
  PUBLIC "src/odbcsql.cpp"
  PUBLIC "src/odbcsql.h")

target_sources(Notepad2
  PUBLIC "src/Print.cpp"
  PUBLIC "scintilla/include/platform.h"
  PUBLIC "scintilla/include/scintilla.h"
  PUBLIC "scintilla/include/scilexer.h"
  PUBLIC "src/Dialogs.h"
  PUBLIC "src/Helpers.h"
  PUBLIC "src/resource.h")

target_sources(Notepad2
  PUBLIC "scintilla/include/scintilla.h"
  PUBLIC "scintilla/include/scilexer.h"
  PUBLIC "src/Edit.h"
  PUBLIC "src/Styles.h"
  PUBLIC "src/Helpers.h"
  PUBLIC "src/Dialogs.h"
  PUBLIC "src/Notepad2.h"
  PUBLIC "src/resource.h"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/KeyMap.h"
  PUBLIC "src/resource.h"
  PUBLIC "src/version.h"
  PUBLIC "src/Notepad2.ver"
  PUBLIC "res/Encoding.bmp"
  PUBLIC "res/Next.bmp"
  PUBLIC "res/Open.bmp"
  PUBLIC "res/Pick.bmp"
  PUBLIC "res/Prev.bmp"
  PUBLIC "res/Toolbar.bmp"
  PUBLIC "res/Copy.cur"
  PUBLIC "res/Notepad2.ico"
  PUBLIC "res/Run.ico"
  PUBLIC "res/Styles.ico"
  PUBLIC "res/Notepad2.exe.manifest"
  PUBLIC "src/Notepad2.rc")

target_sources(Notepad2
  PUBLIC "src/Catalogue.cxx"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/include/SciLexer.h"
  PUBLIC "scintilla/lexlib/LexerModule.h"
  PUBLIC "scintilla/src/Catalogue.h")

target_include_directories(Notepad2
  PUBLIC "scintilla/include"
  PUBLIC "scintilla/lexlib"
  PUBLIC "scintilla/src"
  PUBLIC "src"
  PUBLIC "include")

target_compile_features(Notepad2
  PUBLIC cxx_std_17)

target_link_libraries(Notepad2
  PRIVATE Notepad2Scintilla
  PUBLIC kernel32.lib
  PUBLIC user32.lib
  PUBLIC gdi32.lib
  PUBLIC Msimg32.lib
  PUBLIC advapi32.lib
  PUBLIC shell32.lib
  PUBLIC shlwapi.lib
  PUBLIC comdlg32.lib
  PUBLIC comctl32.lib
  PUBLIC winspool.lib
  PUBLIC imm32.lib
  PUBLIC ole32.lib
  PUBLIC oleaut32.lib
  PUBLIC psapi.lib
  PUBLIC odbc32)
