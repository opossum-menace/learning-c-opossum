#include <stdio.h>

int main()
{

    for(int i = 1; i < 100; i++) {

        if(i == 25 || i == 30)
            continue;

        printf("%d \n", i);
    }

    return 0;
}
