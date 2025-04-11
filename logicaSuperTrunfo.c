#include <stdio.h>
#include <string.h>

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


///////////////////////////////////////////////////////////////////////////////////////////

    printf("********************SUPER TRUNFO*************************\n");
    printf("AQUI VOCE FARA 2 CARTAS, ELAS BATALHARAM PARA VER QUAL A MAIS PODEROSA\n\n");

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

//informacoes carta 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código Da Carta: %s\n", numerodacarta1);
    printf("Nome Da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", População1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", numerodept1);
    printf("Pib Per Capita: %.2f\n", pibpercapita1);
    printf("Densidade Populacional: %.2f\n\n", densidadepopulacional1);

//perguntas 2

printf("****AGORA VAMOS PARA A CARTA 2****\n");

printf("coloque o seu estado com 1 siglas:\n");
scanf(" %c", &estado2);

printf("coloque o numero da carta. ex:03\n");
scanf("%s", numerodacarta2);

printf("coloque o nome da cidade:\n");
scanf("%s", nomedacidade2);

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

//informacoes carta 2
printf("\nCARTA 2\n");
printf("Estado: %c\n", estado2);
printf("Código Da Carta: %s\n", numerodacarta2);
printf("Nome Da Cidade: %s\n", nomedacidade2);
printf("População: %d\n", População2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos Turísticos: %d\n", numerodept2);
printf("Pib Per Capita: %.2f\n", pibpercapita2);
printf("Densidade Populacional: %.2f\n\n", densidadepopulacional2);



///////////////////////////////////////////////////////////

//quem ganhou

    printf("*****QUEM GANHOU*****\n\n");

//
    if (População1 > População2)
    {
        printf("População: Carta 1 ganhou\n");
    } else
    {
        printf("População: Carta 2 ganhou\n");
    }

//
    if (area1 > area2)
    {
         printf("Área: Carta 1 ganhou\n");
    } else
    {
        printf("Área: Carta 2 ganhou\n");
    }
//

    if (pib1 > pib2)
    {
        printf("PIB: Carta 1 ganhou\n");
    } else
    {
        printf("PIB: Carta 2 ganhou\n");
    }

    //

    if (numerodept1 > numerodept2)
    {
        printf("Pontos Turísticos: Carta 1 ganhou \n");
    } else
    {
        printf("Pontos Turísticos: Carta 2 ganhou \n");
    }

    
    //

    if (pibpercapita1 > pibpercapita2)
    {
        printf("Pib Per Capita: Carta 1 ganhou\n");
    } else
    {
        printf("Pib Per Capita: Carta 2 ganhou\n");
    }

    //

    if (pibpercapita1 > pibpercapita2)
    {
        printf("Densidade Populacional: Carta 1 ganhou\n\n");
    } else
    {
        printf("Densidade Populacional: Carta 2 ganhou\n\n");
    }

    //

    printf("OBRIGADO POR PARTICIPAR DO SUPER TRUNFO");

    
}