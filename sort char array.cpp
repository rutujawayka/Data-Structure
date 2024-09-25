#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch;
	int i,j,l;
	
	printf("\n\nSort a string array in asending order :\n");
	printf("***********\n");
	printf("Input the string : ");
	fgets(str,sizeof str,stdin);
	l=strlen(str);
	//sort process
	for(int i=1;i<1;i++)
	{
		for(int j=0;j<1;j++)
		{
			if(str[j]>str[j+1])
			{
				ch=str[j];
				str[j] = str[j+1];
				str[j+1]=ch;
			}
			printf("After sorting the string appears like: \n");
			printf("%s\n\n",str);
		}
	}
	   
}

