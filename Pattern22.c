#include<stdio.h>
int main()
	{
		int i,j,n;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
			{
				for(j=n-i;j>=1;j--)
					{
						printf("%d",i+1);
					}
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
