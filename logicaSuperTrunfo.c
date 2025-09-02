#include <stdio.h>

    int main() {
    // Atributos da primeira carta
    char estado1 [30];
    char codigo1 [10];
    char cidade1 [30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibpc1;
    float super1;

    // Atributos da segunda carta
    char estado2 [30];
    char codigo2 [10];
    char cidade2 [30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibpc2;
    float super2;

    // Entrada dos dados da primeira carta
    printf("=====Cadastro da primeira carta:=====\n");
    printf("Digite o estado da carta (ex: SP): ");
    scanf("%s", estado1);
    printf("Digite o codigo da carta (ex: SP01): ");
    scanf("%s", codigo1);
    printf("Digite a cidade da carta (ex: São_Paulo): "); //Atenção ao uso do underscore na separação das palavras!!
    scanf("%s", cidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da segunda carta
    printf("\n=====Cadastro da segunda carta:=====\n");
    printf("Digite o estado da carta (ex: RJ): ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta (ex: RJ02): ");
    scanf("%s", codigo2);
    printf("Digite a cidade da carta (ex: Rio_de_Janeiro): "); //Atenção ao uso do underscore na separação das palavras!!
    scanf("%s", cidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //Calculos para as variáveis da densidade e PIB
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibpc1 = (float) (pib1*1000000000) / populacao1;
    pibpc2 = (float) (pib2*1000000000) / populacao2;
    
    //Calculo do super de cada carta
    super1 = populacao1+area1+pib1+pontosTuristicos1+(1/densidade1)+pibpc1;
    super2 = populacao2+area2+pib2+pontosTuristicos2+(1/densidade2)+pibpc2;
       
    // Exibindo os dados da primeira carta
    printf("\n===== Dados da Primeira Carta =====\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);
    printf("Super: %.2f\n", super1);

    // Exibindo os dados da segunda carta
    printf("\n===== Dados da Segunda Carta =====\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super: %.2f\n", super2);

    //Exibindo as comparações
    printf("\n===== Vamos aos resultados das comparações =====\n");
    printf("\nComparação das cartas (Atributo: População)\n");
    printf("Carta %s - %s (%s): %lu\n", codigo1, cidade1, estado1, populacao1);
    printf("Carta %s - %s (%s): %lu\n", codigo2, cidade2, estado2, populacao2);
    if(populacao1>populacao2){
        printf("A Carta %s (%s) venceu!\n", codigo1, cidade1);
     }else{
        printf("A Carta %s (%s) venceu!\n", codigo2, cidade2);
    }
    printf("\nComparação das cartas (Atributo: Área)\n");
    printf("Carta %s - %s (%s): %.2f km²\n", codigo1, cidade1, estado1, area1);
    printf("Carta %s - %s (%s): %.2f km²\n", codigo2, cidade2, estado2, area2);
    if(area1>area2){
        printf("A Carta %s (%s) venceu!\n", codigo1, cidade1);
     }else{
        printf("A Carta %s (%s) venceu!\n", codigo2, cidade2);
    }
    printf("\nComparação das cartas (Atributo: PIB)\n");
    printf("Carta %s - %s (%s): %.2f bilhões de reais\n", codigo1, cidade1, estado1, pib1);
    printf("Carta %s - %s (%s): %.2f bilhões de reais\n", codigo2, cidade2, estado2, pib2);
    if(pib1>pib2){
        printf("A Carta %s (%s) venceu!\n", codigo1, cidade1);
     }else{
        printf("A Carta %s (%s) venceu!\n", codigo2, cidade2);
    }
    printf("\nComparação das cartas (Atributo: Pontos Turísticos)\n");
    printf("Carta %s - %s (%s): %d\n", codigo1, cidade1, estado1, pontosTuristicos1);
    printf("Carta %s - %s (%s): %d\n", codigo2, cidade2, estado2, pontosTuristicos2);
    if(pontosTuristicos1>pontosTuristicos2){
        printf("A Carta %s (%s) venceu!\n", codigo1, cidade1);
     }else{
        printf("A Carta %s (%s) venceu!\n", codigo2, cidade2);
    }
    printf("\nComparação das cartas (Atributo: Densidade Populacional)\n");
    printf("Carta %s - %s (%s): %.2f hab/km²\n", codigo1, cidade1, estado1, densidade1);
    printf("Carta %s - %s (%s): %.2f hab/km²\n", codigo2, cidade2, estado2, densidade2);
    if(densidade1<densidade2){
        printf("A Carta %s (%s) venceu!\n", codigo1, cidade1);
     }else{
        printf("A Carta %s (%s) venceu!\n", codigo2, cidade2);
    }
    printf("\nComparação das cartas (Atributo: PIB per Capita)\n");
    printf("Carta %s - %s (%s): %.2f reais\n", codigo1, cidade1, estado1, pibpc1);
    printf("Carta %s - %s (%s): %.2f reais\n", codigo2, cidade2, estado2, pibpc2);
    if(pibpc1>pibpc2){
        printf("A Carta %s (%s) venceu!\n", codigo1, cidade1);
     }else{
        printf("A Carta %s (%s) venceu!\n", codigo2, cidade2);
    }
    printf("\nComparação das cartas (Atributo: Super)\n");
    printf("Carta %s - %s (%s): %.2f\n", codigo1, cidade1, estado1, super1);
    printf("Carta %s - %s (%s): %.2f\n", codigo2, cidade2, estado2, super2);
    if(super1>super2){
        printf("A Carta %s (%s) venceu!\n", codigo1, cidade1);
     }else{
        printf("A Carta %s (%s) venceu!\n", codigo2, cidade2);
    }
    return 0;
}

   