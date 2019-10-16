#include <stdlib.h>
#include<stdio.h>
void sort(int *a,int n);
void output(int *arr,int n);



int main()
{
	int n,*array,i;
	printf("enter no of element\n");
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

	
}
void sort(int *a,int n)
{
	int i,j;
	for (i = 0; i < n-1; ++i)
	{
		for ( j = i+1; j < n; ++j)
		{
			if (i[a]>j[a])
			{
				//swap
				i[a] += j[a];
				j[a] = i[a] - j[a];
				i[a] = i[a] - j[a]; 
			}
		}
	}

}


void output(int *arr,int n)
{
	int a,b,i,c,index_a,index_b;
	printf("enter value of a and b\n");
	scanf("%d%d",&a,&b);
	for (i = 0; i < n; ++i)
	{
		if (i[arr] == a)
		{
			index_a = i;
			break;
		}

		

	}
	for (i = 0; i < n; ++i)
	{
		
		if (i[arr] == b)
		{
			index_b = i;
			break;
		}

	}
	c= index_b - index_a + 1;
	printf("========================================\n");
	printf("%d\n",c);
	printf("==============================================\n");

	for ( i = index_a; i <= index_b; ++i)
	{
		printf("%d\n",arr[i]);
	}

}
