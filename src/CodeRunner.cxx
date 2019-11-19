#define _WIN32_WINNT 0x501
#include <windows.h>

#include "CodeRunner.h"
#include <string>
#include <vector>
#include <sstream>

#include "odbcsql.h"

void CodeRunner_Execute(
    CodeRunner_ExecuteModel const model)
{
    if (model.content == NULL)
    {
        return;
    };
    
    std::wstring const str = model.content;
    
    auto headerEnd = str.find(L"\n\n");
    
    if (headerEnd == std::string::npos)
    {
        headerEnd = str.find(L"\r\n\r\n");
    }
    
    if (headerEnd == std::string::npos)
    {
        headerEnd = str.size();
    }
    
    auto header = str.substr(0, headerEnd);
    std::wstringstream stream(header);
    std::wstring line;
    std::vector<std::wstring> lines;
    while(std::getline(stream, line))
    {
        if (line.size() > 0)
        {
            lines.push_back(line);
        }
    }
    
    auto action = lines.front().substr(0, str.find_first_of(' '));
    auto parameter = lines.front().substr(str.find_first_of(' ') + 1);
    auto body = str.substr(headerEnd);

    int msgboxID = MessageBox(
        NULL,
        (LPCWSTR)parameter.c_str(),
        (LPCWSTR)action.c_str(),
        MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
    );
    
    if (action == L"MSSQL" || action == L"SQL")
    {
        OdbcMain(parameter.c_str(), body.c_str());
    }
    else if (action == L"SQLITE")
    {
    }
    else if (action == L"POST" || action == L"GET")
    {
        auto url = parameter.substr(0, parameter.find_last_of(' '));
    }
}
