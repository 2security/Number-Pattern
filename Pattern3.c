#include<stdio.h>
int main()
	{
		int i,j,k=1,n;
		printf("Enter no of columns");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				for(j=2;j<=n+1;j++)
					printf("%d",j%2);
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
