#include<stdio.h>
int main()
{
	int choice;
	float  mt,km,ft,mi;
	printf("LENGHT UNITS CONVERSION\n");
	printf("1.Meters to Feets\n");
	printf("2.Kilometers to Miles\n");
	printf("3.Feets to Meters\n");
	printf("Enter your choice (1/2): ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter length in meters: ");
			scanf("%f",&mt);
			ft=3.280*mt;
			printf("Feets= %.3f\n",ft);
			break;
		case 2:
			printf("Enter length in kilometers: ");
			scanf("%f",&km);
			mi=0.621*km;
			printf("Miles= %.3f\n",mi);
			break;
		case 3:
			printf("Enter length in feets: ");
			scanf("%f",&ft);
			mt= 0.3048*ft;
			printf("Meters= %.3f\n",mt);
			break;
	}
	return 1;
}