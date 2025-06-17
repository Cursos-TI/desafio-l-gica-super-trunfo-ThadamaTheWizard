#include <stdio.h>
//Iremos definir as variaveis

int main (){
    char estado1[4], estado2[4];//variavel estado
    char code1[4],code2[4];//variavel codigo do estado
    char nome1[20],nome2[20];//nome das cidades
    unsigned long int populacao1, populacao2;//população
    int pontotu1, pontotu2;//pontos turisticos
    float area1, area2;//area em km²
    float pib1, pib2;//PIB das cartas
    int ESCOLHA1;//variavel de escolha de atributo 1
    int ESCOLHA2;//variavel de escolha de atributo 2

     //apos definir as variaveis, agora vamos fazer a interação com usuario para ele definir os valores e dados.


    printf ("\n\n___Bem vindo ao supertrunfo___\n\n");

    
    //NOMES DAS CIDADES:

    printf ("digite o nome da cidade da carta 1:\n");
    scanf ("%s",&nome1);

   
    //NUMERO POPULACIONAL DAS CIDADES:

    printf ("numero de habitantes da cidade da carta 1\n");
    scanf ("%lu",&populacao1);

    
    //AREA EM KM²:

    printf ("digite a area em Km² da carta 1\n");
    scanf ("%f",&area1);

    
    //PRODUTO INTERNO BRUTO DAS CIDADES:

    printf ("digite o Produto Interno Bruto da cidade da carta 1\n");
    scanf ("%f",&pib1);

    

    //PONTOS TURISTICOS DAS CIDADES:

    printf ("quantos pontos turisticos terá a cidade da carta 1?\n");
    scanf ("%i",&pontotu1);

    
    //NOMES DAS CIDADES:

    printf ("digite o nome da cidade da carta 2:\n");
    scanf ("%s",&nome2);

   
    //NUMERO POPULACIONAL DAS CIDADES:

    printf ("numero de habitantes da cidade da carta 2\n");
    scanf ("%lu",&populacao2);

    
    //AREA EM KM²:

    printf ("digite a area em Km² da carta 2\n");
    scanf ("%f",&area2);

    
    //PRODUTO INTERNO BRUTO DAS CIDADES:

    printf ("digite o Produto Interno Bruto da cidade da carta 2\n");
    scanf ("%f",&pib2);

    

    //PONTOS TURISTICOS DAS CIDADES:

    printf ("quantos pontos turisticos terá a cidade da carta 2?\n");
    scanf ("%i",&pontotu2);

   

    float Decipop1 = (float) populacao1/area1;//densidade populacional da carta 1
    float PIBCap1 = (pib1*1000000000)/populacao1;//PIB per Capita da carta 1
    
    float Decipop2 = (float) populacao2/area2;//densidade populacional da carta 2
    float PIBCap2 = (pib2*1000000000)/populacao2;//PIB per Capita da carta 2

    float Unidade1, Unidade2; //variavel para a realização da soma de dois atributos

      //MENU PARA ESCOLHER O PRIMEIRO ATRIBUTO:
      printf ("\n\n___Bem vindo ao supertrunfo___\n\n");
      printf ("---ESCOLHA UM ATRIBUTO---\n\n");
      printf ("(1)População\n(2)Pontos Turisticos\n(3)Area em km²\n(4)PIB\n(5)Densidade Populacional\n(6)PIB per Capita\n\n");
      scanf ("%d",&ESCOLHA1);

      
        switch (ESCOLHA1) //a partir daqui haverá varios diferentes caminhos para cada escolha:
        {
        case 1: //ESCOLHA 1: POPULAÇÃO 
          printf ("---ESCOLHA O SEGUNDO ATRIBUTO---\n\n");
          printf ("(1)Pontos Turisticos\n(2)Area em km³\n(3)PIB\n(4)Densidade Populacional\n(5)PIB per Capita\n\n");//população não está aqui
          scanf ("%d",&ESCOLHA2);
          
          //para cada CASE haverá 4 If-else para escolher o segundo atributo, cada case é diferente para excluir o atributo inicial como opção.
        
          if (ESCOLHA2==1){//escolha 2: pontos turisticos. 
            //aqui apresentaremos as cartas e os atributos escolhidos:
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("População:%lu\nPontos turisticos:%d",populacao1,pontotu1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("População:%lu\nPontos turisticos:%d",populacao2,pontotu2);

            //aqui são as condicionais de comparação, qual o maior, menor ou igual:
            //perceba que usei && para colocar duas condições em um só if-else. "A1>A2 && B1>B2"(A1 e B1 são maiores que A2 e B2)
            if (populacao1>populacao2&&pontotu1>pontotu2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (populacao1>populacao2&&pontotu1<pontotu2){
              printf ("\n\nCarta 1 tem população maior que da carta 2, e Carta 2 tem mais pontos turisticos");
            }else{
            if (populacao1<populacao2&&pontotu1>pontotu2){
              printf ("\n\nCarta 2 tem população maior que da carta 1, e Carta 1 tem mais pontos turisticos");
            }else{
            if (populacao1<populacao2&&pontotu1<pontotu2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            //aqui usaremos as unidades para fazer a soma dos atributos, e dependendo de quem é maior ou menor, o resultado será imprimido.
            Unidade1=(populacao1+pontotu1);
            Unidade2=(populacao2+pontotu2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{

            //Aqui partimos para a segunda opção, a area
          if (ESCOLHA2==2){//area

            //aqui apresentaremos as cartas e os atributos escolhidos:(no caso População e Area)
            printf ("\n\n---CARTA 1---\n\n");
            printf ("População:%lu\nArea:%.2f km²",populacao1,area1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("População:%lu\nArea:%.2f km²",populacao2,area2);

            //comparação dos atributos:
            if (populacao1>populacao2&&area1>area2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (populacao1>populacao2&&area1<area2){
              printf ("\n\nCarta 1 tem população maior que da carta 2, e Carta 2 tem a area maior");
            }else{
            if (populacao1<populacao2&&area1>area2){
              printf ("\n\nCarta 2 tem população maior que da carta 1, e Carta 1 tem a area maior");
            }else{
            if (populacao1<populacao2&&area1<area2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }

            //soma dos atributos e decisão de qual é maior, menor, ou igual
            Unidade1=(populacao1+area1);
            Unidade2=(populacao2+area2);
            if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==4){//Densidade populacional

            //Densidade populacional, não é necessario fazer tantas mudanças, somente alterar a mensagem das comparações.
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("População:%lu\nDensidade Populacional:%.2f ",populacao1,Decipop1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("População:%lu\nDensidade Populacional:%.2f ",populacao2,Decipop2);

            //ter Densidade Populacional elevada é ruim, por isso a lingua portuguesa deixa claro, mas sutil que a carta tem problema
            //tipo aqui:"carta 1 tem população maior, MAS a carta 2 tem densidade menor que da carta 2".
            //é sutil, mas esclarece que a carta 2 tem vantagem por TER MENOS.
            if (populacao1>populacao2&&Decipop1>Decipop2){
              printf ("\n\nCarta 1 tem população maior, mas a Carta 2 tem Densidade populacional menor que da carta 1");
            }else{
            if (populacao1>populacao2&&Decipop1<Decipop2){
              printf ("\n\nCarta 1 tem população maior e a Densidade populacional menor que da carta 2");
            }else{
            if (populacao1<populacao2&&Decipop1>Decipop2){
              printf ("\n\nCarta 2 tem população maior e a Densidade populacional menor que da carta 1");
            }else{
            if (populacao1<populacao2&&Decipop1<Decipop2){
              printf ("\n\nCarta 2 tem população maior, mas a Carta 1 tem Densidade populacional menor que da carta 2");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }

            //aqui eu altero a soma pela subtração, quanto mais densidade, menos pontos você tem, e isso é ruim, não é?
            //não quis fazer nada muito mirabolante, é algo simples
            Unidade1=(populacao1-Decipop1);
            Unidade2=(populacao2-Decipop2);
            if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==3){//PIB

            //aqui repetimos o a mesma coisa, até completar todas, São 5 CASE, e cada CASE tem 4 atributos para somar e comparar
            //todos os atributos serão somados, exceto por Densidade Populacional, esse nós subtraimos.
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("População:%lu\nPIB:%.2f bilhões de reais",populacao1,pib1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("População:%lu\nPIB:%.2f bilhões de reais",populacao2,pib2);
            if (populacao1>populacao2&&pib1>pib2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (populacao1>populacao2&&pib1<pib2){
              printf ("\n\nCarta 1 tem população maior que da carta 2, e Carta 2 tem o PIB maior");
            }else{
            if (populacao1<populacao2&&pib1>pib2){
              printf ("\n\nCarta 2 tem população maior que da carta 1, e Carta 1 tem o PIB maior");
            }else{
            if (populacao1<populacao2&&pib1<pib2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==5){
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("População:%lu\nPIB per Capita:%.2f",populacao1,PIBCap1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("População:%lu\nPIB per Capita:%.2f",populacao2,PIBCap2);
            if (populacao1>populacao2&&PIBCap1>PIBCap2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (populacao1>populacao2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 1 tem população maior que da carta 2, e Carta 2 tem o PIB per Capita maior");
            }else{
            if (populacao1<populacao2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 2 tem população maior que da carta 1, e Carta 1 tem o PIB per Capita maior");
            }else{
            if (populacao1<populacao2&&PIBCap1<PIBCap2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(populacao1+PIBCap1);
            Unidade2=(populacao2+PIBCap2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
            printf ("valor invalido");
          }
          }
          } 
          } 
          }


          break;

        case 2: //ESCOLHA 2: PONTOS TURISTICOS

          // Chegamos ao segundo CASE, Pontos turisticos!
          printf ("---ESCOLHA O SEGUNDO ATRIBUTO---\n\n");
          printf ("(1)População\n(2)Area em km²\n(3)PIB\n(4)Densidade Populacional\n(5)PIB per Capita\n\n");//pontos turisticos não aparece mais como opção!
          scanf ("%d",&ESCOLHA2);
          
          if (ESCOLHA2==1){//população

            //Aqui eu reciclei o if-else do CASE 1(pouplação) eu só alterei a ordem da apresentação das cartas.
            //mas os if-else que fazem as comparações e somas são os mesmo.
            //eu copiei, colei e alterei para economizar tempo escrevendo o codigo
            //reciclando o que já estava pronto. só tive cuidado, qualquer errinho é facil se perder.
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Pontos turisticos:%d\nPopulação:%lu",pontotu1,populacao1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Pontos turisticos:%d\nPopulação:%lu",pontotu2,populacao2);
            if (populacao1>populacao2&&pontotu1>pontotu2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (populacao1>populacao2&&pontotu1<pontotu2){
              printf ("\n\nCarta 1 tem população maior que da carta 2, e Carta 2 tem mais pontos turisticos");
            }else{
            if (populacao1<populacao2&&pontotu1>pontotu2){
              printf ("\n\nCarta 2 tem população maior que da carta 1, e Carta 1 tem mais pontos turisticos");
            }else{
            if (populacao1<populacao2&&pontotu1<pontotu2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(populacao1+pontotu1);
            Unidade2=(populacao2+pontotu2);
            if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{

            //Eu não me vejo na necessidade de explicar a mesma coisa para o resto do codigo, é só entender as explicações anteriores, que tá tudo certo.
            //no maximo, vou deixar qual atributo é qual, por exemplo, deixei logo abaixo que estamos no segundo atributo (Area).
          if (ESCOLHA2==2){//area
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Pontos turisticos:%d\nArea:%.2f km²",pontotu1,area1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Pontos turisticos:%d\nArea:%.2f km²",pontotu2,area2);
            if (pontotu1>pontotu2&&area1>area2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (pontotu1>pontotu2&&area1<area2){
              printf ("\n\nCarta 1 tem mais pontos turisticos que a carta 2, e Carta 2 tem a area maior");
            }else{
            if (pontotu1<pontotu2&&area1>area2){
              printf ("\n\nCarta 2 tem mais pontos turisticos que a carta 1, e Carta 1 tem a area maior");
            }else{
            if (pontotu1<pontotu2&&area1<area2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(pontotu1+area1);
            Unidade2=(pontotu2+area2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==4){//Densidade populacional
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Pontos turisticos:%d\nDensidade Populacional:%.2f",pontotu1,Decipop1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Pontos turisticos:%d\nDensidade Populacional:%.2f",pontotu2,Decipop2);
            if (pontotu1>pontotu2&&Decipop1>Decipop2){
              printf ("\n\nCarta 1 tem mais pontos turisticos, mas a Carta 2 tem Densidade populacional menor que da carta 1");
            }else{
            if (pontotu1>pontotu2&&Decipop1<Decipop2){
              printf ("\n\nCarta 1 tem mais pontos turisticos, e a Densidade populacional menor que da carta 2");
            }else{
            if (pontotu1<pontotu2&&Decipop1>Decipop2){
              printf ("\n\nCarta 2 tem mais pontos turisticos, e a Densidade populacional menor que da carta 1");
            }else{
            if (pontotu1<pontotu2&&Decipop1<Decipop2){
              printf ("\n\nCarta 2 tem mais pontos turisticos, mas a Carta 1 tem Densidade populacional menor que da carta 2");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }

            //Subtração ao inves de adição
            Unidade1=(pontotu1-Decipop1);
            Unidade2=(pontotu2-Decipop2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==3){//PIB
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Pontos turisticos:%d\nPIB:%.2f bilhões de reais",pontotu1,pib1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Pontos turisticos:%d\nPIB:%.2f bilhões de reais",pontotu2,pib2);
            if (pontotu1>pontotu2&&pib1>pib2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (pontotu1>pontotu2&&pib1<pib2){
              printf ("\n\nCarta 1 tem mais pontos turisticos que a carta 2, e Carta 2 tem o PIB maior");
            }else{
            if (pontotu1<pontotu2&&pib1>pib2){
              printf ("\n\nCarta 2 tem mais pontos turisticos que a carta 1, e Carta 1 tem o PIB maior");
            }else{
            if (pontotu1<pontotu2&&pib1<pib2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }

            
            Unidade1=(pontotu1+pib1);
            Unidade2=(pontotu2+pib2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==5){//PIB per Capita
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Pontos Turisticos:%d\nPIB per Capita:%.2f",pontotu1,PIBCap1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Pontos Turisticos:%d\nPIB per Capita:%.2f",pontotu2,PIBCap2);
            if (pontotu1>pontotu2&&PIBCap1>PIBCap2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (pontotu1>pontotu2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 1 tem mais pontos turisticos que a carta 2, e Carta 2 tem o PIB per Capita maior");
            }else{
            if (pontotu1<pontotu2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 2 tem mais pontos turisticos que a carta 1, e Carta 1 tem o PIB per Capita maior");
            }else{
            if (pontotu1<pontotu2&&PIBCap1<PIBCap2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(pontotu1+PIBCap1);
            Unidade2=(pontotu2+PIBCap2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
            printf ("valor invalido");
          }
          }
          } 
          } 
          }

          break;

        case 3: //ESCOLHA 3: AREA
          printf ("---ESCOLHA O SEGUNDO ATRIBUTO---\n\n");
          printf ("(1)População\n(2)Pontos Turisticos\n(3)pib\n(4)Densidade Populacional\n(5)PIB per Capita\n\n");
          scanf ("%d",&ESCOLHA2);

        if (ESCOLHA2==1){//população
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Area:%.2f km²\nPopulação:%lu",area1,populacao1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Area:%.2f km²\nPopulação:%lu",area2,populacao2);
            if (populacao1>populacao2&&area1>area2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (populacao1>populacao2&&area1<area2){
              printf ("\n\nCarta 1 tem População maior que da carta 2, e Carta 2 tem a area maior");
            }else{
            if (populacao1<populacao2&&area1>area2){
              printf ("\n\nCarta 2 tem População maior que da carta 1, e Carta 1 tem a area maior");
            }else{
            if (populacao1<populacao2&&area1<area2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(populacao1+area1);
            Unidade2=(populacao2+area2);
            if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==2){//pontos turisticos
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Area:%.2f km²\nPontos Turisticos:%d",area1,pontotu1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Area:%.2f km²\nPontos Turisticos:%d",area2, pontotu2);
            if (pontotu1>pontotu2&&area1>area2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (pontotu1>pontotu2&&area1<area2){
              printf ("\n\nCarta 1 tem mais pontos turisticos que a carta 2, e Carta 2 tem a area maior");
            }else{
            if (pontotu1<pontotu2&&area1>area2){
              printf ("\n\nCarta 2 tem mais pontos turisticos que a carta 1, e Carta 1 tem a area maior");
            }else{
            if (pontotu1<pontotu2&&area1<area2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(pontotu1+area1);
            Unidade2=(pontotu2+area2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==4){//densidade populacional
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Area:%.2f km²\nDensidade Populacional:%.2f",area1,Decipop1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Area:%.2f km²\nDensidade Populacional:%.2f",area2,Decipop2);
            if (area1>area2&&Decipop1>Decipop2){
              printf ("\n\nCarta 1 tem a area maior, mas a Carta 2 tem Densidade populacional menor que da carta 1");
            }else{
            if (area1>area2&&Decipop1<Decipop2){
              printf ("\n\nCarta 1 tem a area maior e a Densidade populacional menor que da carta 2");
            }else{
            if (area1<area2&&Decipop1>Decipop2){
              printf ("\n\nCarta 2 tem a area maior e a Densidade populacional menor que da carta 1");
            }else{
            if (area1<area2&&Decipop1<Decipop2){
              printf ("\n\nCarta 2 tem a area maior, mas a Carta 1 tem Densidade populacional menor que da carta 2");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(area1-Decipop1);
            Unidade2=(area2-Decipop2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==3){//pib
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Area:%.2f km²\nPIB:%.2f bilhões de reais",area1,pib1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Area:%.2f km²\nPIB:%.2f bilhões de reais",area2,pib2);
            if (area1>area2&&pib1>pib2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (area1>area2&&pib1<pib2){
              printf ("\n\nCarta 1 tem a area maior que a carta 2, e Carta 2 tem o PIB maior");
            }else{
            if (area1<area2&&pib1>pib2){
              printf ("\n\nCarta 2 tem a area maior que a carta 1, e Carta 1 tem o PIB maior");
            }else{
            if (area1<area2&&pib1<pib2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(area1+pib1);
            Unidade2=(area2+pib2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==5){
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Area:%.2f km²\nPIB per Capita:%.2f",area1,PIBCap1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Area:%.2f km²\nPIB per Capita:%.2f",area2,PIBCap2);
            if (area1>area2&&PIBCap1>PIBCap2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (area1>area2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 1 tem a area maior que a carta 2, e Carta 2 tem o PIB per Capita maior");
            }else{
            if (area1<area2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 2 tem a area maior que a carta 1, e Carta 1 tem o PIB per Capita maior");
            }else{
            if (area1<area2&&PIBCap1<PIBCap2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(area1+PIBCap1);
            Unidade2=(area2+PIBCap2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
            printf ("Valor invalido");
          }
          }
          } 
          } 
          }
        
          
          break;

        case 4: //ESCOLHA 4: PIB
          printf ("---ESCOLHA O SEGUNDO ATRIBUTO---\n\n");
          printf ("(1)População\n(2)Pontos Turisticos\n(3)area\n(4)Densidade Populacional\n(5)PIB per Capita\n\n");
          scanf ("%d",&ESCOLHA2);

        if (ESCOLHA2==1){//população
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("PIB:%.2f bilhões de reais\nPopulação:%lu",pib1,populacao1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("PIB:%.2f bilhões de reais\nPopulação:%lu",pib2,populacao2);
            if (populacao1>populacao2&&pib1>pib2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (populacao1>populacao2&&pib1<pib2){
              printf ("\n\nCarta 1 tem população maior que da carta 2, e Carta 2 tem o PIB maior");
            }else{
            if (populacao1<populacao2&&pib1>pib2){
              printf ("\n\nCarta 2 tem população maior que da carta 1, e Carta 1 tem o PIB maior");
            }else{
            if (populacao1<populacao2&&pib1<pib2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(populacao1+pib1);
            Unidade2=(populacao2+pib2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==2){//Pontos turisticos
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("PIB:%.2f bilhões de reais\nPontos Turisticos:%d",pib1,pontotu1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("PIB:%.2f bilhões de reais\nPontos Turisticos:%d",pib2, pontotu2);
            if (pontotu1>pontotu2&&pib1>pib2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (pontotu1>pontotu2&&pib1<pib2){
              printf ("\n\nCarta 1 tem mais pontos turisticos que a carta 2, e Carta 2 tem o PIB maior");
            }else{
            if (pontotu1<pontotu2&&pib1>pib2){
              printf ("\n\nCarta 2 tem mais pontos turisticos que a carta 1, e Carta 1 tem o PIB maior");
            }else{
            if (pontotu1<pontotu2&&pib1<pib2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(pontotu1+pib1);
            Unidade2=(pontotu2+pib2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==4){//densidade populacional
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("PIB:%.2f bilhões de reais\nDensidade Populacional:%.2f",pib1,Decipop1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("PIB:%.2f bilhões de reais\nDensidade Populacional:%.2f",pib2,Decipop2);
            if (pib1>pib2&&Decipop1>Decipop2){
              printf ("\n\nCarta 1 tem o PIB maior, mas a Carta 2 tem Densidade populacional menor que da carta 1");
            }else{
            if (pib1>pib2&&Decipop1<Decipop2){
              printf ("\n\nCarta 1 tem o PIB maior e a Densidade populacional menor que da carta 2");
            }else{
            if (pib1<pib2&&Decipop1>Decipop2){
              printf ("\n\nCarta 2 tem o PIB maior e a Densidade populacional menor que da carta 1");
            }else{
            if (pib1<pib2&&Decipop1<Decipop2){
              printf ("\n\nCarta 2 tem o PIB maior, mas a Carta 1 tem Densidade populacional menor que da carta 2");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(pib1-Decipop1);
            Unidade2=(pib2-Decipop2);
            if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==3){//area
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("PIB:%.2f bilhões de reais\nArea:%.2f km²",pib1,area1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("PIB:%.2f bilhões de reais\nArea:%.2f km²",pib2,area2);
            if (area1>area2&&pib1>pib2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (area1>area2&&pib1<pib2){
              printf ("\n\nCarta 1 tem a area maior que a carta 2, e Carta 2 tem o PIB maior");
            }else{
            if (area1<area2&&pib1>pib2){
              printf ("\n\nCarta 2 tem a area maior que a carta 1, e Carta 1 tem o PIB maior");
            }else{
            if (area1<area2&&pib1<pib2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(area1+pib1);
            Unidade2=(area2+pib2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==5){
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("PIB:%.2f Bilhões de reais\nPIB per Capita:%.2f",pib1,PIBCap1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("PIB:%.2f Bilhões de reais\nPIB per Capita:%.2f",pib2,PIBCap2);
            if (pib1>pib2&&PIBCap1>PIBCap2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (pib1>pib2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 1 tem o PIB maior que a carta 2, e Carta 2 tem o PIB per Capita maior");
            }else{
            if (pib1<pib2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 2 tem o PIB maior que a carta 1, e Carta 1 tem o PIB per Capita maior");
            }else{
            if (pib1<pib2&&PIBCap1<PIBCap2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(pib1+PIBCap1);
            Unidade2=(pib2+PIBCap2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
            printf ("valor invalido");
          }
          }
          } 
          } 
          }
        
          break;

        case 5: //ESCOLHA 5: DENSIDADE POPULACIONAL
          printf ("---ESCOLHA O SEGUNDO ATRIBUTO---\n\n");
          printf ("(1)População\n(2)Pontos Turisticos\n(3)area\n(4)PIB\n(5)PIB per Capita\n\n");
          scanf ("%d",&ESCOLHA2);
          if (ESCOLHA2==1){//população
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Densidade Populacional:%.2f\nPopulação:%lu ",Decipop1,populacao1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Densidade Populacional:%.2f\nPopulação:%lu ",Decipop2,populacao2);
            if (populacao1>populacao2&&Decipop1>Decipop2){
              printf ("\n\nCarta 1 tem população maior, mas a Carta 2 tem Densidade populacional menor que da carta 1");
            }else{
            if (populacao1>populacao2&&Decipop1<Decipop2){
              printf ("\n\nCarta 1 tem população maior e a Densidade populacional menor que da carta 2");
            }else{
            if (populacao1<populacao2&&Decipop1>Decipop2){
              printf ("\n\nCarta 2 tem população maior e a Densidade populacional menor que da carta 1");
            }else{
            if (populacao1<populacao2&&Decipop1<Decipop2){
              printf ("\n\nCarta 2 tem população maior, mas a Carta 1 tem Densidade populacional menor que da carta 2");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(populacao1-Decipop1);
            Unidade2=(populacao2-Decipop2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==2){//Pontos turisticos
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Densidade Populacional:%.2f\nPIB:%.2f bilhões de reais",Decipop1,pontotu1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Densidade Populacional:%.2f\nPontos turisticos:%d",Decipop2,pontotu2);
            if (pontotu1>pontotu2&&Decipop1>Decipop2){
              printf ("\n\nCarta 1 tem mais pontos turisticos, mas a Carta 2 tem Densidade populacional menor que da carta 1");
            }else{
            if (pontotu1>pontotu2&&Decipop1<Decipop2){
              printf ("\n\nCarta 1 tem mais pontos turisticos, e a Densidade populacional menor que da carta 2");
            }else{
            if (pontotu1<pontotu2&&Decipop1>Decipop2){
              printf ("\n\nCarta 2 tem mais pontos turisticos, e a Densidade populacional menor que da carta 1");
            }else{
            if (pontotu1<pontotu2&&Decipop1<Decipop2){
              printf ("\n\nCarta 2 tem mais pontos turisticos, mas a Carta 1 tem Densidade populacional menor que da carta 2");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(pontotu1-Decipop1);
            Unidade2=(pontotu2-Decipop2);
            if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==4){//densidade populacional
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Densidade Populacional:%.2f\nPIB:%.2f bilhões de reais",Decipop1,pib1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Densidade Populacional:%.2f\nPIB:%.2f bilhões de reais",Decipop2,pib2);
            if (pib1>pib2&&Decipop1>Decipop2){
              printf ("\n\nCarta 1 tem o PIB maior, mas a Carta 2 tem Densidade populacional menor que da carta 1");
            }else{
            if (pib1>pib2&&Decipop1<Decipop2){
              printf ("\n\nCarta 1 tem o PIB maior e a Densidade populacional menor que da carta 2");
            }else{
            if (pib1<pib2&&Decipop1>Decipop2){
              printf ("\n\nCarta 2 tem o PIB maior e a Densidade populacional menor que da carta 1");
            }else{
            if (pib1<pib2&&Decipop1<Decipop2){
              printf ("\n\nCarta 2 tem o PIB maior, mas a Carta 1 tem Densidade populacional menor que da carta 2");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(pib1-Decipop1);
            Unidade2=(pib2-Decipop2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==3){//area
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Densidade Populacional:%.2f\nArea:%.2f km²",Decipop1,area1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Densidade Populacional:%.2f\nArea:%.2f km²",Decipop2,area2);
             if (area1>area2&&Decipop1>Decipop2){
              printf ("\n\nCarta 1 tem a area maior, mas a Carta 2 tem Densidade populacional menor que da carta 1");
            }else{
            if (area1>area2&&Decipop1<Decipop2){
              printf ("\n\nCarta 1 tem a area maior e a Densidade populacional menor que da carta 2");
            }else{
            if (area1<area2&&Decipop1>Decipop2){
              printf ("\n\nCarta 2 tem a area maior e a Densidade populacional menor que da carta 1");
            }else{
            if (area1<area2&&Decipop1<Decipop2){
              printf ("\n\nCarta 2 tem a area maior, mas a Carta 1 tem Densidade populacional menor que da carta 2");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(area1-Decipop1);
            Unidade2=(area2-Decipop2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if(ESCOLHA2==5){
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("Densidade Populacional:%.2f\nPIB per Capita:%.2f",Decipop1,PIBCap1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("Densidade Populacional:%.2f\nPIB per Capita:%.2f",Decipop2,PIBCap2);
            if (Decipop1>Decipop2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 1 tem o PIB per Capita maior da Carta 2, Mas a Carta 2 Densidade Menor que da Carta 1");
            }else{
            if (Decipop1>Decipop2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 2 tem o PIB per Capita maior e a Densidade populacional menor que da Carta 1");
            }else{
            if (Decipop1<Decipop2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 1 tem o PIB per Capita maior e a Densidade populacional menor que da Carta 1");
            }else{
            if (Decipop1<Decipop2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 2 tem o PIB per Capita maior da Carta 1, Mas a Carta 1 Densidade Menor que da Carta 2");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(PIBCap1-Decipop1);
            Unidade2=(PIBCap2-Decipop2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
            printf ("valor invalido");
          }
          }
          } 
          } 
          }
        
          break;
        case 6://Pib Per Capita:
         printf ("---ESCOLHA O SEGUNDO ATRIBUTO---\n\n");
          printf ("(1)População\n(2)Pontos Turisticos\n(3)Area\n(4)PIB\n(5)Densidade Populacional\n\n");
          scanf ("%d",&ESCOLHA2);

        if (ESCOLHA2==1){//população
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("PIB per Capita:%.2f\nPopulação:%lu",PIBCap1,populacao1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("PIB per Capita:%.2f\nPopulação:%lu",PIBCap2,populacao2);
            if (populacao1>populacao2&&PIBCap1>PIBCap2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (populacao1>populacao2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 1 tem população maior que da carta 2, e Carta 2 tem o PIB per Capita maior");
            }else{
            if (populacao1<populacao2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 2 tem população maior que da carta 1, e Carta 1 tem o PIB per Capita maior");
            }else{
            if (populacao1<populacao2&&PIBCap1<PIBCap2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(populacao1+PIBCap1);
            Unidade2=(populacao2+PIBCap2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==2){//pontos turisticos
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("PIB per Capita:%.2f\nPontos Turisticos:%d",PIBCap1,pontotu1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("PIB per Capita:%.2f\nPontos Turisticos:%d",PIBCap2, pontotu2);
           if (pontotu1>pontotu2&&PIBCap1>PIBCap2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (pontotu1>pontotu2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 1 tem mais pontos turisticos que a carta 2, e Carta 2 tem o PIB per Capita maior");
            }else{
            if (pontotu1<pontotu2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 2 tem mais pontos turisticos que a carta 1, e Carta 1 tem o PIB per Capita maior");
            }else{
            if (pontotu1<pontotu2&&PIBCap1<PIBCap2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(populacao1+PIBCap1);
            Unidade2=(populacao2+PIBCap2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          
          }else{
          if (ESCOLHA2==5){//densidade populacional
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("PIB per Capita:%.2f\nDensidade Populacional:%.2f",PIBCap1,Decipop1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("PIB per Capita:%.2f\nDensidade Populacional:%.2f",PIBCap2,Decipop2);
            if (Decipop1>Decipop2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 1 tem o PIB per Capita maior da Carta 2, Mas a Carta 2 Densidade Menor que da Carta 1");
            }else{
            if (Decipop1>Decipop2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 2 tem o PIB per Capita maior e a Densidade populacional menor que da Carta 1");
            }else{
            if (Decipop1<Decipop2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 1 tem o PIB per Capita maior e a Densidade populacional menor que da Carta 1");
            }else{
            if (Decipop1<Decipop2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 2 tem o PIB per Capita maior da Carta 1, Mas a Carta 1 Densidade Menor que da Carta 2");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(PIBCap1-Decipop1);
            Unidade2=(PIBCap2-Decipop2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==4){//pib
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("PIB per Capita:%.2f\nPIB:%.2f bilhões de reais",PIBCap1,pib1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("PIB per Capita:%.2f\nPIB:%.2f bilhões de reais",PIBCap2,pib2);
             if (pib1>pib2&&PIBCap1>PIBCap2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (pib1>pib2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 1 tem o PIB maior que a carta 2, e Carta 2 tem o PIB per Capita maior");
            }else{
            if (pib1<pib2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 2 tem o PIB maior que a carta 1, e Carta 1 tem o PIB per Capita maior");
            }else{
            if (pib1<pib2&&PIBCap1<PIBCap2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(pib1+PIBCap1);
            Unidade2=(pib2+PIBCap2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
          if (ESCOLHA2==3){
            printf ("\n\n---CARTA 1---\n\n");
            printf ("Nome:%s\n",nome1);
            printf ("PIB per Capita:%.2f\nArea:%.2f km²",PIBCap1,area1);
            printf ("\n\n---CARTA 2---\n\n");
            printf ("Nome:%s\n",nome2);
            printf ("PIB per Capita:%.2f\nArea:%.2f km²",PIBCap2,area2);
            if (area1>area2&&PIBCap1>PIBCap2){
              printf ("\n\nTodos os atributos da carta 1 são maiores que da carta 2");
            }else{
            if (area1>area2&&PIBCap1<PIBCap2){
              printf ("\n\nCarta 1 tem a area maior que a carta 2, e Carta 2 tem o PIB per Capita maior");
            }else{
            if (area1<area2&&PIBCap1>PIBCap2){
              printf ("\n\nCarta 2 tem a area maior que a carta 1, e Carta 1 tem o PIB per Capita maior");
            }else{
            if (area1<area2&&PIBCap1<PIBCap2){
              printf ("\n\nTodos os atributos da carta 2 são maiores que da carta 1");
            }else{
              printf ("que coisa, deu empate =)");
            }
            }
            }
            }
            Unidade1=(area1+PIBCap1);
            Unidade2=(area2+PIBCap2);
           if (Unidade1>Unidade2){
              printf ("\n\nCarta 1 venceu!\n\n");
            }else{
            if (Unidade1<Unidade2){
              printf ("\n\nCarta 2 venceu!\n\n");
            }else{
              printf ("\n\nEMPATE!\n\n");
            }
            }
          }else{
            printf ("Valor invalido");
          }
          }
          } 
          } 
          }
          break;
        default:

          break;
        }
        


    

    
        //MEU COMENTARIO PESSOAL:
    //bem por incrivel que pareça, o programa aguentou todas essas linhas de codigo, sei que existem formas melhores de atender as expectativas do desafio.
    //mas eu estou no começo, e essa foi a forma que imaginei de criar "rotas diferentes dependendo da escolha".
    //durante a programação, eu me senti em uma teia de aranha, codigos são confusos e faceis de se perder, mesmo para a pessoa mais organizada.
    //e mesmo com tudo organizado, é dificil se orientar aqui, eu confesso.
    //
    //   A  WW  (|)      A_A      S
    //  (0)/..\  |}    >(l_l)<___S
    //   | |[]|--°        ||----||
    //   | °/\°            \\_   \\_
    //   |/ |||
    //   |  °°   
    //   | _||_
    //
    //
    //
    return 0;

  //trabalho de Thiago Daniel Maciel do Nascimento

}
