#include<stdio.h>
int main()
{
int n,a,d,somme,s;
printf("donner le premier terme:\n");
scanf("%d",&a);
printf("donner la difference:\n");
scanf("%d",&d);
printf("donner le nombre de terme:\n");
scanf("%d",&n);
s=(2*a+(n-1)*d);
somme=n/2*s;
printf("la somme de la suite est:%d",somme);
return 0;
}
