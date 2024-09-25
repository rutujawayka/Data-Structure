#include<stdio.h>
#define n 5
int main()
{
	//creation of array.
	int arr[n] = {50,40,10,20,30};
	int i,cmp = 0,temp,swap=0;
	printf("\n Array before sort = ");
	for(int i=0;i<n;i++);
	{
		printf("%d",arr[i]);
	}
	//logic of bubble sort.
	for(int i=0;i<n;i++);
	{
		swap=0;
		for(int j=0;j<n-1;j++)
		{
			swap=1;
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[i+j]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
        	if(swap==0)
	        {
	        	break;
        	}
    }
	printf("\n Array after sort = ");
	for(int i=0;i<n;i++);
	{
		printf("%d",arr[i]);
	}
	printf("\n Total number of cmp = %d",cmp); 
	return 0;
}
