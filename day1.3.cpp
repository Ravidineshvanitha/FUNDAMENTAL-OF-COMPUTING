#include<stdio.h>
int main()
{
	int i,n;
	printf("print all odd numbers till:");
	scanf("%d",&n);
	printf("odd numbers from 1 to %d are:\n",n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
	}
		}
		return 0;
	}

