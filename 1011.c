#include<stdio.h>
int main(void){
    double raio, pi;
    pi = 3.14159;
    scanf("%lf", &raio);
    printf("VOLUME = %.3f\n", ((4.0/3)*pi*(raio*(raio*raio))));
    return 0;
}