#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 20
int main()
{
	char name[size][size],Tname[size][size],temp[size];
	int i,j,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	
	printf("Enter %d names\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
		
		strcpy(Tname[i],name[i]);
		
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				
				strcpy(name[i],name[j]);
				
				strcpy(name[j],temp);
			}
		}
	}
	printf("/n***********/n");
	printf("Input Names\tSorted names\n");
	printf("/n***********\n");
	
	for(i=0;i<n;i++)
	{
		printf("%s\t\t%s\n",Tname[i],name[i]);
	}
	printf("***********\n");
}
