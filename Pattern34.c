#include<stdio.h>
int main()
	{
		int i,j,n,c;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=1;i<=2*n-1;i=i+2)
			{
				for(j=i;j<=2*n-1;j=j+2) 
					{
						printf("%d",j);
					}
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
