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

add_executable(Notepad2 WIN32
  "src/Notepad2.c")

target_sources(Notepad2
  PUBLIC "scintilla/lexers/LexA68k.cxx"
  PUBLIC "scintilla/lexers/LexAbaqus.cxx"
  PUBLIC "scintilla/lexers/LexAda.cxx"
  PUBLIC "scintilla/lexers/LexAPDL.cxx"
  PUBLIC "scintilla/lexers/LexAsm.cxx"
  PUBLIC "scintilla/lexers/LexAsn1.cxx"
  PUBLIC "scintilla/lexers/LexASY.cxx"
  PUBLIC "scintilla/lexers/LexAU3.cxx"
  PUBLIC "scintilla/lexers/LexAVE.cxx"
  PUBLIC "scintilla/lexers/LexAVS.cxx"
  PUBLIC "scintilla/lexers/LexBaan.cxx"
  PUBLIC "scintilla/lexers/LexBash.cxx"
  PUBLIC "scintilla/lexers/LexBatch.cxx"
  PUBLIC "scintilla/lexers/LexBibTeX.cxx"
  PUBLIC "scintilla/lexers/LexBullant.cxx"
  PUBLIC "scintilla/lexers/LexCaml.cxx"
  PUBLIC "scintilla/lexers/LexCIL.cxx"
  PUBLIC "scintilla/lexers/LexClw.cxx"
  PUBLIC "scintilla/lexers/LexCmake.cxx"
  PUBLIC "scintilla/lexers/LexCOBOL.cxx"
  PUBLIC "scintilla/lexers/LexCoffeeScript.cxx"
  PUBLIC "scintilla/lexers/LexConf.cxx"
  PUBLIC "scintilla/lexers/LexCPP.cxx"
  PUBLIC "scintilla/lexers/LexCsound.cxx"
  PUBLIC "scintilla/lexers/LexCss.cxx"
  PUBLIC "scintilla/lexers/LexD.cxx"
  PUBLIC "scintilla/lexers/LexDataflex.cxx"
  PUBLIC "scintilla/lexers/LexDiff.cxx"
  PUBLIC "scintilla/lexers/LexDMAP.cxx"
  PUBLIC "scintilla/lexers/LexDMIS.cxx"
  PUBLIC "scintilla/lexers/LexECL.cxx"
  PUBLIC "scintilla/lexers/LexEDIFACT.cxx"
  PUBLIC "scintilla/lexers/LexEiffel.cxx"
  PUBLIC "scintilla/lexers/LexErlang.cxx"
  PUBLIC "scintilla/lexers/LexErrorList.cxx"
  PUBLIC "scintilla/lexers/LexESCRIPT.cxx"
  PUBLIC "scintilla/lexers/LexFlagShip.cxx"
  PUBLIC "scintilla/lexers/LexForth.cxx"
  PUBLIC "scintilla/lexers/LexFortran.cxx"
  PUBLIC "scintilla/lexers/LexGAP.cxx"
  PUBLIC "scintilla/lexers/LexGui4Cli.cxx"
  PUBLIC "scintilla/lexers/LexHaskell.cxx"
  PUBLIC "scintilla/lexers/LexHTML.cxx"
  PUBLIC "scintilla/lexers/LexIndent.cxx"
  PUBLIC "scintilla/lexers/LexInno.cxx"
  PUBLIC "scintilla/lexers/LexJSON.cxx"
  PUBLIC "scintilla/lexers/LexKix.cxx"
  PUBLIC "scintilla/lexers/LexKVIrc.cxx"
  PUBLIC "scintilla/lexers/LexLatex.cxx"
  PUBLIC "scintilla/lexers/LexLISP.cxx"
  PUBLIC "scintilla/lexers/LexLout.cxx"
  PUBLIC "scintilla/lexers/LexLua.cxx"
  PUBLIC "scintilla/lexers/LexMake.cxx"
  PUBLIC "scintilla/lexers/LexMarkdown.cxx"
  PUBLIC "scintilla/lexers/LexMatlab.cxx"
  PUBLIC "scintilla/lexers/LexMaxima.cxx"
  PUBLIC "scintilla/lexers/LexMETAPOST.cxx"
  PUBLIC "scintilla/lexers/LexMMIXAL.cxx"
  PUBLIC "scintilla/lexers/LexModula.cxx"
  PUBLIC "scintilla/lexers/LexMSSQL.cxx"
  PUBLIC "scintilla/lexers/LexMySQL.cxx"
  PUBLIC "scintilla/lexers/LexNim.cxx"
  PUBLIC "scintilla/lexers/LexNimrod.cxx"
  PUBLIC "scintilla/lexers/LexNsis.cxx"
  PUBLIC "scintilla/lexers/LexNull.cxx"
  PUBLIC "scintilla/lexers/LexOpal.cxx"
  PUBLIC "scintilla/lexers/LexOScript.cxx"
  PUBLIC "scintilla/lexers/LexPascal.cxx"
  PUBLIC "scintilla/lexers/LexPB.cxx"
  PUBLIC "scintilla/lexers/LexPerl.cxx"
  PUBLIC "scintilla/lexers/LexPLM.cxx"
  PUBLIC "scintilla/lexers/LexPO.cxx"
  PUBLIC "scintilla/lexers/LexPOV.cxx"
  PUBLIC "scintilla/lexers/LexPowerPro.cxx"
  PUBLIC "scintilla/lexers/LexPowerShell.cxx"
  PUBLIC "scintilla/lexers/LexProgress.cxx"
  PUBLIC "scintilla/lexers/LexProps.cxx"
  PUBLIC "scintilla/lexers/LexPS.cxx"
  PUBLIC "scintilla/lexers/LexPython.cxx"
  PUBLIC "scintilla/lexers/LexR.cxx"
  PUBLIC "scintilla/lexers/LexREBOL.cxx"
  PUBLIC "scintilla/lexers/LexRegistry.cxx"
  PUBLIC "scintilla/lexers/LexRuby.cxx"
  PUBLIC "scintilla/lexers/LexRust.cxx"
  PUBLIC "scintilla/lexers/LexSAS.cxx"
  PUBLIC "scintilla/lexers/LexScriptol.cxx"
  PUBLIC "scintilla/lexers/LexSmalltalk.cxx"
  PUBLIC "scintilla/lexers/LexSML.cxx"
  PUBLIC "scintilla/lexers/LexSpecman.cxx"
  PUBLIC "scintilla/lexers/LexSpice.cxx"
  PUBLIC "scintilla/lexers/LexSQL.cxx"
  PUBLIC "scintilla/lexers/LexStata.cxx"
  PUBLIC "scintilla/lexers/LexSTTXT.cxx"
  PUBLIC "scintilla/lexers/LexTACL.cxx"
  PUBLIC "scintilla/lexers/LexTADS3.cxx"
  PUBLIC "scintilla/lexers/LexTAL.cxx"
  PUBLIC "scintilla/lexers/LexTCL.cxx"
  PUBLIC "scintilla/lexers/LexTCMD.cxx"
  PUBLIC "scintilla/lexers/LexTeX.cxx"
  PUBLIC "scintilla/lexers/LexTxt2tags.cxx"
  PUBLIC "scintilla/lexers/LexVB.cxx"
  PUBLIC "scintilla/lexers/LexVerilog.cxx"
  PUBLIC "scintilla/lexers/LexVHDL.cxx"
  PUBLIC "scintilla/lexers/LexVisualProlog.cxx"
  PUBLIC "scintilla/lexers/LexX12.cxx"
  PUBLIC "scintilla/lexers/LexYAML.cxx")

target_sources(Notepad2
  PUBLIC "scintilla/lexlib/Accessor.cxx"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/include/SciLexer.h"
  PUBLIC "scintilla/lexlib/PropSetSimple.h"
  PUBLIC "scintilla/lexlib/WordList.h"
  PUBLIC "scintilla/lexlib/LexAccessor.h"
  PUBLIC "scintilla/lexlib/Accessor.h")

target_sources(Notepad2
  PUBLIC "scintilla/lexlib/CharacterSet.cxx"
  PUBLIC "scintilla/lexlib/CharacterSet.h")

target_sources(Notepad2
  PUBLIC "scintilla/lexlib/LexerBase.cxx"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/include/SciLexer.h"
  PUBLIC "scintilla/lexlib/PropSetSimple.h"
  PUBLIC "scintilla/lexlib/WordList.h"
  PUBLIC "scintilla/lexlib/LexAccessor.h"
  PUBLIC "scintilla/lexlib/Accessor.h"
  PUBLIC "scintilla/lexlib/LexerModule.h"
  PUBLIC "scintilla/lexlib/LexerBase.h")

target_sources(Notepad2
  PUBLIC "scintilla/lexlib/LexerModule.cxx"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/include/SciLexer.h"
  PUBLIC "scintilla/lexlib/PropSetSimple.h"
  PUBLIC "scintilla/lexlib/WordList.h"
  PUBLIC "scintilla/lexlib/LexAccessor.h"
  PUBLIC "scintilla/lexlib/Accessor.h"
  PUBLIC "scintilla/lexlib/LexerModule.h"
  PUBLIC "scintilla/lexlib/LexerBase.h"
  PUBLIC "scintilla/lexlib/LexerSimple.h")

target_sources(Notepad2
  PUBLIC "scintilla/lexlib/LexerSimple.cxx"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/include/SciLexer.h"
  PUBLIC "scintilla/lexlib/PropSetSimple.h"
  PUBLIC "scintilla/lexlib/WordList.h"
  PUBLIC "scintilla/lexlib/LexAccessor.h"
  PUBLIC "scintilla/lexlib/Accessor.h"
  PUBLIC "scintilla/lexlib/LexerModule.h"
  PUBLIC "scintilla/lexlib/LexerBase.h"
  PUBLIC "scintilla/lexlib/LexerSimple.h")

target_sources(Notepad2
  PUBLIC "scintilla/lexlib/PropSetSimple.cxx"
  PUBLIC "scintilla/lexlib/PropSetSimple.h")

target_sources(Notepad2
  PUBLIC "scintilla/lexlib/StyleContext.cxx"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/lexlib/LexAccessor.h"
  PUBLIC "scintilla/lexlib/Accessor.h"
  PUBLIC "scintilla/lexlib/StyleContext.h")

target_sources(Notepad2
  PUBLIC "scintilla/lexlib/WordList.cxx"
  PUBLIC "scintilla/lexlib/WordList.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/AutoComplete.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/lexlib/CharacterSet.h"
  PUBLIC "scintilla/src/AutoComplete.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/CallTip.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/CallTip.h")

target_sources(Notepad2
  PUBLIC "src/Catalogue.cxx"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/include/SciLexer.h"
  PUBLIC "scintilla/lexlib/LexerModule.h"
  PUBLIC "scintilla/src/Catalogue.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/CellBuffer.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/SplitVector.h"
  PUBLIC "scintilla/src/Partitioning.h"
  PUBLIC "scintilla/src/CellBuffer.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/CharClassify.cxx"
  PUBLIC "scintilla/src/CharClassify.h"
  PUBLIC "scintilla/lexlib/CharacterSet.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/ContractionState.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/src/SplitVector.h"
  PUBLIC "scintilla/src/Partitioning.h"
  PUBLIC "scintilla/src/RunStyles.h"
  PUBLIC "scintilla/src/ContractionState.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/Decoration.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/SplitVector.h"
  PUBLIC "scintilla/src/Partitioning.h"
  PUBLIC "scintilla/src/RunStyles.h"
  PUBLIC "scintilla/src/Decoration.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/Document.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/SplitVector.h"
  PUBLIC "scintilla/src/Partitioning.h"
  PUBLIC "scintilla/src/RunStyles.h"
  PUBLIC "scintilla/src/CellBuffer.h"
  PUBLIC "scintilla/src/PerLine.h"
  PUBLIC "scintilla/src/CharClassify.h"
  PUBLIC "scintilla/lexlib/CharacterSet.h"
  PUBLIC "scintilla/src/Decoration.h"
  PUBLIC "scintilla/src/Document.h"
  PUBLIC "scintilla/src/RESearch.h"
  PUBLIC "scintilla/src/UniConversion.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/Editor.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/SplitVector.h"
  PUBLIC "scintilla/src/Partitioning.h"
  PUBLIC "scintilla/src/RunStyles.h"
  PUBLIC "scintilla/src/ContractionState.h"
  PUBLIC "scintilla/src/CellBuffer.h"
  PUBLIC "scintilla/src/KeyMap.h"
  PUBLIC "scintilla/src/Indicator.h"
  PUBLIC "scintilla/src/XPM.h"
  PUBLIC "scintilla/src/LineMarker.h"
  PUBLIC "scintilla/src/Style.h"
  PUBLIC "scintilla/src/ViewStyle.h"
  PUBLIC "scintilla/src/CharClassify.h"
  PUBLIC "scintilla/lexlib/CharacterSet.h"
  PUBLIC "scintilla/src/Decoration.h"
  PUBLIC "scintilla/src/Document.h"
  PUBLIC "scintilla/src/Selection.h"
  PUBLIC "scintilla/src/PositionCache.h"
  PUBLIC "scintilla/src/Editor.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/ExternalLexer.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/include/SciLexer.h"
  PUBLIC "scintilla/lexlib/LexerModule.h"
  PUBLIC "scintilla/src/Catalogue.h"
  PUBLIC "scintilla/src/ExternalLexer.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/Indicator.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/Indicator.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/LineMarker.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/XPM.h"
  PUBLIC "scintilla/src/LineMarker.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/PerLine.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/SplitVector.h"
  PUBLIC "scintilla/src/Partitioning.h"
  PUBLIC "scintilla/src/CellBuffer.h"
  PUBLIC "scintilla/src/PerLine.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/PositionCache.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/SplitVector.h"
  PUBLIC "scintilla/src/Partitioning.h"
  PUBLIC "scintilla/src/RunStyles.h"
  PUBLIC "scintilla/src/ContractionState.h"
  PUBLIC "scintilla/src/CellBuffer.h"
  PUBLIC "scintilla/src/KeyMap.h"
  PUBLIC "scintilla/src/Indicator.h"
  PUBLIC "scintilla/src/XPM.h"
  PUBLIC "scintilla/src/LineMarker.h"
  PUBLIC "scintilla/src/Style.h"
  PUBLIC "scintilla/src/ViewStyle.h"
  PUBLIC "scintilla/src/CharClassify.h"
  PUBLIC "scintilla/lexlib/CharacterCategory.h"
  PUBLIC "scintilla/src/Decoration.h"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/src/Document.h"
  PUBLIC "scintilla/src/Selection.h"
  PUBLIC "scintilla/src/PositionCache.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/RESearch.cxx"
  PUBLIC "scintilla/src/CharClassify.h"
  PUBLIC "scintilla/src/RESearch.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/RunStyles.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/SplitVector.h"
  PUBLIC "scintilla/src/Partitioning.h"
  PUBLIC "scintilla/src/RunStyles.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/ScintillaBase.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/lexlib/PropSetSimple.h"
  PUBLIC "scintilla/include/SciLexer.h"
  PUBLIC "scintilla/lexlib/LexerModule.h"
  PUBLIC "scintilla/src/Catalogue.h"
  PUBLIC "scintilla/src/SplitVector.h"
  PUBLIC "scintilla/src/Partitioning.h"
  PUBLIC "scintilla/src/RunStyles.h"
  PUBLIC "scintilla/src/ContractionState.h"
  PUBLIC "scintilla/src/CellBuffer.h"
  PUBLIC "scintilla/src/CallTip.h"
  PUBLIC "scintilla/src/KeyMap.h"
  PUBLIC "scintilla/src/Indicator.h"
  PUBLIC "scintilla/src/XPM.h"
  PUBLIC "scintilla/src/LineMarker.h"
  PUBLIC "scintilla/src/Style.h"
  PUBLIC "scintilla/src/ViewStyle.h"
  PUBLIC "scintilla/src/AutoComplete.h"
  PUBLIC "scintilla/src/CharClassify.h"
  PUBLIC "scintilla/src/Decoration.h"
  PUBLIC "scintilla/src/Document.h"
  PUBLIC "scintilla/src/Selection.h"
  PUBLIC "scintilla/src/PositionCache.h"
  PUBLIC "scintilla/src/Editor.h"
  PUBLIC "scintilla/src/ScintillaBase.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/Selection.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/Selection.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/Style.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/Style.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/UniConversion.cxx"
  PUBLIC "scintilla/src/UniConversion.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/ViewStyle.cxx"
  PUBLIC "scintilla/src/UniqueString.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/src/SplitVector.h"
  PUBLIC "scintilla/src/Partitioning.h"
  PUBLIC "scintilla/src/RunStyles.h"
  PUBLIC "scintilla/src/Indicator.h"
  PUBLIC "scintilla/src/XPM.h"
  PUBLIC "scintilla/src/LineMarker.h"
  PUBLIC "scintilla/src/Style.h"
  PUBLIC "scintilla/src/ViewStyle.h")

target_sources(Notepad2
  PUBLIC "scintilla/src/XPM.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/src/XPM.h")

target_sources(Notepad2
  PUBLIC "scintilla/win32/PlatWin.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/src/UniConversion.h"
  PUBLIC "scintilla/src/XPM.h"
  PUBLIC "scintilla/src/FontQuality.h")

target_sources(Notepad2
  PUBLIC "scintilla/win32/ScintillaWin.cxx"
  PUBLIC "scintilla/src/AutoComplete.cxx"
  PUBLIC "scintilla/src/CallTip.cxx"
  PUBLIC "scintilla/src/CaseConvert.cxx"
  PUBLIC "scintilla/src/CaseFolder.cxx"
  PUBLIC "scintilla/src/CellBuffer.cxx"
  PUBLIC "scintilla/lexlib/CharacterCategory.cxx"
  PUBLIC "scintilla/lexlib/CharacterSet.cxx"
  PUBLIC "scintilla/src/CharClassify.cxx"
  PUBLIC "scintilla/src/ContractionState.cxx"
  PUBLIC "scintilla/src/DBCS.cxx"
  PUBLIC "scintilla/src/Decoration.cxx"
  PUBLIC "scintilla/lexlib/DefaultLexer.cxx"
  PUBLIC "scintilla/src/Document.cxx"
  PUBLIC "scintilla/src/EditModel.cxx"
  PUBLIC "scintilla/src/Editor.cxx"
  PUBLIC "scintilla/src/EditView.cxx"
  PUBLIC "scintilla/src/Indicator.cxx"
  PUBLIC "scintilla/src/KeyMap.cxx"
  PUBLIC "scintilla/src/LineMarker.cxx"
  PUBLIC "scintilla/src/MarginView.cxx"
  PUBLIC "scintilla/src/PerLine.cxx"
  PUBLIC "scintilla/win32/PlatWin.cxx"
  PUBLIC "scintilla/src/PositionCache.cxx"
  PUBLIC "scintilla/lexlib/PropSetSimple.cxx"
  PUBLIC "scintilla/src/RESearch.cxx"
  PUBLIC "scintilla/src/RunStyles.cxx"
  PUBLIC "scintilla/src/Selection.cxx"
  PUBLIC "scintilla/src/Style.cxx"
  PUBLIC "scintilla/src/UniConversion.cxx"
  PUBLIC "scintilla/src/UniqueString.cxx"
  PUBLIC "scintilla/src/ViewStyle.cxx"
  PUBLIC "scintilla/src/XPM.cxx"
  PUBLIC "scintilla/win32/HanjaDic.cxx"
  PUBLIC "scintilla/include/Platform.h"
  PUBLIC "scintilla/include/ILexer.h"
  PUBLIC "scintilla/include/Scintilla.h"
  PUBLIC "scintilla/include/SciLexer.h"
  PUBLIC "scintilla/lexlib/LexerModule.h"
  PUBLIC "scintilla/src/SplitVector.h"
  PUBLIC "scintilla/src/Partitioning.h"
  PUBLIC "scintilla/src/RunStyles.h"
  PUBLIC "scintilla/src/ContractionState.h"
  PUBLIC "scintilla/src/CellBuffer.h"
  PUBLIC "scintilla/src/CallTip.h"
  PUBLIC "scintilla/src/KeyMap.h"
  PUBLIC "scintilla/src/Indicator.h"
  PUBLIC "scintilla/src/XPM.h"
  PUBLIC "scintilla/src/LineMarker.h"
  PUBLIC "scintilla/src/Style.h"
  PUBLIC "scintilla/src/AutoComplete.h"
  PUBLIC "scintilla/src/ViewStyle.h"
  PUBLIC "scintilla/src/CharClassify.h"
  PUBLIC "scintilla/lexlib/CharacterCategory.h"
  PUBLIC "scintilla/src/Decoration.h"
  PUBLIC "scintilla/src/Document.h"
  PUBLIC "scintilla/src/Selection.h"
  PUBLIC "scintilla/src/PositionCache.h"
  PUBLIC "scintilla/src/Position.h"
  PUBLIC "scintilla/src/Editor.h"
  PUBLIC "scintilla/src/ScintillaBase.h"
  PUBLIC "scintilla/src/UniConversion.h"
  PUBLIC "scintilla/src/ExternalLexer.h")

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

target_include_directories(Notepad2
  PUBLIC "scintilla/include"
  PUBLIC "scintilla/lexlib"
  PUBLIC "scintilla/src"
  PUBLIC "include")

target_compile_features(Notepad2
  PUBLIC cxx_std_17
  )

target_link_libraries(Notepad2
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
