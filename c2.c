#include <stdio.h>
#include <string.h>

int main() {
    char nazov1[50], nazov2[50], nazov3[50];
    float cena1, cena2, cena3;
    int pocet1, pocet2, pocet3;

    float celkc = 0;


    printf("Co si chcete kupit? ");
    scanf("%s", nazov1);
    printf("Kolko to stoji? ");
    scanf("%f", &cena1);
    printf("Kolko kusov? ");
    scanf("%d", &pocet1);


    printf("Co si znova chcete kupit? ");
    scanf("%s", nazov2);
    printf("Kolko to stoji? ");
    scanf("%f", &cena2);
    printf("Kolko kusov? ");
    scanf("%d", &pocet2);

    printf("Co si po 3x chcete kupit? ");
    scanf("%s", nazov3);
    printf("Kolko to stoji? ");
    scanf("%f", &cena3);
    printf("Kolko kusov? ");
    scanf("%d", &pocet3);


    celkc = cena1 * pocet1 + cena2 * pocet2 + cena3 * pocet3;

    printf("\n--- POLOZKY NAKUPU ---\n");
    printf("%s - cena: %.2fe, pocet: %d, spolu: %.2fe\n", nazov1, cena1, pocet1, cena1 * pocet1);
    printf("%s - cena: %.2fe, pocet: %d, spolu: %.2fe\n", nazov2, cena2, pocet2, cena2 * pocet2);
    printf("%s - cena: %.2fe, pocet: %d, spolu: %.2fe\n", nazov3, cena3, pocet3, cena3 * pocet3);
    
    printf("\nCelková cena (pred zľavou): %.2fe\n", celkc);


    if (celkc > 50) {
        float cenaZ = celkc * 0.9f;

        printf("Celková cena po zľave: %.2fe\n", cenaZ);
    }

    return 0;
}
