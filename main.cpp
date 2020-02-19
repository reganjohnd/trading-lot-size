#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    int risk;//desired risk value
    int pips;//number of points from trade opening price to stop loss price
    int cont;//determines whether another calulation will be made
    const float risk_per_lot = 14.61;//Rand value of risk per point per lot -- used to calculate lot size

    //does calculation while the user decides not to quit by pressing 1.
    do
    {
        //getting desired risk value
        printf("Risk: ");
        scanf_s("%i", &risk);

        //getting number of points to stop loss
        printf("points to Stop Loss: ");
        scanf_s("%i", &pips);

        //calculations to determine correct lot size
        float actual_lot_risk = risk / pips;
        float actual_lot = actual_lot_risk / risk_per_lot;

        //providing correct lot size to user
        printf("\n%.2f Lots.\n", actual_lot);

        //asking user if they want to exit or do another calculation
        printf("\n\n0. Repeat\n1. Exit\n");
        scanf_s("%i", &cont);
    } while (cont == 0);


    return 0;
}