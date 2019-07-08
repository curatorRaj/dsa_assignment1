#include<stdlib.h>
#include<stdio.h>
int main()
{
	int n,*array,element,i,j,c;
	printf("enter no of elements\n");
	scanf("%d",&n);
	array = (int*)malloc(n * sizeof(int));
	if (array == NULL)
	{
		return 0;
	}
	printf("enter elements in array\n");

	
	for( i = 0; i < n; ++i)
	{
		scanf("%d",array+i);
		
	}
	printf("======================================================\n");
	printf("ELEMEMTS\tNGC\t\n");
	printf("=========================================================\n");

	for ( i = 0; i < n-1; ++i)
	{
		c=0;
		for(j=i+1 ;j<n;j++)
		{
			if (i[array] <j[array])
			{
				printf("%d\t%d\t\n",i[array],j[array] );
				c=1;
				break;
			}


		}
		if (c==0)
		{
			printf("%d\t-1\t\n",i[array] );
		}
	}
	printf("%d\t-1\t\n",(n-1)[array] );
	return 0;
}