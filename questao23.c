#include <stdio.h>

int main() {
    float metros;

    printf("Digite o valor em metros: ");
    if (scanf("%f", &metros) != 1) {
        printf("Erro: Entrada inválida.\n");
        return 1;
    }

    if (metros < 0) {
        printf("Erro: O valor em metros deve ser não negativo.\n");
        return 1;
    }

    float centimetros = metros * 100;
    float milimetros = metros * 1000;
    float quilometros = metros / 1000;

    printf("%.2f metros é igual a:\n", metros);
    printf("%.2f centímetros\n", centimetros);
    printf("%.2f milímetros\n", milimetros);
    printf("%.5f quilômetros\n", quilometros);

    return 0;
}

#include <stdio.h>

int main()
{
    int i = 50;
    float r = 4.65;
    char c = "Pedro";
    
    int *i2 = &i;
    float *r2 = &r;
    char *c2 = &c;
    
    
    printf("Este é o valor de inteiro:%d \n ", i);
    *i2 = 40;
    printf("Este é o novo valor de inteiro:%d \n ", *i2);
    
    printf("Este é o valor de real:%.2f \n ", r);
    *r2 = 3.87;
    printf("Este é o novo valor de real:%.2f \n ", *r2);
    
    printf("Este é o valor de inteiro:%s \n ", c);
    *c2 = "Maria";
    printf("Este é o novo valor de inteiro:%s \n ", *c2);
    


    return 0;
}
