#include<stdio.h>
int main()
	{
		int i,j,n,c=1;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
					printf("%d",2*j-1);
						
				for(j=2*i-1;j>1;j=j-2)
					printf("%d",j-2);
					
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
