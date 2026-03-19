#include <stdio.h>

int main(){

    int choice;
    float meters;
    float centimeters;
    float total;

    printf("!!! Length Converter !!!\n");
    printf("Enter you choice:\n");
    printf("1. Meter to Centimeter.\n");
    printf("2.Centimeter to Meter.\n");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter the length in Meter: \n");
        scanf("%f", &meters);
        total = meters * 100.0 ;
        printf("%.2f meters is %.2f centimeters.\n", meters, total);
    }
    else if(choice == 2){
        printf("Enter the length in Centimeter.\n");
        scanf("%f", &centimeters);
        total = centimeters / 100;
        printf("%.2f centimeters is %.2f meters.\n", centimeters, total);
    }
    else{
        printf("Invalid choice! please enter 1 or 2!\n");
    }
    

    return 0;
}
