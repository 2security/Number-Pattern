#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,n,k=0,c=1;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				if(i%2==0)
					{	
						k=c+i-1;
						for(j=1;j<=i;j++)
							{
							printf("%-4d",k--);	
							c++;
							}
					}
				else
					{
					for(j=1;j<=i;j++)
						printf("%-4d",c++);	
					}
					
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
	
	
	
