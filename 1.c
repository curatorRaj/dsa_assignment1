#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,*array,i,g;
	printf("enter no of elements \n");
	scanf("%d",&n);
	printf("enter elements\n");
	array = (int*)malloc(n*sizeof(int));
	if (array == NULL)
	{
		return 0;
	}
	for ( i = 0; i < n; ++i)
	{
		scanf("%d",array+i);
		
	}
	g= *(array);
		for (i = 1; i < n; ++i)
	{
		if (array[i]>g)
		{
			g = array[i];
		}
	}

	printf("greatest no is %d \n",g );
	free(array);
	return 0;


}