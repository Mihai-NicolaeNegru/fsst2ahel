// Glückspiel, 10 versuche

#include <stdio.h>

int main()
{
    const int RFZ = 30;
    int a ;

    for(int i = 0; i < 10; i++){
    

    printf("Bitte geben Sie eine Zahl ein zwischen 0 und 50 um 10 Euro zu gewinnen: ");
    scanf("%d", &a);

    if (a < RFZ) {
        printf("Ihre Zahl ist kleiner als die Richtige zahl.\n");
    }

    else if (a > RFZ) {
        printf("Ihre Zahl ist grosser als die die Richtige zahl.\n");
    }

    else {
        printf("Sie haben gewonnen, jetzt kommt die Polizei ihnen zu verhafter, weil Sie Minderjärig seidts.\n");
    }
}
    return 0;
}
