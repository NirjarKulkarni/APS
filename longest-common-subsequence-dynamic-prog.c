#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{

	char str1[100],str2[100];
	scanf("%s %s",str1,str2);
	int l1=strlen(str1),l2=strlen(str2);
	int ar[l1+1][l2+1];
	int i,j;
	/*memset(ar[0], '0', (l1+1)*sizeof(char));*/	
	for(i=0;i<l1+1;i++)
	{
		for(j=0;j<l2+1;j++)
		{
			//printf("%c ",ar[i][j
			ar[i][j]=0;
		}
		//printf("\n");

	}
	/*for(i=0;i<l1+1;i++)
	{
		for(j=0;j<l2+1;j++)
		{
			printf("%c ",ar[i][j]);
			//ar[i][j]='0';
		}
		printf("\n");

	}*/

	int maximum;
	for(i=1;i<l1+1;i++)
	{
		for(j=1;j<l2+1;j++)
		{
			//printf("%c ",ar[i][j
			if(str1[i-1]==str2[j-1])
			{
				ar[i][j]=ar[i-1][j-1]+1;
			}		
			else
			{
				if(ar[i-1][j]>ar[i][j-1])
				{
					maximum=ar[i-1][j];
				}
				else
				{
					maximum=ar[i][j-1];
				}
				ar[i][j]=maximum;

			}

		}

	}

	for(i=0;i<l1+1;i++)
	{
		for(j=0;j<l2+1;j++)
		{
			printf("%d ",ar[i][j]);
			//ar[i][j]='0';
		}
		printf("\n");

	}

	printf("the max number of subsequences are %d\n",ar[5][7]);

	

}