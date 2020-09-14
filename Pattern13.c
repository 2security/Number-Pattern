#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,k=1,c,r;
		printf("Enter no f rows");
		scanf("%d",&r);
		printf("Enter no of columns");
		scanf("%d",&c);
		
		for(i=1;i<=r;i++)
			{
				for(j=1;j<=c;j++)
					{
						printf("%-3d",k++);
					}
				printf("\n");
			}
		printf("\n\n");
	
		return 0;
	}
