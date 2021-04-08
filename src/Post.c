/******************************************************************************
*
*
* Notepad2
*
* Post.cpp
*   Scintilla Printing Functionality
*   Mostly taken from SciTE, (c) Neil Hodgson, http://www.scintilla.org
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

#include "Post.h"

#include <Scintilla.h>
#include <wininet.h>

HINTERNET OpenUrl(
    HWND hwnd,
    HINTERNET appHandle,
    const char *from)
{
    DWORD httpcode = 0;
    DWORD dwordlen = sizeof(DWORD);
    DWORD zero = 0;
    HINTERNET hUrl = InternetOpenUrlA(
        appHandle,
        from,
        NULL,
        0,
        INTERNET_FLAG_HYPERLINK |
            INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTP |
            INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTPS |
            INTERNET_FLAG_NO_CACHE_WRITE |
            INTERNET_FLAG_NO_COOKIES |
            INTERNET_FLAG_NO_UI |
            INTERNET_FLAG_RESYNCHRONIZE |
            INTERNET_FLAG_RELOAD |
            INTERNET_FLAG_SECURE,
        0);

    if (!hUrl)
    {
        MessageBox(hwnd, L"InternetOpenUrl failed.", L"Posting Content", 0);
    }
    else if (!HttpQueryInfo(hUrl, HTTP_QUERY_STATUS_CODE | HTTP_QUERY_FLAG_NUMBER, &httpcode, &dwordlen, &zero))
    {
        MessageBox(hwnd, L"HttpQueryInfo failed.", L"Posting Content", 0);
    }
    else if (httpcode != 200)
    {
        MessageBox(hwnd, L"HTTP request failed with response code other then 200", L"Posting Content", 0);
    }
    else
    {
        return hUrl;
    }

    InternetCloseHandle(hUrl);

    return NULL;
}

void PostToEndpoint(
    HWND hwndEdit,
    const char *content,
    const char *endpoint)
{
    HINTERNET hInternet = InternetOpenA("wininet-test", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
    HINTERNET hUrl = OpenUrl(
        hwndEdit,
        hInternet,
        endpoint);

    HINTERNET hReq = HttpOpenRequest(hUrl, "POST", NULL, NULL, NULL, NULL, 0, 0); // Remember to gove "POST" here

    HttpSendRequest(hReq, NULL, 0, (LPVOID)content, strlen(content));

    SendMessage(hwndEdit, SCI_BEGINUNDOACTION, 0, 0);

    DWORD dwAvailable;
    char pOutBuf[1024];
    char *pTempBuf = pOutBuf;
    while (InternetQueryDataAvailable(hReq, &dwAvailable, 0, 0) && dwAvailable != 0)
    {
        DWORD dwRead;
        InternetReadFile(hReq, pTempBuf, dwAvailable, &dwRead);
        SendMessage(hwndEdit, SCI_ADDTEXT, dwRead, (LPARAM)pOutBuf);
    }

    SendMessage(hwndEdit, SCI_ENDUNDOACTION, 0, 0);

    InternetCloseHandle(hInternet);
}

void PostContent(
    HWND hwnd,
    const char *content)
{
    MessageBoxA(hwnd, content, "TEST", 0);
}

// End of Post.cpp
