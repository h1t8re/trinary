#include <stdio.h>
#include <stdlib.h>
#include "clib.h"

int main()
{
	const int architecture = 32;
	int *array = (int *)malloc(architecture*sizeof(int));
	int number = 0;
	
	int mask = 1;
	
	
	number = 2147483647;
	convert_integer_to_binary(array, number, mask, architecture);
	printf("converting 2147483647 = %d with mask %d to trinary:\n", number, mask);
	for(int i = architecture-1; i >= 0; i--)
	{
		printf("%d", *(array+i));
		printf(" ");
	}
	printf("\n");
	
	number = 2147483648;
	convert_integer_to_binary(array, number, mask, architecture);
	printf("converting 2147483648 = %d with mask %d to trinary:\n", number, mask);
	for(int i = architecture-1; i >= 0; i--)
	{
		printf("%d", *(array+i));
		printf(" ");
	}
	printf("\n");

	number = 4294967295;
	convert_integer_to_binary(array, number, mask, architecture);
	printf("converting 4294967295 = %d with mask %d to trinary:\n", number, mask);
	for(int i = architecture-1; i >= 0; i--)
	{
		printf("%d", *(array+i));
		printf(" ");
	}
	printf("\n");
	
	number = 4294967296;
	convert_integer_to_binary(array, number, mask, architecture);
	printf("converting 4294967296 = %d with mask %d to trinary:\n", number, mask);
	for(int i = architecture-1; i >= 0; i--)
	{
		printf("%d", *(array+i));
		printf(" ");
	}
	printf("\n");
	
	
	mask = -1;


	number = 2147483647;
	convert_integer_to_binary(array, number, mask, architecture);
	printf("converting 2147483648 = %d with mask %d to trinary:\n", number, mask);
	for(int i = architecture-1; i >= 0; i--)
	{
		printf("%d", *(array+i));
		printf(" ");
	}
	printf("\n");

	number = 2147483648;
	convert_integer_to_binary(array, number, mask, architecture);
	printf("converting 2147483648 = %d with mask %d to trinary:\n", number, mask);
	for(int i = architecture-1; i >= 0; i--)
	{
		printf("%d", *(array+i));
		printf(" ");
	}
	printf("\n");
	return 0;
}
