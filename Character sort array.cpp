#include<stdio.h>
int main()
{
	int n,j,k,i;
	char a[20],temp;
	printf("Enter how many word you want = ");
	scanf("%d",&n);
	int arr[n];//array creation
	
	//Accepet value
	for(int i=0;i<n;i++)
	{
		printf("Enter Number = ");
		scanf("%d",&arr[i]);
	}
	for(j=1;j<n;j++)
	{
		for(k=0;k<n-j;k++)
		{
	//Display array Before sort
	printf("Before sort = ");
	for(int i=0;i<=n;i++);
	{
		printf("%d",arr[i]);
	}
	//Bubble sort logic start from here 
	for(int i=0;i<n-1;i++)//loop if(a[k] >= a[k+1])
			{
				temp = a[k];
				a[k] = a[k+1];
				a[k+1] = a[k];		
			}
		}
	}
	printf("The sorted items are: %s",a);
}
