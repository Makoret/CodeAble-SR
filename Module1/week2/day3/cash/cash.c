#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void){
    int coins = 0;
    float dollars = 0;
    int amount = 0;
    do{
        dollars = get_float("Change owed: ");
    } while (dollars < 0);
    coins = round(dollars * 100);
    if(coins >= 25){
        amount += coins / 25;
        coins = coins % 25;
    }
    if(coins >= 10){
        amount += coins / 10;
        coins = coins % 10;
    }
    if(coins >= 5){
        amount += coins / 5;
        coins = coins % 5;
    }
    amount += coins;
    printf("%d \n", amount);
    return (0);
}
