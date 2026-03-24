/* Name: MUWONGE RONALD PAUL */
/* Student Number: 25/U/BIE/01401/PE */

#include <stdio.h>
int main() {
    float units_consumed, cost_per_unit, bill_amount;
    printf("enter the number of units consumed:");
    scanf("%f", &units_consumed);
    printf("enter the cost per unit:");
    scanf("%f", &cost_per_unit);
    if (units_consumed <= 100) {
        bill_amount = 0.04*units_consumed * cost_per_unit;
        printf("the bill is: %.2f\n", bill_amount);
    } else if (units_consumed <= 200) {
        bill_amount = cost_per_unit*(units_consumed) * 0.03;
        printf("the bill is: %.2f\n", bill_amount);
    } else if (units_consumed <= 300) {
        bill_amount = cost_per_unit*(units_consumed)* 0.02;
    printf("the bill is: %.2f\n", bill_amount);
     } else if(units_consumed > 300){
    bill_amount = cost_per_unit*(units_consumed) * 0.01;
    printf("the bill is: %.2f\n", bill_amount);
    return 0;
}
    
