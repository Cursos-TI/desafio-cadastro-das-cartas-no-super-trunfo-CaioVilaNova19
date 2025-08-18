#include <stdio.h>

   // compara os valores das duas cartas
void comparar_cartas(int População, int População2, float Área, float Área2, float pib, float pib2, int Número_de_pontos_turísticos,
int Número_de_pontos_turísticos2, float pib_per_capta, float pib_per_capta2, float densidade_populacional, float densidade_populacional2){

        if (População > População2)
           printf("População: Carta 1 venceu\n");
        else if (População2 > População)
           printf("População: Carta 2 venceu\n");

    if (Área > Área2)
           printf("Área: Carta 1 venceu\n");
        else if (População2 > População)
           printf("Área: Carta 2 venceu\n");

        if (pib > pib2)
           printf("PIB: Carta 1 venceu\n");
        else if (População2 > População)
           printf("PIB: Carta 2 venceu\n");

        if (Número_de_pontos_turísticos > Número_de_pontos_turísticos2)
           printf("Pontos Turísticos: Carta 1 venceu\n");
        else if (Número_de_pontos_turísticos2 > Número_de_pontos_turísticos)
           printf("Pontos Turísticos: Carta 2 venceu\n");

        if (pib_per_capta > pib_per_capta2)
           printf("PIB per Capta: Carta 1 venceu\n");
        else if (pib_per_capta2 > pib_per_capta)
           printf("PIB per Capta: Carta 2 venceu\n");

        if (densidade_populacional > densidade_populacional2)
           printf("Densidade Populacional: Carta 1 venceu\n");
        else if (densidade_populacional > densidade_populacional2)
           printf("Densidade Populacional: Carta 2 venceu\n");
}

int main(){
   //valores das cartas
   char Estado[50];
   char Código_da_carta[06];
   char Nome_da_cidade[50];
   int População;
   float Área;
   float pib;
   int Número_de_pontos_turísticos;
   
// solicita dados ao usuário
   printf("Digite o Estado: ");
   scanf("%49s", Estado);

   printf("Digite o Código: ");
      scanf("%5s", Código_da_carta);

   printf("Digite o Nome da Cidade: ");
      scanf("%49s", Nome_da_cidade);

   printf("Digite a População: ");
       scanf("%d", &População);

   printf("Digite a Área: ");
      scanf("%f", &Área);  

   printf("Digite o PIB: ");
     scanf("%f", &pib);

   printf("Digite o Número de Pontos Turísticos: ");
     scanf("%d", &Número_de_pontos_turísticos);

     // Calcula os valores após receber a entrada
     float pib_per_capta = pib / População;
     float densidade_populacional = Área / População;
float SuperPoder = População + Área + pib + Número_de_pontos_turísticos + pib_per_capta + (1.0 / densidade_populacional);
     printf("Carta 1 salva com sucesso, digite os valores da Carta 2: \n");

     // Valores das cartas 2

   char Estado2[50];
   char Código_da_carta2[06];
   char Nome_da_cidade2[50];
   int População2;
   float Área2;
   float pib2;
   int Número_de_pontos_turísticos2;
   
// solicita dados ao usuário2
   printf("Digite o Estado: ");
   scanf("%49s", Estado2);

   printf("Digite o Código: ");
      scanf("%5s", Código_da_carta2);

   printf("Digite o Nome da Cidade: ");
      scanf("%49s", Nome_da_cidade2);

   printf("Digite a População: ");
       scanf("%d", &População2);

   printf("Digite a Área: ");
      scanf("%f", &Área2);  

   printf("Digite o PIB: ");
     scanf("%f", &pib2);

   printf("Digite o Número de Pontos Turísticos: ");
     scanf("%d", &Número_de_pontos_turísticos2);

     // Calcula os valores após receber a entrada2
     float pib_per_capta2 = pib2 / População2;
     float densidade_populacional2 = Área2 / População2;
     float SuperPoder2 = População2 + Área2 + pib2 + Número_de_pontos_turísticos2 + pib_per_capta2 + (1.0 / densidade_populacional2);

     // Exibe os dados coletados
         printf("\n=== Dados da Carta ===\n");
         printf("Estado: %s\n", Estado);
         printf("Código: %s\n", Código_da_carta);
         printf("Cidade: %s\n", Nome_da_cidade);
         printf("População: %d\n", População);
         printf("Área: %.2f\n", Área);
         printf("PIB: %.2f\n", pib);
         printf("Nº de Pontos Turísticos: %d\n", Número_de_pontos_turísticos);
         printf("PIB per capta: %f\n", pib_per_capta);
         printf("Densidade Populacional: %f\n", densidade_populacional);
         printf("Super Poder: %f\n", SuperPoder);


     // Exibe os dados coletados2
         printf("\n=== Dados da Carta2 ===\n");
         printf("Estado2: %s\n", Estado2);
         printf("Código2: %s\n", Código_da_carta2);
         printf("Cidade2: %s\n", Nome_da_cidade2);
         printf("População2: %d\n", População2);
         printf("Área2: %.2f\n", Área2);
         printf("PIB2: %.2f\n", pib2);
         printf("Nº de Pontos Turísticos2: %d\n", Número_de_pontos_turísticos2);
         printf("PIB per capta2: %f\n", pib_per_capta2);
         printf("Densidade Populacional2: %f\n", densidade_populacional2);
         printf("Super Poder: %f\n", SuperPoder2);

         // Pergunta ao usuário se ele quer comparar as cartas
         char resposta;
         
         printf("\nGostaria de comparar as cartas?(Y/N): ");
         scanf(" %c", &resposta);

       if (resposta == 'Y')
                comparar_cartas(População, População2, Área, Área2, pib, pib2, Número_de_pontos_turísticos, Número_de_pontos_turísticos2,
                pib_per_capta, pib_per_capta2, densidade_populacional, densidade_populacional2);

       else if (resposta == 'N')
                 
  return 0; 

       else
           printf("\nResposta inválida, encerrando programa...");

  return 0;
      
}
