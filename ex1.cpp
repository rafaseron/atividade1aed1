#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main (){

// declaração de variaveis
//char nome1, nome2, nome3; // nome
string nome1, nome2, nome3;
int idade1 = 0;
int idade2 = 0;
int idade3 = 0;
float salario1, salario2, salario3 = 0; // float

// entrada de dados
/*pessoa 1*/
printf("digite o nome da primeira pessoa");
cin >> nome1; 

printf("digite a idade da primeira pessoa");
scanf("%d", &idade1);

printf("digite o salário da primeira pessoa");
scanf("%f", &salario1);

cout << "a pessoa com nome de: " << nome1;
printf(" tem %d anos e salário de %f reais", idade1, salario1);

/*pessoa 2*/
printf("digite o nome da segunda pessoa");
cin >> nome2; 

printf("digite a idade da segunda pessoa");
scanf("%d", &idade2);

printf("digite o salário da segunda pessoa");
scanf("%f", &salario2);

cout << "a pessoa com nome de: " << nome2;
printf(" tem %d anos e salário de %f reais", idade2, salario2);

/*pessoa 3*/
printf("digite o nome da terceira pessoa");
cin >> nome3; 

printf("digite a idade da terceira pessoa");
scanf("%d", &idade3);

printf("digite o salário da terceira pessoa");
scanf("%f", &salario3);

cout << "a pessoa com nome de: " << nome3;
printf(" tem %d anos e salário de %f reais", idade3, salario3);



return 0;
}