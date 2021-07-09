#include<stdio.h>
int main()
{
	int a,b,i,n, c;
	printf("Enter the length of series=\n");
	scanf("%d",&n);
	
	a=1;
	b=1;
	printf("\t%d\t%d",a,b);
	for(i=1;i<=n-2 ;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\t%d",c);
		
	}
	return 0;
	
}
