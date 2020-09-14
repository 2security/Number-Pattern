#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,n,c=1,k=1;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
					{
					printf("%-3d",k);	
					k=k+c++;
					}	
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
	
	
	
