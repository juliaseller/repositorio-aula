#include<stdio.h>

int Add(int n1, int n2){
    int soma;
    soma = n1 + n2;
    return soma;
}

int Sub(int n1, int n2){
    int subtracao;
    subtracao = n1 - n2;
    return subtracao;
}

int Mult(int n1, int n2){
    int mult;
    mult = n1*n2;
    return mult;
}

int Div(int n1, int n2){
    int divisao;
    divisao = n1/n2;
    return divisao;
}

int main (){
    int num1, num2;
    
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
   
    printf("SOMA: %d\n", Add(num1, num2));
    printf("SUBTRACAO: %d\n", Sub(num1, num2));
    printf("MULTIPLICACAO: %d\n", Mult(num1, num2));
    printf("DIVISAO: %d\n", Div(num1, num2));
    return 0;
}