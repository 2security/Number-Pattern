#include<stdio.h>
int main()
	{
		int i,j,k=1,n;
		printf("Enter no of columns");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
					printf("%d",k++%2);
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
