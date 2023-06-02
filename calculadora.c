#include <stdio.h>

int somarNumeros(int a, int b){
    int somar = a + b;
    return somar;
}

float subtrairNumeros(float a, float b){
    float subtrair = a - b;
    return subtrair;
}

float multiplicarNumeros(float a, float b){
    float multiplicar = a * b;
    return multiplicar;
}

float dividirNumeros(float a, float b){
    float dividir = a / b;
    return dividir;
}

float mediaNumeros(float a, float b){
    float media = (a+b) / 2;
    return media;
}

int main(){
    int x;
    int y;
    int inicio;

    do
    {
        printf("1 - Soma \n2 - Subtrair \n3 - Multiplicar \n4 - Dividir \n5 - Media \n");
        scanf("%d", &inicio);

        if (inicio == 1){
        printf("Digite o valor do numero 1: ");
        scanf("%d", &x);
        printf("Digite o valor do numero 2: ");
        scanf("%d", &y);
        int resultado = somarNumeros(x, y);
        printf("O valor da conta e %d: ", resultado);
    } 
    else if (inicio == 2){
        float x = x;
        float y = y;
        printf("Digite o valor do numero 1: ");
        scanf("%f", &x);
        printf("Digite o valor do numero 2: ");
        scanf("%f", &y);
        float resultado = subtrairNumeros(x, y);
        printf("O valor da conta e %f: ", resultado);
    }
    else if (inicio == 3){
        float x = x;
        float y = y;
        printf("Digite o valor do numero 1: ");
        scanf("%f", &x);
        printf("Digite o valor do numero 2: ");
        scanf("%f", &y);
        float resultado = multiplicarNumeros(x, y);
        printf("O valor da conta e %f: ", resultado);
    }
    else if(inicio == 4){
        float x = x;
        float y = y;
        printf("Digite o valor do numero 1: ");
        scanf("%f", &x);
        printf("Digite o valor do numero 2: ");
        scanf("%f", &y);
        float resultado = dividirNumeros(x, y);
        printf("O valor da conta e %f: ", resultado);
    }
    else if(inicio == 5){
        float x = x;
        float y = y;
        printf("Digite o valor do numero 1: ");
        scanf("%f", &x);
        printf("Digite o valor do numero 2: ");
        scanf("%f", &y);
        float resultado = mediaNumeros(x, y);
        printf("O valor da conta e %f: ", resultado);
    }
    else{
        printf("Comando inexistente. (9 - Tentar novamente | 0 - Sair da calculadora) ");
    }
    } while (1);
    

return 0;
}