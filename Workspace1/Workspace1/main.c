#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int p;
    int i;
	
    int prime_nums[25] = { 0 };
    int primeIndex = 2;

	bool isPrime = true;

	prime_nums [0] = 2;
	prime_nums [1] = 3;
	
	for (p = 5; p<= 100; p = p+2)
		
		{
			
			isPrime = true;
			for (i = 1; isPrime && p/prime_nums[i] >= prime_nums [i] ; ++i){
				if (p % prime_nums[i] == 0)
					isPrime = false;
			}
			
			
			if (isPrime == true){
				
				prime_nums[primeIndex] = p;
				++primeIndex;
				
				}
			
			
			
			}
 
	for (int j = 0; j < sizeof(prime_nums)/sizeof(int); j++){
		
		printf ("Index %d: %d\n", j, prime_nums[j]);
		}


    return 0;
}
