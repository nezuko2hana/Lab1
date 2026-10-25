#include<stdio.h>
int main (void)
{
    int glasses;
    scanf("%d", &glasses);
    if (glasses < 8) {
        printf("Drink more water. \n Daily goal not completed."); }
    else {
        printf ("Daily goal completed.");
    }
    return 0;
}
