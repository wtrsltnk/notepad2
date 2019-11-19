#ifndef _CODERUNNER_H_
#define _CODERUNNER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct 
{
    WCHAR *content;
    int lexer;
} CodeRunner_ExecuteModel;

void CodeRunner_Execute(
    CodeRunner_ExecuteModel const model);

#ifdef __cplusplus
}
#endif

#endif // _CODERUNNER_H_