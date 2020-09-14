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
						if(i==(n+1)/2&&j==(n+1)/2)
							printf("0");
						else
							printf("1");
					}
				printf("\n");
			}
		printf("\n\n");
	
		return 0;
	}
