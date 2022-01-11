%{#include<stdio.h>
%}

%%
if|else|while|for|int|switch|char|float|double|break|continue|const|struct|case {printf("keyword\t");}
[a-z]([a-z])*([0-9])* {printf("identifier\t");}
[= * / + -] {printf("operator\t");}
[' " ; : ,] {printf("punctuation or separator\t");}
[0-9]+ {printf("number");}
%%

int main()
{ yylex();
  return 0;
}

int yywrap()
{
}
