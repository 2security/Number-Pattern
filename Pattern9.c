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
						if((i==1||i==r)&&(j==1||j==c))   //corner
							printf("0");
						else if(i==1||i==r||j==c||j==1)	//edge
							printf("1");
						else							//center
							printf("0");
					}
				printf("\n");
			}
		printf("\n\n");
	
		return 0;
	}
