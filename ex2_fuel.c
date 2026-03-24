/* Name: MUWONGE RONALD PAUL */
/* Student Number: 25/U/BIE/01401/PE */

#include <stdio.h>

int main() {
    float fuel_consumed, distance_traveled, fuel_efficiency;
    printf("enter the amount of fuel consumed in liters:");
    scanf("%f", &fuel_consumed);
    printf("enter the distance traveled in kilometers:");
    scanf("%f", &distance_traveled);
    fuel_efficiency = distance_traveled / fuel_consumed;
    printf("the fuel efficiency is: %.2f km/l\n)", fuel_efficiency);
        return 0;
    
}
