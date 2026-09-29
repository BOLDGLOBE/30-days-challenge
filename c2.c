#include<stdio.h>
int main() {
float distance,mileage,price;
float fuel_required,total_cost;
//print and scan the trip details//

printf("\n <<<<<<TripCalc>>>>>>> ");

printf("\n enter total distance of the trip (in km)");
scanf("%f",&distance);
printf("\n enter vehicle mileage (km per litre)");
scanf("%f",&mileage);
printf("\n enter fuel price per litre");
scanf("%f",&price);

/*calculate the fuel required for the trip
calculate the total fuel cost*/

fuel_required=distance/mileage;
printf("\n total fuel required for the trip =%.2f litres",fuel_required);

total_cost=fuel_required*price;
printf("\n total fuel cost of the trip =Rs.%.2f",total_cost);

return 0;
}
