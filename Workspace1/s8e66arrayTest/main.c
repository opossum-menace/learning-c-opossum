#include <stdio.h>
#include <stdlib.h>

int main()
{

	int test[10] = {0};
	
	printf("%lu\n", sizeof(test)/sizeof(int));
	
	for (int i = 0; i < 10; ++i)
		printf("%d\n", test[i]);
	
	
    int grades[10];
    int count = 10;
	
    long sum = 0;

    printf("\nEnter the 20 grades:\n");

    for(int i = 0; i < count; ++i)

    {
        printf("%2u > ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    float average = (float)sum / count;

    printf("\nYour Average grade is= %.2f", average);

    return 0;
}
