#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,k,c,r;
	
		printf("Enter no f rows");
		scanf("%d",&r);
		printf("Enter no of columns");
		scanf("%d",&c);
		
		for(i=1;i<=r;i++)
			{
				for(j=c;j>c-i;j--)
					printf("%d",j);
					
				for(k=1;k<=c-i;k++)
					printf("%d",r-i+1);

				printf("\n");
			}
		printf("\n\n");
	
		return 0;
	}
