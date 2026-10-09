#include <stdio.h>

int main()
{
    const int RFZ = 30;
    int a ;

    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%d", &a);

    if (a < RFZ) {
        printf("Ihre Zahl ist kleiner als die Konstante.\n");
    }

    else if (a > RFZ) {
        printf("Ihre Zahl ist größer als die Konstante.\n");
    }

    else {
        printf("Ihre Zahl ist gleich groß wie die Konstante.\n");
    }

    return 0;
}
