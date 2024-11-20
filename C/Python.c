#include<stdio.h>
 main()
{ long a,b;
long *pa,*pb;
*pa=10;
*pb=100;
printf("a=%d,*pa=%d\n",a,*,pa)；
printf("b=%d,*pb=%d\n",b,*,pb);
pb=pa;
printf("b=%d,*pb=%d\n",b,*pb);
return 0;
} 