#include<stdio.h>

main()
{
	int i,a,b,c,sum=0,n;
	a=1,b=1;
	printf("\n ENTER=");
	scanf("%d",&n);
	
	printf("%d %d ",a,b);
	
	for(i=1;i<=n;i++)
	{
		
		
			c=a+b;
			a=b;b=c;
			if(c<4000000)
			{
			printf(" %d",c);
		
				if(c%2==0)
				{
					sum=sum+c;
				}
		}
	}
	printf("\nsum=%d",sum);
}
