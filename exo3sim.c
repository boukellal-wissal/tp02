#include <stdio.h>

int estCroissante(int tab[], int taille) {
    if (taille <= 1) {
        return 1;
    } else if (tab[taille - 1] < tab[taille - 2]) {
        return 0;
    } else {
        return estCroissante(tab, taille - 1);
    }
}

int main() {
    int taille;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tableau[taille];

    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("element du suite %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    if (estCroissante(tableau, taille)) {
        printf("La suite est croissante.\n");
    } else {
        printf("La suite est décroissante.\n");
    }

    return 0;
}
