#include <stdio.h>

int main(void){

    int amount_people = 0;
    int amount_pizzas = 0;
    int slices_per_pizza = 0;
    int leftovers = 0;

    printf("How many people? ");
    scanf("%d", &amount_people);

    printf("How many pizzas do you have? ");
    scanf("%d", &amount_pizzas);

    printf("How many slices per pizza do you have? ");
    scanf("%d", &slices_per_pizza);

    printf("%d people with %d pizzas\n", amount_people, amount_pizzas);

    leftovers = amount_pizzas * slices_per_pizza % amount_people;

    printf("Each person gets %d pieces of pizza.\n",
         amount_pizzas * slices_per_pizza / amount_people);
    
    printf("There are %d leftover pieces.", leftovers);

    return 0;
}