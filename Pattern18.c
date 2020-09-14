#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,k,r,n;
	
		printf("Enter value");
		scanf("%d",&r);
	
		for(i=r;i>=1;i--)
			{
				k=r;
				n=i+1;
				for(j=0;j<r-i;j++)
					printf("%-3d",k--);
				for(j=1;j<=2*i-1;j++)
					printf("%-3d",i);
				for(j=0;j<r-i;j++)	
					printf("%-3d",n++);			
			printf("\n");
			}
		for(i=1;i<r;i++)
			{
				k=r;
				n=i+1;
				for(j=1;j<=r-i;j++)
					printf("%-3d",k--);
				for(j=1;j<=2*i-1;j++)
					printf("%-3d",i+1);
				for(j=1;j<=r-i;j++)
					printf("%-3d",n++);
				
				printf("\n");
			}
		printf("\n\n");
	
		return 0;
	}
