#include<stdio.h>
#include<ctype.h>
void compute(char *s)
{ int t,r;
 char op;
 for(r=0;isdigitt(* s);s++)
 r=r*10+*s-'0';
 while(*s)
 { op=*s++;
 for(t=0;isdigit(*s);s++)
 t=t*10+*s-'0';
 switch(op)
 { case'+':r=r+t;break;
   case'-':r=r-t;break;
   case'*':r=r*t;break;
   case'/':if(t)r=r/t;else{puts("devide error.");return;
   }
 }
 } printf("%d\n",r);
}
 int main()
{ compute("12+6-19+2");
  compute("12/6*19/2");
  return 0;
}