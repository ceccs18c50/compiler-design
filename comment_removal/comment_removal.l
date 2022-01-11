%{#include<stdio.h>
%}

%%
\/\/(.*) {};
\/\*(.*\n)*.*\*\/ {};
%%

int main()
{
yyin=fopen("mypgm.c","r");
yylex();
return 0;
}

int yywrap()
{
return 1;
}

