#include<stdio.h>
int main()
	{
		int i,j,n,c;
		printf("Enter the value:");
		scanf("%d",&n);
	
		for(i=1;i<=n;i++)
			{
				c=i-1;
			for(j=1;j<=i;j++)	
				printf("%d",j);
			for(j=2;j<=i;j++)
				printf("%d",c--);
			printf("\n");
			}
		for(i=n-1;i>=1;i--)
			{
				c=i-1;
			for(j=1;j<=i;j++)
				printf("%d",j);
			for(j=2;j<=i;j++)
				printf("%d",c--);
			printf("\n");
			}
		printf("\n\n");
		return 0;
	}
	
	
	
