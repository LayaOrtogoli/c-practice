#include <stdio.h>
#include <string.h>

int main(){

    //SHOPPING BILL PROGRAM

    char item[50] = "";
    int quantity = 0;
    float price = 0.0f;
    char currency = '$';
    float total = 0.0f;

    printf("Which item would you like to buy?\n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("How many would ypu like?\n");
    scanf("%d", &quantity);

    printf("What is the price for each?\n");
    scanf("%f", &price);

    total = quantity * price;
    
    printf("\nYou have bought %d %s.\n", quantity, item);
    printf("The total price is %.2f %c.", total, currency);

    return 0;
}
