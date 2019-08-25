/******************************************************************************
*
*
* Notepad2
*
* Styles.h
*   Scintilla Style Management
*
* See Readme.txt for more information about this source code.
* Please send me your comments to this work.
*
* See License.txt for details about distribution and modification.
*
*                                              (c) Florian Balmer 1996-2011
*                                                  florian.balmer@gmail.com
*                                               http://www.flos-freeware.ch
*
*
******************************************************************************/

#ifndef _STYLES_H_
#define _STYLES_H_

#define _WIN32_WINNT 0x501
#include <windows.h>

typedef struct _editstyle
{
    union {
        INT32 iStyle;
        UINT8 iStyle8[4];
    };
    int rid;
    WCHAR *pszName;
    WCHAR *pszDefault;
    WCHAR szValue[128];

} EDITSTYLE, *PEDITSTYLE;

typedef struct _keywordlist
{
    char *pszKeyWords[9];

} KEYWORDLIST, *PKEYWORDLIST;

typedef struct _editlexer
{
    int iLexer;
    int rid;
    WCHAR *pszName;
    WCHAR *pszDefExt;
    WCHAR szExtensions[128];
    PKEYWORDLIST pKeyWords;
    EDITSTYLE Styles[];

} EDITLEXER, *PEDITLEXER;

// Number of Lexers in pLexArray
#define NUMLEXERS 22

extern KEYWORDLIST KeyWords_NULL;
extern EDITLEXER lexDefault;
extern KEYWORDLIST KeyWords_HTML;
extern EDITLEXER lexHTML;
extern KEYWORDLIST KeyWords_XML;
extern EDITLEXER lexXML;
extern KEYWORDLIST KeyWords_CSS;
extern EDITLEXER lexCSS;
extern KEYWORDLIST KeyWords_CPP;
extern EDITLEXER lexCPP;
extern KEYWORDLIST KeyWords_CS;
extern EDITLEXER lexCS;
extern KEYWORDLIST KeyWords_RC;
extern EDITLEXER lexRC;
extern KEYWORDLIST KeyWords_MAK;
extern EDITLEXER lexMAK;
extern KEYWORDLIST KeyWords_VBS;
extern EDITLEXER lexVBS;
extern KEYWORDLIST KeyWords_VB;
extern EDITLEXER lexVB;
extern KEYWORDLIST KeyWords_JS;
extern EDITLEXER lexJS;
extern KEYWORDLIST KeyWords_JAVA;
extern EDITLEXER lexJAVA;
extern KEYWORDLIST KeyWords_PAS;
extern EDITLEXER lexPAS;
extern KEYWORDLIST KeyWords_ASM;
extern EDITLEXER lexASM;
extern KEYWORDLIST KeyWords_PL;
extern EDITLEXER lexPL;
extern KEYWORDLIST KeyWords_INI;
extern EDITLEXER lexINI;
extern KEYWORDLIST KeyWords_BAT;
extern EDITLEXER lexBAT;
extern KEYWORDLIST KeyWords_DIFF;
extern EDITLEXER lexDIFF;
extern KEYWORDLIST KeyWords_SQL;
extern EDITLEXER lexSQL;
extern KEYWORDLIST KeyWords_PY;
extern EDITLEXER lexPY;
extern KEYWORDLIST KeyWords_CONF;
extern EDITLEXER lexCONF;
extern KEYWORDLIST KeyWords_PS;
extern EDITLEXER lexPS;

// This array holds all the lexers...
extern PEDITLEXER pLexArray[NUMLEXERS];
extern PEDITLEXER pLexCurrent;
extern COLORREF crCustom[16];
extern BOOL bUse2ndDefaultStyle;
extern BOOL fStylesModified;
extern BOOL fWarnedNoIniFile;
extern BOOL fIsConsolasAvailable;
extern int iBaseFontSize;
extern int iDefaultLexer;
extern BOOL bAutoSelect;
extern int cxStyleSelectDlg;
extern int cyStyleSelectDlg;

void Style_Load();
void Style_Save();
BOOL Style_Import(HWND);
BOOL Style_Export(HWND);
void Style_SetLexer(HWND, PEDITLEXER);
void Style_SetLongLineColors(HWND);
void Style_SetCurrentLineBackground(HWND);
void Style_SetLexerFromFile(HWND, LPCWSTR);
void Style_SetLexerFromName(HWND, LPCWSTR, LPCWSTR);
void Style_SetDefaultLexer(HWND);
void Style_SetHTMLLexer(HWND);
void Style_SetXMLLexer(HWND);
void Style_SetLexerFromID(HWND, int);
void Style_SetDefaultFont(HWND);
void Style_ToggleUse2ndDefault(HWND);
BOOL Style_GetUse2ndDefault(HWND);
void Style_SetIndentGuides(HWND, BOOL);
BOOL Style_GetOpenDlgFilterStr(LPWSTR, int);
BOOL Style_StrGetFont(LPCWSTR, LPWSTR, int);
BOOL Style_StrGetFontQuality(LPCWSTR, LPWSTR, int);
BOOL Style_StrGetCharSet(LPCWSTR, int *);
BOOL Style_StrGetSize(LPCWSTR, int *);
BOOL Style_StrGetSizeStr(LPCWSTR, LPWSTR, int);
BOOL Style_StrGetColor(BOOL, LPCWSTR, int *);
BOOL Style_StrGetCase(LPCWSTR, int *);
BOOL Style_StrGetAlpha(LPCWSTR, int *);
BOOL Style_SelectFont(HWND, LPWSTR, int, BOOL);
BOOL Style_SelectColor(HWND, BOOL, LPWSTR, int);
void Style_SetStyles(HWND, int, LPCWSTR);
void Style_SetFontQuality(HWND, LPCWSTR);
void Style_GetCurrentLexerName(LPWSTR, int);
int Style_GetLexerIconId(PEDITLEXER);
void Style_AddLexerToTreeView(HWND, PEDITLEXER);
INT_PTR CALLBACK Styles_ConfigDlgProc(HWND, UINT, WPARAM, LPARAM);
void Style_ConfigDlg(HWND);
INT_PTR CALLBACK Style_SelectLexerDlgProc(HWND, UINT, WPARAM, LPARAM);
void Style_SelectLexerDlg(HWND);

#endif // _STYLES_H_

/* End of Style.h */
