#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a=0,sum=0,n=0;
	printf("½Ð¿é¤Jn:");
	scanf("%d",&n);
	for(a=0;a<=n;a++)
    {sum+=a;}
	printf("1+2+...+%d=%d",n,sum);
	system("PAUSE");
	return 0;
 } 
