#include <stdio.h>

int main(){
     //Variaveis 1
    char estado1;
 
    char numerodacarta1[2];
 
    char nomedacidade1[30];
 
    int População1;
     
    float area1;
 
    float pib1;
 
    int numerodept1;

    float densidadepopulacional1;

    float pibpercapita1;

    //variaveis carta 2

    char estado2;
 
    char numerodacarta2[2];
 
    char nomedacidade2[30];
 
    int População2;
     
    float area2;
 
    float pib2;
 
    int numerodept2;

    float densidadepopulacional2;

    float pibpercapita2;

    int menuprincipal;
///////////////////////////////////////////////////////////////////////////////////////////

    printf("********************SUPER TRUNFO*************************\n");

    printf("1. Iniciar Jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
scanf("%d", &menuprincipal);

    switch (menuprincipal)
    {
    case 1:

    

    // perguntas 1
    printf("coloque o seu estado com 1 siglas:\n");
    scanf(" %c", &estado1);

    printf("coloque o numero da carta. ex:03\n");
    scanf("%s", numerodacarta1);

    printf("coloque o nome da cidade:\n");
    scanf("%s", nomedacidade1);

    printf("coloque a População:\n");
    scanf("%d", &População1);

    printf("coloque a Area:\n");
    scanf("%f", &area1);

    printf("coloque o pib:\n");
    scanf("%f", &pib1);

    printf("coloque o Numero de pontos Turisticos:\n");
    scanf("%d", &numerodept1);

    densidadepopulacional1 = População1 / area1;

    pibpercapita1 = pib1 / População1;

//perguntas 2

printf("****AGORA VAMOS PARA A CARTA 2****\n");

printf("coloque o seu estado com 1 siglas:\n");
scanf(" %c", &estado2);

printf("coloque o numero da carta. ex:03\n");
scanf("%s", &numerodacarta2);

printf("coloque o nome da cidade:\n");
scanf("%s", &nomedacidade2);

printf("coloque a População:\n");
scanf("%d", &População2);

printf("coloque a Area:\n");
scanf("%f", &area2);

printf("coloque o pib:\n");
scanf("%f", &pib2);

printf("coloque o Numero de pontos Turisticos:\n");
scanf("%d", &numerodept2);

densidadepopulacional2 = População2 / area2;

pibpercapita1 = pib2 / População2;

int menucomparacao;

printf("***VOCE CONCLUIU AS INFORMACOES*** \n");
printf("Qual atributo voce Deseja comparar? \n");
printf("1. Populacao: \n");
printf("2. Area: \n");
printf("3. Pib: \n");
printf("4. Pib Per Capita: \n");
printf("5. Numero de Pontos Turisticos: \n");
printf("6. Densidade Populacional: \n");
scanf("%d", &menucomparacao);

switch (menucomparacao)
{
    case 1:

    if (População1 > População2)
    {
        printf("A Pontuacao da Carta 1 e: %d\n", População1);
        printf("A Pontuacao da Carta 2 e: %d\n", População2);
        printf("População: Carta 1 ganhou\n");
    } else if (População1 < População2)
    {
        printf("A Pontuacao da Carta 1 e: %d\n", População1);
        printf("A Pontuacao da Carta 2 e: %d\n", População2);
        printf("População: Carta 2 ganhou\n");
    }else
    {
        printf("A Pontuacao da Carta 1 e: %d\n", População1);
        printf("A Pontuacao da Carta 2 e: %d\n", População2);
        printf("População: EMPATOU\n");
    }
    break;

    case 2:
    if (area1 > area2)
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", area1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", area2);
         printf("Área: Carta 1 ganhou\n");
    } else if(area1 < area2)
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", area1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", area2);
        printf("Área: Carta 2 ganhou\n");
    }else
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", area1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", area2);
        printf("Área: EMPATOU\n");
    }
    break;

    case 3:
    if (pib1 > pib2)
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", pib1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", pib2);
        printf("PIB: Carta 1 ganhou\n");
    } else if(pib1 < pib2)
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", pib1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", pib2);
        printf("PIB: Carta 2 ganhou\n");
    }else
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", pib1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", pib2);
        printf("PIB: EMPATOU\n");
    }
    
    break;

    case 4:
    if (pibpercapita1 > pibpercapita2)
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", pibpercapita1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", pibpercapita2);
        printf("Pib Per Capita: Carta 1 ganhou\n");
    } else if(pibpercapita1 < pibpercapita2)
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", pibpercapita1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", pibpercapita2);
        printf("Pib Per Capita: Carta 2 ganhou\n");
    }else
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", pibpercapita1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", pibpercapita2);
        printf("Pib Per Capita: EMPATOU");
    }
    

    break;

    case 5:
    if (numerodept1 > numerodept2)
    {
        printf("A Pontuacao da Carta 1 e: %d\n", numerodept1);
        printf("A Pontuacao da Carta 2 e: %d\n", numerodept2);
        printf("Pontos Turísticos: Carta 1 ganhou \n");
    } else if(numerodept1 < numerodept2)
    {
        printf("A Pontuacao da Carta 1 e: %d\n", numerodept1);
        printf("A Pontuacao da Carta 2 e: %d\n", numerodept2);
        printf("Pontos Turísticos: Carta 2 ganhou \n");
    }else
    {
        printf("A Pontuacao da Carta 1 e: %d\n", numerodept1);
        printf("A Pontuacao da Carta 2 e: %d\n", numerodept2);
        printf("Pontos Turísticos: EMPATOU \n");
    }
    break;

    case 6:
    if (densidadepopulacional1 < densidadepopulacional2)
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", densidadepopulacional1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", densidadepopulacional2);
        printf("Densidade Populacional: Carta 1 ganhou\n\n");
    } else if(densidadepopulacional1 > densidadepopulacional2)
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", densidadepopulacional1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", densidadepopulacional2);
        printf("Densidade Populacional: Carta 2 ganhou\n\n");
    }else
    {
        printf("A Pontuacao da Carta 1 e: %.2f\n", densidadepopulacional1);
        printf("A Pontuacao da Carta 2 e: %.2f\n", densidadepopulacional2);
        printf("Densidade Populacional: EMPATOU \n");
    }
    break;

default:
printf("Opcao invalida. \n");
    break;
}

 printf("OBRIGADO POR PARTICIPAR DO SUPER TRUNFO");

    

        break;

        case 2:
          printf("*****REGRAS*****\n");
          printf("Aqui voce montara 2 cartas, escolhendo atributos de cidades.\n");
          printf("No final voce escolhera para Batalha, qual atributo voce quer comparar\n");
        /* code */
        break;
        case 3:
        printf("Fim.\n");
        break;
    }



}