#include<stdio.h>
#include<stdlib.h>
void nonzero(int *a,int n);
void upper_diag(int *a,int n);
void below_minor(int *a,int n);
void product(int *a,int n);
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
	upper_diag(array,n);
	below_minor(array,n);
	product(array,n);


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

void upper_diag(int *a,int n)
{
	int i,j,sum = 0;
	for (i = 0; i < n; ++i)
	{
		for ( j = 0; j < n; ++j)
		{
			if(i<j){
				sum += *((a+n*i)+j);

			}
		}
	}

	printf("sum of elements avobe the major diagnol is%d\n",sum );
}

void below_minor(int *a,int n)
{
	int i,j,sum = 0;
	for (i = 1; i < n; ++i)
	{
		for ( j = n-i; j <n; ++j)
		{
			sum += *((a+n*i)+j);
			
		}
	}

	printf("sum of elements below minor diagnol is %d\n",sum );
}

void product(int *a,int n)
{
	int p =1,i;
	for ( i = 0; i < n; ++i)
	{
		/* code */
		p *=*((a+n*i)+i);
	}
	printf("product of diagnol is %d\n",p );
}
