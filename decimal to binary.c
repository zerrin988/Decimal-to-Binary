#include <stdio.h>
int main()
{
	int i ;
	int counter =0;
	int result [5];
	int remainder;
	int input =10;
	while(input > 0)
	{
		remainder = input % 2;
		result[counter] = remainder ;
		input /= 2 ;
		counter++ ;   
	}
    	for(i=counter;i > 0;i--)
    	{
        		printf("%d",result[i-1]);
    	}
}