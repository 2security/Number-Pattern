#include<stdio.h>
int main()
	{
		int i,j,n,k;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				k=n;
				for(j=i;j<=n;j++) 
					{
						printf("%d",k--);
					}
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
