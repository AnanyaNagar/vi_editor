%{
#include <stdio.h>
#include <string.h>
char line[100];
%}

%%

[a-z] {
printf("%c", yytext[0] - 32);
}
[A-Z] {printf("%c", yytext[0] + 32);}


%%

void main()
{
printf("Enter a string : ");
yylex();
}

int yywrap()
{
return 1;
}
