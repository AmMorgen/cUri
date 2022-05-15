#include<stdio.h>
int main(void){
    double tempo, velocidade, distancia, gasto;
    scanf("%lf%lf", &tempo, &velocidade);
    distancia = tempo*velocidade;
    gasto = distancia/12;
    printf("%.3lf\n", gasto);
    return 0;
}