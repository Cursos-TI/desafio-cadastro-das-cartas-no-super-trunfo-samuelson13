#include<stdio.h>
//Estado: Uma letra de 'A' a 'B' (representando o estados). Tipo: char
 
//Código da Carta: A letra do estado (ex: A01, B03). Tipo: char[]
 
//Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
//População: O número de habitantes da cidade. Tipo: int
 
//Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
//PIB: O Produto Interno Bruto da cidade. Tipo: float
 
//Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    #include <stdio.h>
 
int main() {
    char estado1 = 'A';
    char estado2 = 'B';
    char codigoCarta[10];
    char nomeDaCidade[20];
    float População;
    float area ;
    int Pib;
    int NumeroDePontosTuristicos;

    printf("Qual estado A ou B ?\n");
     scanf(" %c", &estado1);
       printf("O estado escolhido foi: %c\n", estado1);
       printf("O outro estado é: %c\n", estado2);
    printf("Digite o codigo:\n");
     scanf(" %s",codigoCarta);
       printf("O codigo de catalogação é: %s\n", codigoCarta);
    printf("Digite o nome da cidade:\n");
     scanf(" %s",nomeDaCidade);
       printf("O nome da cidade é: %s\n",nomeDaCidade);
    printf("Digite a população:\n");
     scanf("%f", &População);
       printf("A população é: %f\n", População);
    printf("Digite a área:\n"); 
     scanf("%f", &area);
       printf("A área é: %f\n", area);
    printf("Digite o PIB:\n");
     scanf("%d", &Pib);
       printf("O PIB é: %d\n", Pib);
    printf("Digite o número de pontos turísticos:\n");
     scanf("%d", &NumeroDePontosTuristicos);
       printf("O número de pontos turísticos é: %d\n", NumeroDePontosTuristicos);  
  printf("O estado escolhido foi: %c\n", estado1);
  printf("O outro estado é: %c\n", estado2);
  printf("O codigo de catalogação é: %s\n",codigoCarta);
  printf("O nome da cidade é: %s\n",nomeDaCidade);
  printf("A população é: %f\n", População);
  printf("A área é: %f\n", area);
  printf("O PIB é: %d\n", Pib);
  printf("O número de pontos turísticos é: %d\n", NumeroDePontosTuristicos); 

    return 0;
}