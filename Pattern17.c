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
				n=i+1;
				for(j=1;j<=i;j++)
					printf("%d",n--);
				for(k=0;k<c-i;k++)
					printf("%d",k+1);
				printf("\n");
			}
		printf("\n\n");
	
		return 0;
	}
