#include <stdio.h>
void swap(int* a,int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int  partition(int A[],int p,int r)
{
	int x = A[r];
	int i = p - 1;
	int j = p;
	while(j < r)
	{
		if(A[j] <= x){
			i++;
			swap(&A[i],&A[j]);
		}
		j++;
	}
	swap(&A[i+1],&A[r]);
	return i+1;
}

void quick_sort(int A[],int p,int r)
{
	if(p < r)
	{
		int q = partition(A,p,r);
		quick_sort(A,p,q-1);
		quick_sort(A,q+1,r);
	}
}

int main()
{
	int a[10] = {2,8,9,5,7,1,2,6,5,4};
	quick_sort(a,0,9);
	//partition(a,0,7);
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",a[i] );
	}
	return 0;
}

