#include <stdio.h>
#include <string.h>
#define W_GALLON 8.345404
int main(int argc, const char *argv[]) {
	int gravelWeight = 0;
	double totalWeight = 0;
	double waterVolume = 0;
	printf("Calculator to calculate aquarium weight!\n");
	printf("What is the weight of the gravel?: ");
	scanf("%d",&gravelWeight);
	printf("\nWhat is the volume(in gallons) of the aquarium?: ");
	scanf("%lf",&waterVolume);
	totalWeight = (W_GALLON * waterVolume) + gravelWeight;
	printf("\n\nThe total weight:\t\t %.2lf lbs\n",totalWeight);
	return 0;
}