#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<math.h>
int main()
{
	int i,j;
	char data[]={'a','b','c'};
	int set_size = 3;
	unsigned int size = pow(2,set_size);
	for(i=0;i<size;i++)
	{
		printf("{");
		for(j=0;j<set_size;j++)
		{
			if(i&(1<<j)){
				printf("%c",data[j] );
			}
		}
		printf("}");
		printf("\n");
	}

	return 0;
}