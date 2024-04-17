#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	
	unsigned int sum = 0, count = 0;
	
	printf("Insert a number: ");
	scanf("%u", &count);
	
	for (int i = 1; i<=count; sum+=i++)
		printf("sum = %u\n", sum);
	
	printf("final sum = %u\n", sum);
	printf("hello world\n");
	
	return 0;
}
