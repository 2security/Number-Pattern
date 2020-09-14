#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,n,m,c=0;
		printf("Enter the value:");
		scanf("%d",&m);
		n=m;
		while(n>0)
			{
				c++;
				n=n/10;
			}
		for(i=c;i>=1;i--)
			{
			printf("%d",m);
			m=m/10;
			printf("\n");
			}
		printf("\n\n");
		return 0;
	}
	
	
	
