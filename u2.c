#include <stdio.h>
#include <string.h>

int main() {

    float celkc = 0;

    typedef struct {
        char nazov[15];
        double cena;
        int pocet;
    } Produkt;
    int strop = 50;
    Produkt nakup[50];


    for (int i = 0; i < strop; i++) {
        printf("zadajte nazov produktu:");
        scanf("%s", &nakup[i].nazov);
        printf("zadajte cenu produktu:");
        scanf("%f", &nakup[i].cena);
        printf("zadajte pocet kusov:");
        scanf("%d", &nakup[i].pocet);
        printf("nazov: %s, cena: %.2f, pocet: %d\n", nakup[i].nazov, nakup[i].cena, nakup[i].pocet);
        celkc += nakup[i].cena[i] * nakup[i].pocet;
        
    }




    //printf("Co si chcete kupit? ");
    //scanf("%s", nazov1);
    //printf("Kolko to stoji? ");
    //scanf("%f", &cena1);
    //printf("Kolko kusov? ");
    //scanf("%d", &pocet1);


    //printf("Co si znova chcete kupit? ");
    //scanf("%s", nazov2);
    //printf("Kolko to stoji? ");
    //scanf("%f", &cena2);
    //printf("Kolko kusov? ");
    //scanf("%d", &pocet2);

    //printf("Co si po 3x chcete kupit? ");
    //scanf("%s", nazov3);
    //printf("Kolko to stoji? ");
    //scanf("%f", &cena3);
    //printf("Kolko kusov? ");
    //scanf("%d", &pocet3);

    //celkc = cena1 * pocet1 + cena2 * pocet2 + cena3 * pocet3;

    //printf("\n--- POLOZKY NAKUPU ---\n");
    //printf("%s - cena: %.2fe, pocet: %d, spolu: %.2fe\n", nazov1, cena1, pocet1, cena1 * pocet1);
    //printf("%s - cena: %.2fe, pocet: %d, spolu: %.2fe\n", nazov2, cena2, pocet2, cena2 * pocet2);
    //printf("%s - cena: %.2fe, pocet: %d, spolu: %.2fe\n", nazov3, cena3, pocet3, cena3 * pocet3);

    //printf("\nCena pred zlavou: %.2fe\n", celkc);


    if (celkc > 50) {
        float cenaZ = celkc * 0.9f;
        printf("Cena po zlave: %.2fe\n", cenaZ);
    }

    return 0;
}
