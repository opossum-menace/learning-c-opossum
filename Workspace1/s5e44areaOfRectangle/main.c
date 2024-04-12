#include <stdio.h>

int main(int argc, char **argv)
{
	//Rectangle Challenge kek
	int a = 0, b = 0, squarePerimeter = 0, squareArea = 0;
	
	printf("Please input height and width separated by a space: \n");
	scanf("%d %d", &a, &b);
	
	squarePerimeter = 2*(a+b);
	squareArea = a*b;
	
	printf("Width is: %d \n", a);
	printf("Height is: %d \n", b);
	printf("Perimiter is: %d \n" , squarePerimeter);
	printf("Area is: %d \n", squareArea);
	
}
