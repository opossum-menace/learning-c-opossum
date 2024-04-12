#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define OVERTIME_RATE 1.5

#define TAXRATE_300 .15
#define TAXRATE_150 .2
#define TAXRATE_REST 0.25

#define OVERTIME 40



int main()
{

	
	int work_hours = 0, regular_hours = 0, overtime_hours = 0;
	double tax_1 = 0, tax_2 = 0, tax_3 = 0;
	double net_pay = 0, gross_pay = 0;
	
	
	printf ("Insert your work hours this week: \n");
	scanf("%d", &work_hours);
	
	
	if (work_hours <= OVERTIME)
	{
		regular_hours = work_hours;
		overtime_hours = 0;
		net_pay = regular_hours *PAYRATE;

		}
	else {
		overtime_hours = work_hours - OVERTIME;
		regular_hours = work_hours - overtime_hours;
		net_pay = (regular_hours*PAYRATE) + (overtime_hours*PAYRATE*OVERTIME_RATE);
		}
		
		printf ("Your work hours are as follows: %d regular hours + %d overtime hours \n", regular_hours, overtime_hours );
		printf ("Therefore, your net pay is: %.2f$ (%.2f regular + %.2f overtime) \n", net_pay, (float)regular_hours*PAYRATE, (float)overtime_hours*PAYRATE*OVERTIME_RATE);

	if (net_pay <= 300)
		{
			tax_1 = net_pay*TAXRATE_300;
		}
	else if (net_pay > 300 && net_pay <=450)
		{
			tax_1 = 300*TAXRATE_300;
			tax_2 = (net_pay - 300)*TAXRATE_150;
			}
	else 
		{
			tax_1 = 300*TAXRATE_300;
			tax_2 = 150*TAXRATE_150;
			tax_3 = (net_pay - 450)*TAXRATE_REST;
			}

		gross_pay = net_pay - tax_1 - tax_2 - tax_3;
		printf ("After Tax, your gross pay is: %.2f$  (%.2f - %.2f - %.2f - %.2f) \n", gross_pay, net_pay, tax_1, tax_2, tax_3);
		
		return 0;

}
