#include <stdio.h>
#include <string.h>

int main() {
    typedef struct {
        char nazov[15];
        double cena;
        int pocet;
    } Produkt;

    Produkt nakup[50];
    int strop = 3;
    int i;
    double celkc = 0;

    for (i = 0; i < strop; i++) {
        printf("Zadajte nazov produktu %d: ", i + 1);
        scanf("%s", nakup[i].nazov);
        
        printf("Zadajte cenu produktu: ");
        scanf("%lf", &nakup[i].cena);
        
        printf("Zadajte pocet kusov: ");
        scanf("%d", &nakup[i].pocet);
        
        celkc += nakup[i].cena * nakup[i].pocet;
    }

    printf("\n--- POLOZKY NAKUPU ---\n");
    for (i = 0; i < strop; i++) {
        printf("%s - cena: %.2fe, pocet: %d, spolu: %.2fe\n", 
               nakup[i].nazov, 
               nakup[i].cena, 
               nakup[i].pocet, 
               nakup[i].cena * nakup[i].pocet);
    }

    printf("\nCena je: %.2fe\n", celkc);

    if (celkc > 50) {
        celkc = celkc * 0.9;
        printf("Cena po zlave: %.2fe\n", celkc);
    }

    return 0;
}
