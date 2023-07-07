#include <stdio.h>
int main (void){
	float gallons;
	float miles;
	float totalGallons = 0.0;
	float totalMiles = 0.0;
	float totalAverage;

	printf("Enter the gallons used (-1 to end): ");
	scanf("%f", &gallons);

	while (gallons  != -1.0) {
		totalGallons += gallons;
		
		printf("Enter the miled driven: ");
		scanf("%f", &miles);
		totalMiles += miles;

		printf("The Miles / gallon for this tank was %f\n\n", miles / gallons);

		printf("Enter the gallons used (-1 to end): ");
		scanf("%f", &gallons);
}

totalAverage = totalMiles/totalGallons;
printf("\nThe overall average miles/gallon was %f\n", totalAverage);

return 0;
}


