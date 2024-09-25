//Array Update Operation

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
	//Store the values in array
	for(int i=0;i<num;i++)  //5
	{
		printf("Enter Value %d =",i+1);
		scanf("%d",&arr[i]);
	}
	//Display array
	printf("Array Before Update\n");
	for(int i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	//accept index
	printf("Enter Index = ");
	scanf("%d",&index);
	
	if(index<0 || index>num-1)
    {
    	printf("Invalid Index\n");
    	return -1;
	}
	printf("Enter New Value = ");
	scanf("%d",&value);
	
	arr[index]=value;
	printf("After Update value\n");
	for(int i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	return 0;
}
