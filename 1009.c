#include<stdio.h>
int main(void){
    char nomeFuncionario;
    double salario, vendas;
    
    scanf("%s", &nomeFuncionario);
    scanf("%lf %lf",&salario, &vendas);
    
    printf("TOTAL = R$ %.2f\n", (salario + (vendas*0.15)));

    return 0;

}