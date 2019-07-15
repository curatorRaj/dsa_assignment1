#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *array,i,n,c,j,*array_result,k;
	printf("enter size of array\n");
	scanf("%d",&n);

	array = (int*)malloc(n * sizeof(int));
	array_result = (int*)malloc(n * sizeof(int));
	printf("enter elements of array\n");
	for ( i = 0; i < n; ++i)
	{
		scanf("%d",(array+i));
		/* code */
	}
	int p,previous;;

	for (i = 0; i < n; ++i)
	{
		/* code */
		p=1;
		previous = 1;
		
		for (k = 0; k < i; ++k)
		 {
		 	/* code */
		 	previous *= *(array+k);
		 } 
		for (j = i+1; j < n; ++j)
		{
			/* code */
			p *= *(array+j);

		}

		i[array_result] = p * previous;
	}

	printf("resulted array\n");
	for ( i = 0; i < n; ++i)
	{
		printf("%d\n",*(array_result+i));
	}
}