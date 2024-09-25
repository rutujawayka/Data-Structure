#include<stdio.h>
int main()
{
	int i,num =0,temp,pass=0,noc=0;
	printf("Enter how many element you want = ");
	scanf("%d",&num);
	//Filter
	if(num<=0)
	{
		printf("Invalid size\n");
		return -1;
	}
	int arr[num];//array creation
	
	//Accepet value
	for(int i=0;i<num;i++)
	{
		printf("Enter Number = ");
		scanf("%d",&arr[i]);
	}
	//Display array Before sort
	printf("Before sort = ");
	for(int i=0;i<=num;i++);
	{
		printf("%d",arr[i]);
	}
	//Bubble sort logic start from here 
	for(int i=0;i<num-1;i++)//loop for passes i.e N-1
	{
		pass++;
		for(int j=0;j<num-1;j++)//loop for comparision
		{
			noc++;
			if(arr[i]>arr[j+1])
			{
			   //swapping logoc
			   temp = arr[j];
			   arr[j] = arr[j+1];
			   arr[j+1] = temp;
			}
		}
	}
	//Display array after sort
	printf("\nAfter sort = ");
	for(int i=0;i<num;i++)
	{
		printf("%d	",arr[i]);
	}
	printf("\nTotal pass = 		%d",pass);
	printf("\nTotal number of comparison =  %d",noc);
	return 0;
}
