#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b);

double calc_absolute(double a);

int calc_square_root(double a);
double long_div_sqroot(double a);

int main()
{

    /*
        GCD(400, 203);
        calc_absolute(-20);
        calc_absolute(20);
        calc_absolute(0);
        calc_absolute(-20.563458934);
        calc_absolute(20.523489572);
        calc_absolute(0.123876);
        calc_absolute(GCD(12450, 20452));
         *
        calc_square_root(25);
        calc_square_root(500);
         *
    */

    long_div_sqroot(10000);
    long_div_sqroot(1);
    long_div_sqroot(-120);
    long_div_sqroot(0.999999);
    long_div_sqroot(1.00001);

    return 0;
}

int GCD(int a, int b)
{

    int div_one = 0;
    bool odd_reached = false, algo_done = false;

    while(algo_done == false) {

        while(odd_reached == false) {
            if(a % 2 != 0 || b % 2 != 0)
                odd_reached = true;

            else {
                if(odd_reached == false)
                    div_one++;
                a /= 2;
                b /= 2;
            }
        }

        bool a_odd_reached = false, b_odd_reached = false, both_equal = false;
        while(a_odd_reached == false) {
            if(a % 2 != 0)
                a_odd_reached = true;

            if(a % 2 == 0)
                a /= 2;
        }

        while(b_odd_reached == false) {
            if(b % 2 != 0)
                b_odd_reached = true;

            if(b % 2 == 0)
                b /= 2;
        }

        while(both_equal == false) {

            if(a > b) {

                a = (a - b) / 2;

                while(a % 2 == 0)
                    a /= 2;
            }

            if(a < b) {

                b = (b - a) / 2;

                while(b % 2 == 0)
                    b /= 2;
            }

            if(a == b)
                both_equal = true;
        }

        algo_done = true;
    }

    printf("GDC= %d\n", (int)(pow(2, div_one) * a));
    return (int)(pow(2, div_one) * a);
}

double calc_absolute(double a)
{

    if(a < 0) {
        printf("%.6f\n", -a);
        return -a;
    }
    if(a > 0) {
        printf("%.6f\n", a);
        return a;
    }
    if(a == 0) {
        printf("%.6f\n", a);
        return 0;
    }
    return 1;
}

int calc_square_root(double a)
{

    int temp_a = (int)a;
    int root_number = 0;

    for(int i = 0; temp_a > 0; ++i) {

        temp_a = temp_a - (1 + 2 * i);
        root_number++;
    }
    printf("%d\n", root_number);
    return root_number;
}

double long_div_sqroot(double a)
{

    double temp_a = 0;

    if(a < 0)
        temp_a = calc_absolute(a);
    else if(a > 0 && a < 1)
        temp_a = a;
    else if(a == 0)
        return 0;
    else
        temp_a = roundf(a * 10000) / 10000;

    int digit_count = 0;

    for(int i; temp_a >= 1.0; i++) {

        temp_a /= 10;
        digit_count++;
    }
    printf("\ndigit count: %d\n", digit_count);
	
	
	

    return 0.2f;
}
