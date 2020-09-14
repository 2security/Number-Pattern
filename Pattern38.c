#include<stdio.h>
int main()
	{
		int i,j,n,c=1;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++) 
					{
						if(i==j||j==1||i==n)
							printf("1");
						else
							printf("0");
					}
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
