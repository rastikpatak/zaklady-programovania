#include <stdio.h>
#include <string.h>

int main() {
    char nazov1[50], nazov2[50], nazov3[50];
    int cena1, cena2, cena3;
    int pocet1, pocet2, pocet3;
    

    float celkc = 0;

    printf("Produkt 1 - co si chcete kupit? ");
    scanf("%s", nazov1);
    printf("kolko je cena? ");
    scanf("%d", &cena1);
    printf("kolko kusov? ");
    scanf("%d", &pocet1);

    printf("co si znova chcete kupit? ");
    scanf("%s", nazov2);
    printf("kolko je cena? ");
    scanf("%d", &cena2);
    printf("kolko kusov? ");
    scanf("%d", &pocet2);

    printf("co si po 3x chcete kupit? ");
    scanf("%s", nazov3);
    printf("kolko je cena? ");
    scanf("%d", &cena3);
    printf("kolko kusov? ");
    scanf("%d", &pocet3);

    celkc = (float)cena1 * pocet1 + (float)cena2 * pocet2 + (float)cena3 * pocet3;

    if (celkc > 50) {
        float cenap = celkc * 0.9f;
        printf("cena po zlave: %.2fe", cenap);
    } else {
        printf("cena je %.2fe", celkc);
    }

    return 0;
}
