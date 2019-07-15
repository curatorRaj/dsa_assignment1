#include<stdio.h>
#include<stdlib.h>

void swap(int *n1 , int *n2)
{
	int tem;
	tem = *n1;
	*n1 = *n2;
	*n2 = tem;
}
void sort(int *a,int n)
{
	int i,j,*temp;
	for ( i = 0; i < n-1; ++i)
	{
		temp = a+i;
		for (j = i+1; j < n; ++j)
		{
			if (*(temp)>*(a+j))
			{
				temp = a+j;
				
			}
		
		}

		swap(temp,a+i);
	}
}


int main()
{
	printf("enter the lenght of array");
	int i,n,j,*array;
	scanf("%d",&n);
	printf("enter elements in array\n");

	array = (int*)malloc(n*sizeof(int));

	for ( i = 0; i < n; ++i)
	{
		scanf("%d",(array+i));
	}

	sort(array,n);
	printf("executed\n");

	int sg , s;
	for (i = 1; i < n; ++i)
	{
		if (*(array+i) != *array)
		{
			s = *(array+i);
			break;
		}

		/* code */
	}
	printf("executed\n");

	for ( i = n-2; i >= 0; --i)
	{
		/* code */
		if (*(array+i) != *(array+n-1))
		{
			sg = *(array+i);
			break;
		}
	
	}
	printf("executed\n");

	printf("secound largest and secound smallest no are  %d  %d \n",sg,s);

}