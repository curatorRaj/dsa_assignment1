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
	int *array,m,n,i,j,k,*temp;
	printf("enter rows and column");
	scanf("%d%d",&m,&n);
	array = (int*)malloc(m * n * sizeof(int));
	for (i = 0; i < m; ++i)
	{
		
		for ( j = 0; j< n; ++j)
		{
			scanf("%d",((array+i*n)+j));
		}
	}


	printf(" inputed resulted array\n");
	for (i = 0; i < m; ++i)
	{
		
		for ( j = 0; j< n; ++j)
		{
			printf("\t%d\t",*((array+i*n)+j));
		}
		printf("\n");
	}

	for ( i = 0; i < m; ++i)
	{
		for ( j = 0; j < n-1; ++j)
		{
			/* code */
			temp = array+i*n+j;

			for (k = j+1; k < n; ++k)
			{
				/* code */
				if (*(temp)>*(array+i*n+k))
				{
					temp = array+i*n+k;
				}
			}
			swap(temp,array+i*n+j);
		}
	}



	printf(" outputed resulted array\n");
	for (i = 0; i < m; ++i)
	{
		
		for ( j = 0; j< n; ++j)
		{
			printf("\t%d\t",*((array+i*n)+j));
		}
		printf("\n");
	}
	if (array != NULL)
	{
		free(array);
		/* code */
	}

	return 0;






}