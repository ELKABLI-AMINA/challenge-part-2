#include <stdio.h>
#include <math.h>

int main(){
                    float a, b, c, delta, x1, x2;
                printf("veuillez entrer les valeurs: a, b, c\n");
                scanf("%f,%f,%f&a,&b,&c");
                delta= (b*b)-(4*a*c);
                if (delta>0);
                x1=(-b-sqrt(delta))/(2*a);
                x2=(-b+sqrt(delta))/(2*a);
                printf("les deux solutions sont: x1=%.2f && x2=%.2f\n",x1,x2);
                if (delta==0);
                x1=(-b)/2*a;
                printf("la seule solution est: x1=%.2f ",x1);
                if (delta <0);
                printf("l'equation n'admet pas de solution");


	return 0;
}
