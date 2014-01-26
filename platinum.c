/* platinum.c, measure your weight in platinum 
 */

#include <stdio.h>
int main(void)
{
	float weight;
	float value;

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please Enter Your Weight:\n");

	/* get input from the user */
	scanf("%f", &weight);

	/*assume platinum is $1700 per ounce */
	/* 14.5833 converst pounds to ounce , 1 pound = 14.5833 ounce */

	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.3f.\n", value);
	printf("eat more to maintain your value.\n");

	return 0;
}
