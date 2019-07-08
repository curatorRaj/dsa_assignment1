#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*array,i;
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
	int temp;

	for( i = 0; i < n/2; ++i)
	{
		temp = array[i];
		array[i] = array[n-i-1];
		array[n-i-1] = temp;


		
	}
	printf("--=======================================================\n");

	for( i = 0; i < n; ++i)
	{
		printf("%d\n",array[i]);
		
	}
	free(array);



}