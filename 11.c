#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *array,i,n,c,j;
	printf("enter size of array\n");
	scanf("%d",&n);

	array = (int*)malloc(n * sizeof(int));
	printf("enter elements of array\n");
	for ( i = 0; i < n; ++i)
	{
		scanf("%d",(array+i));
		/* code */
	}

	for ( i = 0; i < n-1; ++i)
	{
		c = 0;

		for ( j = i+1; j < n; ++j)
		{
			if (*(array+j)> *(array+i))
			{
				/* code */
				i[array] = j[array];
				c= 1;
				break;
			}
			/* code */
		}

		if (c==0)
		{
			i[array] = -1;
		}
		
		/* code */
	}


	*(array+n-1) = -1;
	printf("resulted array\n");
	for ( i = 0; i < n; ++i)
	{
		printf("%d\n",*(array+i));
	}
}