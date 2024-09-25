//Deleting of array operation.
#include<stdio.h>
#define SIZE 101
int main()
{
	int arr[SIZE]={0};
	int index,value,num;
	
	printf("Enter how many number you want = ");
	scanf("%d",&num);
	
	if(num<=0 || num>SIZE-1)
	{
		printf("Invalid Input\n");
		return-1;
	}
	//store the values in array
	for(int i=0;i<num;i++)  //5
	{
		printf("Enter value %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	//Display array 
	printf("Array Before deleting\n");
	for(int i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	//Accept Index
	printf("Enter Index which data you want delete = ");
	scanf("%d",&index);
	
	if(index<0 || index>-1)
	{
		printf("Invalide Index\n");
		return-1;
	}
	for(int i=index;i<=num-1;i++)
	{
		arr[i]=arr[1+i];
	}
	num--;
	printf("Array After Deleting\n");
	for(int i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	return 0;
}

