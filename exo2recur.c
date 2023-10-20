#include <stdio.h>

int sommeNotes(int note[], int taille) {
    int somme = 0;

    for (int i = 0; i < taille; i++) {
        somme +=note[i];
    }

    return somme;
}

int main() {
    int taille;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int notes[taille];

    for (int i = 0; i < taille; i++) {
        printf("Entrez la note %d : ", i + 1);
        scanf("%d", &notes[i]);
    }

    int sum = sommeNotes(notes, taille);

    printf("La somme des notes est : %d\n", sum);

    return 0;
}

