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
    system("BREAK");

} else{
printf("e qual foi a quantidade");
    scanf("%d", &quantidade);
    if (quantidade == 0)
    {
    printf("A QUANTIDADE NÃO PODE SER IGUAL A ZERO");
    system("BREAK");
    } else {
//saida
aux = valor*quantidade;
printf("deu %f reais, credito ou debito?", aux);
    }

system("PAUSE");
return 0;
}
}