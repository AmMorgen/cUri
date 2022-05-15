#include<stdio.h>
int main(void){
    int funcionario, horas;
    float salario, x;
    scanf("%d %d %f", &funcionario, &horas, &salario);
    printf("NUMBER = %d\n", funcionario);
    x = horas*salario;
    printf("SALARY = U$ %.2f\n", x);
    return 0;
}