#include <stdio.h>

int main(int argc, char **argv)
{

	
	printf("Sizeof int = %lu \n", sizeof(short int));
	printf("Sizeof char = %lu \n", sizeof(char));
	printf("Sizeof long = %lu \n", sizeof(long));
	printf("Sizeof long long = %lu \n", sizeof(long long));
	printf("Sizeof double = %lu\n", sizeof(double));
	printf("Sizeof long double = %zd \n", sizeof(long double));
	printf("Sizeof unsigned long double = %zd \n", sizeof(unsigned long long));
	
	int a = 1, b = 1, c;
	
	c= a++ + b;
	
	printf("%d, %d, %d \n", a, b, c);
	
	
	int i = 0;
	int j = i++ + i;
	printf("i=%d, j=%d \n", i,j);
	
	int n = 0;
	int m = ++n + n;
	printf("n=%d, m=%d \n", n, m);
	
	int x = 0;
	printf("x= %d \n", x);
	printf("x= %d \n", ++x);
	printf("x= %d \n", x++);
	printf("x= %d \n", x);

	
}
