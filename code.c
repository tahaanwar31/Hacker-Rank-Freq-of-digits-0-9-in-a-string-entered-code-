#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	char string[1][50];
	int freq[10]={0,0,0,0,0,0,0,0,0,0};
	gets(string[0]);
	for (int i=0;i<strlen(string[0]);i++)
	{
		if (string[0][i]=='0')
		{
			freq[0]=freq[0]+1;
		}
		else if (string[0][i]=='1')
		{
			freq[1]=freq[1]+1;
		}
		else if (string[0][i]=='2')
		{
			freq[2]=freq[2]+1;
		}
		else if (string[0][i]=='3')
		{
			freq[3]=freq[3]+1;
		}
		else if (string[0][i]=='4')
		{
			freq[4]=freq[4]+1;
		}
		else if (string[0][i]=='5')
		{
			freq[5]=freq[5]+1;
		}
		else if (string[0][i]=='6')
		{
			freq[6]=freq[6]+1;
		}
		else if (string[0][i]=='7')
		{
			freq[7]=freq[7]+1;
		}
		else if (string[0][i]=='8')
		{
			freq[8]=freq[8]+1;
		}
		else if (string[0][i]=='9')
		{
			freq[9]=freq[9]+1;
		}
	}
	for (int i=0;i<10;i++)
	{
		printf("%d ",freq[i]);
	}
    return 0;
}
