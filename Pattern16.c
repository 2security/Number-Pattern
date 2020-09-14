#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,k,c,r,n;
	
		printf("Enter no f rows");
		scanf("%d",&r);
		printf("Enter no of columns");
		scanf("%d",&c);
		
		for(i=0;i<r;i++)
			{
				n=i;
				for(j=1;j<=c-i;j++)
					printf("%d",j+i);
				for(k=0;k<i;k++)
					printf("%d",n--);
				printf("\n");
			}
		printf("\n\n");
	
		return 0;
	}
