#ifndef _ODBCSQL_H_
#define _ODBCSQL_H_

#include <windows.h>

int OdbcMain(wchar_t const *connectionString, wchar_t const *query);

#endif // _ODBCSQL_H_
