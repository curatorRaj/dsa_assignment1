#include<stdlib.h>
#include<stdio.h>
int main()
{
	int n,*array,i,j;
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

	for (i = 0; i < n-1; ++i)
	{
		for ( j = i+1; j < n; ++j)
		{
			if (array[i]>array[j])
			{
				//swap
				array[i] += array[j];
				array[j] = array[i] - array[j];
				array[i] = array[i] - array[j]; 
			}
		}
	}
	printf("==============================================================\n");

	for( i = 0; i < n; ++i)
	{
		printf("%d\n",array[i] );
		
	}
	free(array);
}