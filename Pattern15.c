#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,k,c,r;
	
		printf("Enter no f rows");
		scanf("%d",&r);
		printf("Enter no of columns");
		scanf("%d",&c);
		
		for(i=0;i<r;i++)
			{
				for(j=1;j<=c-i;j++)
					printf("%d",j+i);
				for(j=1;j<i+1;j++)
					printf("%d",c);
				printf("\n");
			}
		printf("\n\n");
	
		return 0;
	}
