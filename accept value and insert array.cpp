//Accept value from user and inserting of array.
#include<stdio.h>
#define SIZE 101
int main()
{
	int arr[SIZE]={0};
	int index,value,num;
	
	printf("Enter how many number you want = ");
	scanf("%d",&num);
	
	if(num<=0||num>SIZE-1)
	{
		printf("Invalid Input\n");
		return-1;
	}
	//store the values in array
	for(int i=0;i<num;i++) //5
	{
		printf("Enter value %d=",i+1);
		scanf("%d",&arr[i]);
	}
	//Display array
	printf("Before Inserting value\n");
	for(int i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	//Accept Index
	printf("Enter Index = ");
	scanf("%d",&index);
	
	if(index<0||index>num-2)
	{
		printf("Invalid Index\n");
		return-1;
	}              //2 //value=50
	printf("Enter value = ");
	scanf("%d",&value);
	//10,20,30,40,50.
	for(int i=num-1;i>=index;i--) //10,20,30,40,50
	{
		arr[i+1]=arr[i];
	}
	arr[index]=value;
	num++;
	printf("After Inserting value\n");
	for(int i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	return 0;
}

