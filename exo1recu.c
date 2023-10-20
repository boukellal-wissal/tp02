#include<stdio.h>

int sommeSuiteArithmetique(int a, int d, int n) {
    if (n == 1) {
        return a;
    } else {
        return a + sommeSuiteArithmetique(a + d, d, n - 1);
    }
}

int main() {
    int premierTerme ;
    int difference ;
    int nombreTermes;
printf("donner le premier terme:\n");
scanf("%d",&premierTerme);
printf("donner la difference:\n");
scanf("%d",&difference);
printf("donner le nombre de terme:\n");
scanf("%d",&nombreTermes);
    int somme = sommeSuiteArithmetique(premierTerme, difference, nombreTermes);

    printf("La somme des termes de la suite arithmétique est : %d\n",somme);

    return 0;
}


