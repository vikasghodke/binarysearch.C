#include<stdio.h>
#define size 10

void bsort(int a[],int n);
int bsearch(int a[],int n,int key);
void bsort(int a[],int n)
{
	int i,j,temp;
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int bsearch(int a[],int n,int key)
	{
		int i,j,m;
		
		j=0;
		j=n-1;
		m=(i+j)/2;
		while(key!=a[m] && i<=j)
		{
			if(key>a[m])
			{
				i=m+1;
			}
			else
			{
				j=m-1;
			}
			m=(i+j)/2;
		}
		if(i<=j)
			return m;
		return-1;
	}
	int main()
	{
		int a[size]={10,20,30,40,50,60,70,80,90,100};
		int key,f;
		bsort(a,size);
		printf("enter a no for search=");
		scanf("%d",&key);
		f=bsearch(a,size,key);
		if(f!=-1)
		{
			printf("%d is found at %d loc",key,f);
		}
		else
		{
			printf("%d is not found");
		}
		return 0;
	
	
	}
	//return 0;
}
