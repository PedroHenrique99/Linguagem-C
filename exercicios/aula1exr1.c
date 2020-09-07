#include<stdio.h>
#include<stdalign.h>

float c, f, r, pi, h, v;
int choice;

void Celsius_Fahrenheit() {

        printf("\nDigite a temperatura em graus Ceusius a ser convertida: ");
        scanf("%f",&c);
        f = ((160 + c * 9)/5);
        printf("\nSão %.2f ºF\n",f);
}

void Fahrenheit_Celsius() {

        printf("\nDigite a temperatura em graus Fahrenheit a ser convertida: ");
        scanf("%f",&f);
        c = ((f - 32 )/1.8);
        printf("\nSão %.2f ºC\n",c);
}

void Volume_Cilindro() {
    printf("Digite o raio do cilindro em centimetros: ");
    scanf("%f",&r);
    printf("Digite a altura do cilindro em centimetros: ");
    scanf("%f",&h);
    pi = 3.14;
    v = (pi * r * 2 * h);
    printf("O volume do cilidro é %.2fcm", v);
}

void main() {
    printf("-=-=-=-=-=-=-=-=  CONVERSOR DE TEMPERATURA  -=-=-=-=-=-=-=-=-=-\n\n");
    printf("           (1) - CONVERTER DE FAHRENHEIT PARA CELSIUS\n");
    printf("           (2) - CONVERTER DE CELSIUS PARA FAHRENHEIT\n");
    printf("           (3) - CALCULAR O VOLUME DE UM CILINDRO\n");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nDIGITE O NÚMERO CORRESPONDENTE A OPÇÃO DESEJADA\n");
    printf("=====>  ");
    scanf("%d",&choice);
    
    switch (choice)    {
        case 1:
            Fahrenheit_Celsius();
            break;

        case 2:
            Celsius_Fahrenheit();
            break;

        case 3:
            Volume_Cilindro();
            break;

        default:
            printf("-=-=-=-=-=-=-=-=-=-=  ERRO - OPÇÃO INVALIDA  -=-=-=-=-=-=-=-=-=-=\n");
            printf("POR FAVOR EXECUTE O PROGRAMA NOVAMENTE E INSIRA UM OPÇÃO VALIDA\n");
        
            break;
        }
    
     
    
}