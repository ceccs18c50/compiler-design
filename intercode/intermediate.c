#include<stdio.h>
#include<string.h>

void code_for_operator(char *inp,char operator,char *reg)
{ int i=0,j=0;
  char temp[100];
  while(inp[i]!='\0')
  { if(inp[i]==operator)
      { printf("%c\t%c\t%c\t%c\n",operator,*reg,inp[i-1],inp[i+1]);
        temp[j-1]=*reg;
        i+=2;
        (*reg)--;
        continue;
      }
    temp[j]=inp[i];
    i++;
    j++;
   }
   temp[++j]='\0';
   strcpy(inp,temp);
}



void gen_code(char *inp)
{ char reg='z';
  code_for_operator(inp,'/',&reg);
  code_for_operator(inp,'*',&reg);
  code_for_operator(inp,'+',&reg);
  code_for_operator(inp,'-',&reg);
  code_for_operator(inp,'=',&reg);
}


int main()
{ char inp[100];
  printf("enter expression:\n");
  scanf("%s",inp);
  printf("oprtr\tdestn\top1\top2\n");
  gen_code(inp);

}
