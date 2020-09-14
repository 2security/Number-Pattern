#include<stdio.h>
int main()
	{
		int r,c,i,j;
		printf("Enter the rows");
		scanf("%d",&r);
		
		printf("Enter the columns");
		scanf("%d",&c);
		
		for(i=1;i<=r;i++)
			{
				for(j=i;j<c+i;j++)
					{
						printf("%d",j);
					}
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
