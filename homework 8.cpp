#include "stdio.h"
#include "stdlib.h"
int main()
{
	int n,x;
	printf("請輸入要累加到多少: ");
	scanf("%d",&x);
	for(int a=2;a<=x;a++)
	{
		n=0;
		for(int i=1;i<=a;i++)
		if(a%i==0)
		n++;
		if(n==2)
		printf("%d\t",a);
	}
	printf("\n");
	system("PAUSE");
	return 0;
} 
