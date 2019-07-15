#include<stdlib.h>
#include<stdio.h>
int main()
{
	int n,*array,element,i;
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

	printf("enter elemnt to be searched\n");
	scanf("%d",&element);
	for (i = 0; i < n; ++i)
	{
		if(array[i] == element){

		printf("element found\n");
		break;}
	}
	free(array);
	return 0;
}