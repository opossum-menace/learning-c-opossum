#include <stdio.h>
#include <stdlib.h>

int main()
{
    double rain_fall[5][12] = {

        { 7, 11, 5, 3, 3, 2, 1, 9, 6, 3, 4, 3 }, // 2020
        { 4, 2, 4, 12, 4, 1, 6, 6, 2, 6, 1, 3 }, // 2021
        { 3, 4, 5, 3, 2, 5, 6, 7, 8, 9, 20, 1 }, // 2022
        { 0, 1, 9, 3, 2, 4, 4, 9, 7, 3, 5, 10 }, // 2023
        { 3, 8, 9, 33, 8, 6, 4, 2, 3, 4, 1, 7 }  // 2024
    };

    double yearly_sum[5] = { 0 };
    double yearly_average = 0;

    double monthly_averages[12] = { 0 };
    double monthly_sums = 0;

    // Iterators



	printf("\t Jan\t Feb\t Mar\t Apr\t May\t Jun\t Jul\t Aug\t Sep\t Oct\t Nov\t Dec\n");
	
    for(int i = 0; i < 5; i++) {
        double sum_monthly_rainfall = 0;
        //printf("Index %d:", i);

        for(int j = 0; j < 12; j++) {

            printf("\t%.2f ", rain_fall[i][j]);
            sum_monthly_rainfall += rain_fall[i][j];
        }

        yearly_sum[i] = sum_monthly_rainfall;
        printf(" \t- Yearly Rainfall = %.2f", sum_monthly_rainfall);
        printf("\n");
    }

    for(int i = 0; i < 5; i++) {
        yearly_average += yearly_sum[i];
    }
    yearly_average /= 5;


    for(int i = 0; i < 12; i++) {

        for(int j = 0; j < 5; ++j)
            monthly_sums += rain_fall[j][i];

        monthly_averages[i] = monthly_sums / 5;
        monthly_sums = 0;

        printf("\t%.2f", monthly_averages[i]);
    }
	printf("\t- Monthly Averages\n");

    double sum_of_monthly_averages = 0;
    for(int i = 0; i < 12; ++i) {

        sum_of_monthly_averages += monthly_averages[i];
    }

    printf("\nSUM: %.2f\n", sum_of_monthly_averages);
	printf("Yearly Average = %.2f\n", yearly_average);
	
    return 0;
}
