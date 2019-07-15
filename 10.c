#include<stdio.h>
#include<stdlib.h>

void swap(int *n1 , int *n2)
{
	int tem;
	tem = *n1;
	*n1 = *n2;
	*n2 = tem;
}
int main()
{
	printf("enter the lenght of array");
	int i,n,*array,j;
	scanf("%d",&n);
	printf("enter elements in array\n");

	array = (int*)malloc(n*sizeof(int));

	for ( i = 0; i < n; ++i)
	{
		scanf("%d",(array+i));
	}

	for (i = 0; i < n-1; ++i)
	{
		for (j = 0; j < n-i-1; ++j)
		{

			if (j[array]%2 != 0)
			{
			  swap(array+j,array+j+1);
		    }
			/* code */
		}
		
	}

	printf("resulted code\n");

	for ( i = 0; i < n; ++i)
	{
		printf("%d\n",*(array+i));
	}


}