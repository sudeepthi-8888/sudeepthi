#include<stdio.h>
void merge (int a[],int low,int mid,int high);
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low,high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
};
void merge(int a[],int low,int mid,int high);
{
	int i=low;
	int j=mid+1;
	int x=0;
	int temp[high-low+1]
	while(i<=mid&&j<=high){
		if(a[i]<a[j])
		{
			mergesort(a,o,n-1);
			printf("\n after sorting");
			for(i=0;i<n;i++)
			{
				printf("\t %d",a[i]]);
			}
			return 0;
		}
	}
}
