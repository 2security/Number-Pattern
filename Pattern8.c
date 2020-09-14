#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,k=1,n;
		printf("Enter no of columns");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
					{
						if(i==j||i+j==n+1)
							printf("1");
						else
							printf("0");
					}
				printf("\n");
			}
		printf("\n\n");
	
		return 0;
	}
