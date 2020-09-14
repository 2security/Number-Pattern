#include<stdio.h>
int main()
	{
		int i,j,n,c;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				c=i+1;
				for(j=3;j<=i;j++)					
					printf("%d",c++);
				for(j=2*i-1;j>=i;j--)
					printf("%d",j);
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
