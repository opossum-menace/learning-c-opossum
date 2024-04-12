#include <stdio.h>

int main(int argc, char **argv)
{

	
	float seconds = 0, minutes = 0, hours = 0, days = 0, weeks = 0, months = 0, years = 0;
	
	printf("Insert desired minutes to be calculated: \n");
	scanf("%f", &minutes);
	
	
	seconds = 60*minutes;
	hours = minutes / 60;
	days = minutes /(60*24);
	weeks = minutes /(60*24*7);
	months = minutes /(60*24*31);
	years = minutes /(60*24*364.25);
	
	printf("Seconds - %.2f\n", seconds);
	printf("Minutes - %.2f\n", minutes);
	printf("Hours - %.2f\n", hours);
	printf("Days - %.2f\n", days);
	printf("Weeks - %.2f\n", weeks);
	printf("Months - %.2f\n", months);
	printf("Years - %.2f\n", years);
	
	printf("sizeof %d", sizeof(int));
	
	return 0;
}
