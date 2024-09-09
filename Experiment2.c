#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int textlength,patternlength,replength,i,j,k;
	char* text=(char*)malloc(sizeof(char));
	char* pattern=(char*)malloc(sizeof(char));
	char* rep=(char*)malloc(sizeof(char));
	printf("Enter the Text:");
	scanf(" %[^\n]",text);
	printf("Enter the Pattern:");
	scanf(" %[^\n]",pattern);
	printf("Enter the Replace:");
	scanf(" %[^\n]",rep);
	textlength=strlen(text);
	patternlength=strlen(pattern);
	replength=strlen(rep);
	for(i=0;i<=textlength-patternlength;i++)
	{
		for(j=0;j<patternlength;j++)
		{
			if(text[i+j]!=pattern[j])
			{
				break;
			}
		}
		if(j==patternlength)
		{
			printf("Position found at %d\n",i);
			break;
		}
	}
	if(patternlength==replength)
	{
		for(k=0;k<replength;k++)
		{
			text[i]=rep[k];
			i++;
		}
		printf("\nUpdated Text is:%s",text);
	}
	else
	{
		printf("Not possible");
	}
}

