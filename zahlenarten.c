#include <stdio.h>

int main()
{
    const int RFZ = 30;
    int a ;

    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%d", &a);

    if (a < RFZ) {
        printf("Die Variable ist kleiner als die Konstante.\n");
    }

    else if (a > RFZ) {
        printf("Die Variable ist größer als die Konstante.\n");
    }

    else {
        printf("Die Variable ist gleich der Konstante.\n");
    }

    return 0;
}