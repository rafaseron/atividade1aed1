#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main (){
// declaração de variáveis
float valor = 0;
int quantidade;
float aux; 

//processamento
printf("bem vindo a subway");
printf(" o senhor comprou o lanche de quantos reais?");
scanf("%f", &valor);

if (valor == 0)
{
    printf("O VALOR NÃO PODE SER NULO!");
    return 0;

} else
printf("e qual foi a quantidade");

if (quantidade == 0)
{
    printf("A QUANTIDADE NÃO PODE SER IGUAL A ZERO");
    return 0;

} else
scanf("%d", &quantidade);
//saida
aux = valor*quantidade;
printf("deu %f reais, crédito ou debito? KKK", aux);

return 0;
}