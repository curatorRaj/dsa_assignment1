#include<stdio.h>
#include<stdlib.h>
void nonzero(int *a,int n);
int main()
{
	int i,j,*array,n;
	printf("enter rows \n");
	scanf("%d",&n);
	array = (int*)malloc(n*n*sizeof(int));
	printf("enter elements \n");
	for (i = 0; i < n; ++i)
	{
		for ( j = 0; j < n; ++j)
		{
			scanf("%d",(array+i*n)+j);
			
		}
	}

	nonzero(array,n);


}

void nonzero(int *a,int n)
{
	int i,j,c=0;
	for ( i = 0; i < n*n; ++i)
	{
		if (*a != 0)
		{
			c++;
		}
		

	}
	printf("no of non zero elements is %d\n",c );
}
