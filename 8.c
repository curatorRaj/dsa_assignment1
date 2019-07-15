#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *array,i,x,y,n;
	printf("enter size of array\n");
	scanf("%d",&n);

	array = (int*)malloc(n * sizeof(int));
	printf("enter elements of array\n");
	for ( i = 0; i < n; ++i)
	{
		scanf("%d",(array+i));
		/* code */
	}

	printf("enter value of x and y\n");
	scanf("%d%d",&x,&y);
	int xi,yi;
	for ( i = 0; i < n; ++i)
	{
		if (i[array] == x)
		{
			xi = i;
			break;
			/* code */
		}
	}

	for ( i = 0; i < n; ++i)
	{
		if (i[array] == y)
		{
			yi = i;
			break;
			/* code */
		}
	}
	printf("distance between %d and %d  is \n",x,y );
	printf("%d\n",(yi-xi));
}