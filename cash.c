#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Change_owed;
    do
    {
        Change_owed = get_int("Change Owed?(in cents): ");
    }
    while (Change_owed < 0);

    int Quarters = Change_owed / 25;
    Change_owed %= 25;

    int Dimes = Change_owed / 10;
    Change_owed %= 10;

    int Nickels = Change_owed / 5;
    Change_owed %= 5;

    int Pennies = Change_owed;

    int Total_coins = Quarters + Dimes + Nickels + Pennies;

    printf("%d\n", Total_coins);
}
