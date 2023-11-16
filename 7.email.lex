%{
#include <stdio.h>
%}

%%
[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,} {
    printf("Valid email: %s\n", yytext);
}
. {
    printf("Invalid email: %s\n", yytext);
}
%%

int yywrap() {
    return 1; // Indicates the end of input
}

int main() {
    yylex();
    return 0;
}
