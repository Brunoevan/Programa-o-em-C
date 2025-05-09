#include<stdio.h> //Inclusão da biblioteca necessária para o uso das funções printf e scanf.
int main(){
    // Nesta parte do programa são declarados os tipos e as variáveis utilizadas para cada carta do jogo.  
    char estado,codigo_carta[4],nome_cidade[20];
    int  populacao, numero_pontos_turisticos;
    float area,PIB;

    /*Esta parte do código é responsável por solicitar ao usuário que preencha as informações referentes à Carta_1, armazenando-as 
    nas respctivas variáveis*/

     printf( "INSIRA OS DADOS DA CARTA_1.\n ");

     printf("Primeiro escolha entre os estados (A,B,C...ou H): \n");
     scanf(" %c",&estado);    
     printf("Agora selecione o Codigo da carta/cidade de acordo com o estado anteriormene selecionado (ex:A01,A02,B03,B04,C05 ): \n");
     scanf(" %s",&codigo_carta); 
     printf("Agora informe o nome da cidade: \n");
     scanf("%s",nome_cidade);  
     printf("Agora informe a população da cidade selecionada: \n");
     scanf("%d",&populacao);   
     printf("Agora informe a quantidade de pontos turisticos da cidade selecionada: \n");
     scanf("%d",&numero_pontos_turisticos); 
     printf("Agora informe a área em (km²) da cidade selecionada:\n");
     scanf("%f",&area);
     printf("Agora informe o PIB da cidade selecionada:\n");
     scanf("%f",&PIB);
     
     //Esta parte do código imprimi na tela os dados informados pelo usuário para a Carta_1.
     printf("O Estado selecionado para a Carta_1 é: %c\n", estado);
     printf("O código Selecionado para a Carta_1 é: %s\n",codigo_carta);
     printf("O nome da Cidade para a Carta_1 é: %s\n",nome_cidade);
     printf("A população da cidade para a Carta_1 é:%d\n",populacao);
     printf("A quantidade de pontos turisticos para a Carta_1 é:%d\n",numero_pontos_turisticos);
     printf("A área da cidade em (Km²) para a Carta_1 é:%.2f ",area);
     printf("Km²\n");
     printf("O PIB da cidade selecionada para a Carta_1 é:%.2f",PIB);
     printf(" bilhões de reais\n\n");
    
     /*Neste ponto do código é solicitado ao usuário que insira as informações referentes à Carta_2, 
     armazenando-as nas respectivas variáveis*/
    
     printf( "INSIRA OS DADOS DA CARTA_2.\n ");

     printf("Primeiro escolha entre os estados (A,B,C...ou H): \n");
     scanf(" %c",&estado); 
     printf("Agora selecione o Codigo da carta/cidade de acordo com o estado anteriormene selecionado (ex:A01,A02,B03,B04,C05 ): \n");
     scanf(" %s",&codigo_carta);
     printf("Agora selecione informe o nome da cidade: \n");
     scanf("%s",nome_cidade);  
     printf("Agora informe a população da cidade selecionada: \n");
     scanf("%d",&populacao);
     printf("Agora informe a quantidade de pontos turisticos da cidade selecionada: \n");
     scanf("%d",&numero_pontos_turisticos); 
     printf("Agora informe a área em (km²) da cidade selecionada:\n");
     scanf("%f",&area);
     printf("Agora informe o PIB da cidade selecionada:\n");
     scanf("%f",PIB); 
     
     //Esta parte do código imprimi na tela os dados informados pelo usuário para a Carta_2.
     printf("O Estado selecionado para a Carta_2 é: %c\n", estado);
     printf("O Codigo selecionado para a Carta_2 é: %s\n",codigo_carta);
     printf("O nome da Cidade para a Carta_2 é: %s\n",nome_cidade);
     printf("A população da cidade para a Carta_2 é:%d\n",populacao);
     printf("A quantidade de pontos turisticos para a Carta_1 é:%d\n",numero_pontos_turisticos);
     printf("A área da cidade em (Km²) para a Carta_2 é:%.2f ",area);
     printf("Km²\n");
     printf("O PIB da cidade selcionada para a Carta_2 é:%.2f",PIB);
     printf(" bilhões de reais\n");

      return 0;  
}