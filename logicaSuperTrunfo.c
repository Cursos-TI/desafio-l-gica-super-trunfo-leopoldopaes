#include <stdio.h>

// Desafio 2 Super Trunfo - Cidades - Lógica

int main() {
    
    // Definição das variáveis 

    int estado01,estado02;
    int codigo01,codigo02;
    char cidade01[50],cidade02[50];
    unsigned long int populacao01, populacao02;
    float area01,area02;
    float pib01, pib02;
    int turismo01,turismo02;
    float densidadep1,densidadep2;
    float pibpc1,pibpc2;
    int pontos1= 0, pontos2=0;
    int escolha01, escolha02;

    // Abertura do jogo: 

    printf ("\n ## Bem vindo ao Jogo Super Trunfo ##\n");
  
    // Cadastro das Cartas:
    
    // CARTA 01
    printf ("\n**Digite os dados da primeira Carta**\n");

    printf(" Estado: ");
    scanf("%s",&estado01);

    printf(" Código da carta: ");
    scanf("%s", &codigo01);

    printf(" Cidade: ");
    scanf("%s", &cidade01);

    printf(" População: ");
    scanf("%lu", &populacao01);

    printf(" Área em km²: ");
    scanf("%f", &area01);

    printf(" PIB: ");
    scanf("%f", &pib01);

    printf(" Número de pontos turísticos: ");
    scanf("%d", &turismo01);

    // CARTA 02:

    printf ("\n**Digite os dados da segunda Carta**\n");

    printf(" Estado: ");
    scanf("%s",&estado02);

    printf(" Código da carta: ");
    scanf("%s", &codigo02);

    printf(" Cidade: ");
    scanf("%s", &cidade02);

    printf(" População: ");
    scanf("%lu", &populacao02);

    printf(" Área em km²: ");
    scanf("%f", &area02);

    printf(" PIB: ");
    scanf("%f", &pib02);

    printf(" Número de pontos turísticos: ");
    scanf("%d", &turismo02);

    // Calculando a Densidade populacional e a PIB per capita

    densidadep1 = (float) populacao01 / area01;
    densidadep2 = (float) populacao02 / area02;

    pibpc1 = (float) pib01 / populacao01;
    pibpc2 = (float) pib02 / populacao02;

    // Menu de escolha primeiro atributo: 

    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (vence o MENOR)\n");
    printf("6 - PIB per Capita\n");
    printf("\n Escolha o primeiro atributo para comparar: ");
    scanf("%d", & escolha01);

   
    switch (escolha01)
    {
        // População:
    case 1: 
    if (populacao01 > populacao02){
        printf ("Cidade 1 tem maior população.\n");
        pontos1++;
    } else if (populacao01 < populacao02) {
        printf ("Cidade 2 tem maior população. \n");
        pontos2++;
    } else {
        printf ("Empate em População! \n");
    }
        break;

        // Área por km²:
    case 2:
    if (area01 > area02){
        printf ("Cidade 1 tem maior área por km².\n");
        pontos1++;
    } else if (area01 < area02) {
        printf ("Cidade 2 tem maior área por km². \n");printf ("Empate! \n");
        pontos2++;
    } else {
        printf ("Empate em Área por km²! \n");
    }
    break;

        // PIB:
    case 3:
    if (pib01 > pib02){
        printf ("Cidade 1 tem maior PIB.\n");
        pontos1++;
    } else if (pib01 < pib02) {
        printf ("Cidade 2 tem maior PIB. \n");
        pontos2++;
    } else {
      printf ("Empate em PIB!\n");
    }
    break;

        // Pontos Turísticos:
    case 4: 
    if (turismo01 > turismo02){
        printf ("Cidade 1 tem mais pontos turisticos.\n");
        pontos1++;
    } else if (turismo01 < turismo02) {
        printf ("cidade 2 tem mais pontos turisticos. \n");
        pontos2++;
    } else {
        printf ("Empate em Turismo!\n");
    }
    break;

        // Densidade populacional:
    case 5:
    if (densidadep1 < densidadep2){
        printf ("Cidade 1 tem menor Densidade populacional.\n");
        pontos1++;
    } else if (densidadep1 > densidadep2) {
        printf ("Cidade 2 tem menor Densidade populacional. \n");
        pontos2++;
    } else {
        printf ("Empate em Densidade populacional!\n");
    }
    break;

        // PIB per capita:
    case 6:
     if (pibpc1> pibpc2){
        printf ("Cidade 1 tem maior PIB per capita.\n");
        pontos1++;
    } else if (pibpc1 == pibpc2) {
        printf ("Cidade 2 tem maior PIB per capita. \n");
        pontos2++;
    } else {
        printf ("Empate em PIB per capita!\n");
    }
    break;

    default:
    printf (" Opção inválida!\n");
    break;
    }
   
    // Escolhendo o segundo atributo
  
    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (vence o MENOR)\n");
    printf("6 - PIB per Capita\n");
    printf("\n Escolha o segundo atributo diferente do primeiro: ");
    scanf("%d", &escolha02);

    if (escolha01 == escolha02) {
        printf ("Você escolheu o mesmo atributo!");
    } else {
        switch (escolha02)
        {
        case 1: 
    if (populacao01 > populacao02){
        printf ("Cidade 1 tem maior população.\n");
        pontos1++;
    } else if (populacao01 < populacao02) {
        printf ("Cidade 2 tem maior população. \n");
        pontos2++;
    } else {
        printf ("Empate em População! \n");
    }
        break;

        // Área por km²:
    case 2:
    if (area01 > area02){
        printf ("Cidade 1 tem maior área por km².\n");
        pontos1++;
    } else if (area01 < area02) {
        printf ("Cidade 2 tem maior área por km². \n");printf ("Empate! \n");
        pontos2++;
    } else {
        printf ("Empate em Área por km²! \n");
    }
    break;

        // PIB:
    case 3:
    if (pib01 > pib02){
        printf ("Cidade 1 tem maior PIB.\n");
        pontos1++;
    } else if (pib01 < pib02) {
        printf ("Cidade 2 tem maior PIB. \n");
        pontos2++;
    } else {
      printf ("Empate em PIB!\n");
    }
    break;

        // Pontos Turísticos:
    case 4: 
    if (turismo01 > turismo02){
        printf ("Cidade 1 tem mais pontos turisticos.\n");
        pontos1++;
    } else if (turismo01 < turismo02) {
        printf ("cidade 2 tem mais pontos turisticos. \n");
        pontos2++;
    } else {
        printf ("Empate em Turismo!\n");
    }
    break;

        // Densidade populacional:
    case 5:
    if (densidadep1 < densidadep2){
        printf ("Cidade 1 tem menor Densidade populacional.\n");
        pontos1++;
    } else if (densidadep1 > densidadep2) {
        printf ("Cidade 2 tem menor Densidade populacional. \n");
        pontos2++;
    } else {
        printf ("Empate em Densidade populacional!\n");
    }
    break;

        // PIB per capita:
    case 6:
     if (pibpc1> pibpc2){
        printf ("Cidade 1 tem maior PIB per capita.\n");
        pontos1++;
    } else if (pibpc1 == pibpc2) {
        printf ("Cidade 2 tem maior PIB per capita. \n");
        pontos2++;
    } else {
        printf ("Empate em PIB per capita!\n");
    }
        break;
        
      default:
        printf (" Opção inválida!\n");
        break;
        }
    }


    // Exibição dos Resultados:

    printf (" \n Placar final \n");
    printf ("%s : %d pontos\n", cidade01, pontos1);
    printf ("%s : %d pontos\n", cidade02, pontos2);

    if (pontos1 > pontos2) {
        printf (" \n A carta vencedora foi da cidade: %s\n", cidade01);
    } else if (pontos1 < pontos2) {
        printf (" \n A carta  vencedora foi da cidade: %s\n", cidade02);
    } else {
        printf (" \n A competição ficou empatada!\n");
    }
   
    return 0;
}