#include<stdio.h>
int main()
	{
		int i,j,n,c=1;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=1;i<n;i++)
			{
			for(j=1;j<i;j++)
				printf(" ");
			printf("%d",i);
			for(j=1;j<=2*(n-i)-1;j++)
				printf(" ");
			printf("%d",i);
			printf("\n");
			}
		for(i=1;i<n;i++)
			printf(" ");
		printf("%d\n",n);
		
		for(i=n-1;i>=1;i--)
			{
			for(j=1;j<=i-1;j++)
				printf(" ");
			printf("%d",i);
			for(j=1;j<=c;j++)
				printf(" ");
			printf("%d",i);
			c=c+2;
			printf("\n");
			}
		
		printf("\n\n");
		return 0;
	}
	
	
	
