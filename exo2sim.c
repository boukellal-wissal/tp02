#include<stdio.h>
int main(){
int taille ;
printf("donner la taille du taleau:\n");
scanf("%d",&taille);
int note[taille];
int i;
for(i=1;i<=taille;i++){
printf("donner la note %d:\n",i);
scanf("%d",&note[i]);
}
for (i = 1; i <=taille; i++) {
        printf(" %d\t", note[i]);
    }
int somme=0;
for (i = 1; i <=taille; i++) {
    somme=somme+note[i];
    }
printf("\n");
printf("la somme des notes est:%d",somme);
return 0;
}
