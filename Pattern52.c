#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,n,k=0,c=1;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				if(i<=n/2)
					{
						for(j=1;j<=i;j++)
							printf("%d",i);
					}
				else
					{
						for(j=1;j<=i;j++)
						printf("%d",n-i+1);	
					}
			printf("\n");
					
			}
		printf("\n\n");
		return 0;
	}
	
	
	
