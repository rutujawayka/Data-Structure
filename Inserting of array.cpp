//Inserting of Array 

#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40};
	int index,value;
	
	printf("Enter Index = ");
	scanf("%d",&index);
	
	if(index<0 && index>=5-1)
	{
		printf("Invalid Index\n");
		return -1;
	}
	printf("Enter value = ");
	scanf("%d",&value);
	
	printf("Before Insterting Value\n");
	for(int i=0;i<5;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	for(int i=5-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index] = value;
	
	printf("After Inserting value\n");
	for(int i=0;i<5;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;
}
