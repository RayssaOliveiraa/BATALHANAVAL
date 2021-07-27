#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void) {

 char nome_j1 [15], nome_j2 [15];
 int tam_grade = 10;
 char grade [tam_grade][tam_grade];
 char agua = '~';
 char barco = '@';
 int j1_q_barcos = 4;
 int j2_q_barcos = 4;
 int exit_game = 0;

 //Iniciar a matriz com a posição dos barcos
   int linha, coluna;

   printf("\n\n");
   for(linha = 0; linha <= tam_grade; linha++)
   {
     for (coluna = 0; coluna <= tam_grade; coluna++)
     {
       if( linha == 0)
       {
         printf("%i\t", coluna);
       }
       else if(coluna == 0)
       {
         printf("%i\t", linha);
       }
       else
       {
         grade [linha][coluna] = agua;
         printf("%c\t", grade [linha][coluna]);
       }
     }

     if(linha == 0)
     {
       printf("\n");
   }
   printf("\n");
  }

 printf("\n**BEM VINDO AO JOGO BATALHA NAVAL**\n\n");  
 // Modelo de embarcações
   printf("Modelos de embarcação:\n\n");
   printf("Barco 1: @\n\n");

   printf("Barco 2: @@\n\n");
   
   printf("Barco 3: %c%c\n", ' ', '@');
   printf("         %c%c\n\n", '@', ' ');
   
   printf("Barco 4: %c%c\n", '@', ' ');
   printf("         %c%c", ' ', '@');
 
 
 // Condições de posicionamento de barco do jogador 1
   int j_b1_l, j_b1_c;
   int j_b2_l, j_b2_c;
   int j_b3_l, j_b3_c;
   int j_b4_l, j_b4_c;
   
   printf("\n\nDigite o nome do jogador 1:");
   fgets(nome_j1,15,stdin);
   getchar();
   printf("\nJogador(a) %s\nVocê tem direito a 4 embarcações uma de cada tipo", nome_j1);

   //Barco 1
    do{
     printf("\n\ndigite a linha e a coluna onde deseja posicionar a embarcação 1:");
     scanf("%i %i", &j_b1_l, &j_b1_c);
     getchar();

     if (j_b1_l > 0 && j_b1_l <= tam_grade && j_b1_c > 0 && j_b1_c <= tam_grade && grade[j_b1_l][j_b1_c] == agua)
     {
       grade[j_b1_l][j_b1_c] = barco;
       printf("Barco posicionado com sucesso.");
     }
     else
     {
       j_b1_l = 0;
       j_b1_c = 0;
       printf("\ncoordenada inválida.");
     }
     
    }while(j_b1_l == 0 && j_b1_c == 0);

          
   //Barco 2
    do{
     printf("\n\ndigite a linha e a coluna onde deseja posicionar a embarcação 2:");
     scanf("%i %i", &j_b2_l, &j_b2_c);
     getchar();
     
     if (j_b2_l > 0 && j_b2_l <= tam_grade && j_b2_c > 0 && j_b2_c <= tam_grade && grade[j_b2_l][j_b2_c] == agua && grade[j_b2_l][j_b2_c +1] == agua)
     {
       grade[j_b2_l][j_b2_c] = barco;
       grade[j_b2_l][j_b2_c + 1] = barco;
       printf("Barco posicionado com sucesso.");
     }
     else
     {
       j_b2_l = 0;
       j_b2_c = 0;
       printf("\ncoordenada inválida.");
     }

    }while(j_b2_l == 0 && j_b2_c == 0);
    
  
   //Barco 3
    do{
     printf("\n\ndigite a linha e a coluna onde deseja posicionar a embarcação 3:");
     scanf("%i %i", &j_b3_l, &j_b3_c);
     getchar();

     if (j_b3_l > 0 && j_b3_l <= tam_grade && j_b3_c > 0 && j_b3_c <= tam_grade && j_b3_l +1 <= tam_grade && j_b3_c -1 > 0 && grade[j_b3_l][j_b3_c] == agua && grade[j_b3_l +1][j_b3_c -1] == agua && (j_b3_l != j_b4_l || j_b3_c != j_b4_c +1))
     {
       grade[j_b3_l][j_b3_c] = barco;
       grade[j_b3_l +1][j_b3_c -1] = barco;
       printf("Barco posicionado com sucesso.");
     }
     else
     {
       j_b3_l = 0;
       j_b3_c = 0;
       printf("\ncoordenada inválida.");
     }

    }while(j_b3_l == 0 && j_b3_c == 0);


   //Barco 4
    do{
     printf("\n\ndigite a linha e a coluna onde deseja posicionar a embarcação 4:");
     scanf("%i %i", &j_b4_l, &j_b4_c);
     getchar();

     if (j_b4_l > 0 && j_b4_l <= tam_grade && j_b4_c > 0 && j_b4_c <= tam_grade && j_b4_l +1 <= tam_grade && j_b4_c +1 <= tam_grade && grade[j_b4_l][j_b4_c] == agua && grade[j_b4_l +1][j_b4_c +1] == agua && (j_b4_l != j_b3_l || j_b4_c != j_b3_c -1))
     {
       grade[j_b4_l][j_b4_c] = barco;
       grade[j_b4_l +1][j_b4_c +1] = barco;
       printf("Barco posicionado com sucesso.");
     }
     else
     {
       j_b4_l = 0;
       j_b4_c = 0;
       printf("\ncoordenada inválida.");
     }

    }while(j_b4_l == 0 && j_b4_c == 0);

 printf("\n\n");

 system("clear");
 
 printf("\n\n**BEM VINDO AO JOGO BATALHA NAVAL**\n\n");
 // Modelo de embarcações 
   printf("Modelos de embarcação:\n\n");
   printf("Barco 1: @\n\n");

   printf("Barco 2: @@\n\n");
    
   printf("Barco 3: %c%c\n", ' ', '@');
   printf("         %c%c\n\n", '@', ' ');
    
   printf("Barco 4: %c%c\n", '@', ' ');
   printf("         %c%c", ' ', '@');
 

 //Condições de posicionamento de barco do jogador 2  
   int j_b5_l, j_b5_c;
   int j_b6_l, j_b6_c;
   int j_b7_l, j_b7_c;
   int j_b8_l, j_b8_c;
    
   printf("\n\nDigite o nome do jogador 2:");
   fgets(nome_j2,15,stdin);
   getchar();
   printf("Jogador(a) %s \nVocê tem direito a 4 embarcações uma de cada tipo",nome_j2);
   
   //Barco 1
    do{
     printf("\n\ndigite a linha e a coluna onde deseja posicionar a embarcação 1:");
     scanf("%i %i", &j_b5_l, &j_b5_c);
     getchar();

     if (j_b5_l > 0 && j_b5_l <= tam_grade && j_b5_c > 0 && j_b5_c <= tam_grade && grade[j_b5_l][j_b5_c] == agua)
     {
       grade[j_b5_l][j_b5_c] = barco;
       printf("Barco posicionado com sucesso.");
     }
     else
     {
       j_b5_l = 0;
       j_b5_c = 0;
       printf("\ncoordenada inválida.");
     }

    }while(j_b5_l == 0 && j_b5_c == 0);

        
   //Barco 2
    do{
     printf("\n\ndigite a linha e a coluna onde deseja posicionar a embarcação 2:");
     scanf("%i %i", &j_b6_l, &j_b6_c);
     getchar();

     if (j_b6_l > 0 && j_b6_l <= tam_grade && j_b6_c > 0 && j_b6_c <= tam_grade && grade[j_b6_l][j_b6_c] == agua && grade[j_b6_l][j_b6_c +1] == agua)
     {
       grade[j_b6_l][j_b6_c] = barco;
       grade[j_b6_l][j_b6_c + 1] = barco;
       printf("Barco posicionado com sucesso.");
     }
     else
     {
       j_b6_l = 0;
       j_b6_c = 0;
       printf("\ncoordenada inválida.");
     }

    }while(j_b6_l == 0 && j_b6_c == 0);
      

   //Barco 3
    do{
     printf("\n\ndigite a linha e a coluna onde deseja posicionar a embarcação 3:");
     scanf("%i %i", &j_b7_l, &j_b7_c);
     getchar();

     if (j_b7_l > 0 && j_b7_l <= tam_grade && j_b7_c > 0 && j_b7_c <= tam_grade && j_b7_l +1 <= tam_grade && j_b7_c -1 > 0 && grade[j_b7_l][j_b7_c] == agua && grade[j_b7_l +1][j_b7_c -1] == agua && (j_b7_l != j_b8_l || j_b7_c != j_b8_c +1) && (j_b7_l != j_b4_l || j_b7_c != j_b4_c +1))
     {
       grade[j_b7_l][j_b7_c] = barco;
       grade[j_b7_l +1][j_b7_c -1] = barco;
       printf("Barco posicionado com sucesso.");
     }
     else
     {
       j_b7_l = 0;
       j_b7_c = 0;
       printf("\ncoordenada inválida.");
     }
    }while(j_b7_l == 0 && j_b7_c == 0);


   //Barco 4
    do{
     printf("\n\ndigite a linha e a coluna onde deseja posicionar a embarcação 4:");
     scanf("%i %i", &j_b8_l, &j_b8_c);
     getchar();

     if (j_b8_l > 0 && j_b8_l <= tam_grade && j_b8_c > 0 && j_b8_c <= tam_grade && j_b8_l +1 <= tam_grade && j_b8_c +1 <= tam_grade && grade[j_b8_l][j_b8_c] == agua && grade[j_b8_l +1][j_b8_c +1] == agua && (j_b8_l != j_b7_l || j_b8_c != j_b7_c -1) && (j_b8_l != j_b3_l || j_b8_c != j_b3_c -1))
     {
       grade[j_b8_l][j_b8_c] = barco;
       grade[j_b8_l +1][j_b8_c +1] = barco;
       printf("Barco posicionado com sucesso.");
     }
     else
     {
       j_b8_l = 0;
       j_b8_c = 0;
       printf("\ncoordenada inválida.");
     }

    }while(j_b8_l == 0 && j_b8_c == 0);
  
 printf("\n\n");

 system("clear");
  
 // Bombardeio 
   int bomba1_l, bomba1_c;
   int bomba2_l, bomba2_c;
   char barco_i1 = 'X';
   char barco_a1 = '!';
   char barco_i2 = '#';
   char barco_a2 = '+';
   char b_agua = '*';

   //Matriz de bombas do jogador 1
     for(int linha_1 = 0; linha_1 <= tam_grade; linha_1++)
     {
       for(int coluna_1 = 0; coluna_1 <= tam_grade; coluna_1++)
       {
         if( linha_1 == 0)
         {
           //printf("%i\t", coluna_1); //Os printf estão comentados para a matriz vazia não ser impressa 
         } 
         else if(coluna_1 == 0)
         {
           //printf("%i\t", linha_1);
         }
         else
         {
           grade [linha_1][coluna_1] = agua;
           //printf("%c\t", grade [linha_1][coluna_1]);
         }
       }
       if(linha_1 == 0)
       {
         //printf("\n");
       }
       //printf("\n");
     }

   // Matriz de bombas do jogador 2
     for(int linha_2 = 0; linha_2 <= tam_grade; linha_2++)
     {
       for(int coluna_2 = 0; coluna_2 <= tam_grade; coluna_2++)
       {
         if( linha_2 == 0)
         {
           //printf("%i\t", coluna_2); //Os printf estão comentados para a matriz vazia não ser impressa
         } 
         else if(coluna_2 == 0)
         {
           //printf("%i\t", linha_2);
         }
         else
         {
           grade [linha_2][coluna_2] = agua;
         }
       }
       if(linha_2 == 0)
       {
         //printf("\n");
       }
       //printf("\n");
     } 

   //Criterios de bombardeio
    do{  
     //jogador 1 
     printf("\n\n\nJogador(a) %s\nDigite linha e coluna correpondente a uma casa para soltar uma bomba: ", nome_j1);
     scanf("%i %i", &bomba1_l, &bomba1_c);
     getchar();//Leitura da linha e coluna que o jogador deseja jogar a bomba

     if((grade[bomba1_l][bomba1_c] != agua) && (grade[bomba2_l][bomba2_c] != agua))//Condição caso o jogador repita as cordenadas de posicionamento de uma bomba anterior
     {
       printf("\n\nLocal já bombardeado");
     }
     else  //Condições caso o jogador bombardeie um barco inimigo
     {
       if(bomba1_l == j_b5_l && bomba1_c == j_b5_c)//Barco 1
       {
         --j2_q_barcos;
         grade[bomba1_l][bomba1_c] = barco_i1;
         printf("\n\nEmbarcação inimiga destruída!");
       }
       else if((bomba1_l == j_b6_l && bomba1_c == j_b6_c) || (bomba1_l == j_b6_l && bomba1_c == j_b6_c +1))//Barco 2
       {
         if(bomba1_l == j_b6_l && bomba1_c == j_b6_c)
         {
           --j2_q_barcos;
           grade[bomba1_l][bomba1_c] = barco_i1;
           grade[bomba1_l][bomba1_c +1] = barco_i1;
           printf("\n\nEmbarcação inimiga destruída!");
         }
         else if(bomba1_l == j_b6_l && bomba1_c == j_b6_c +1)
         {
           --j2_q_barcos;
           grade[bomba1_l][bomba1_c] = barco_i1;
           grade[bomba1_l][bomba1_c -1] = barco_i1;
           printf("\n\nEmbarcação inimiga destruída!");
         }
       }
       else if((bomba1_l == j_b7_l && bomba1_c == j_b7_c) || (bomba1_l == j_b7_l +1 && bomba1_c == j_b7_c -1))//Barco 3
       {
         if(bomba1_l == j_b7_l && bomba1_c == j_b7_c)
         {
           --j2_q_barcos;
           grade[bomba1_l][bomba1_c] = barco_i1;
           grade[bomba1_l +1][bomba1_c -1] = barco_i1;
           printf("\n\nEmbarcação inimiga destruída!");
         }
         else if(bomba1_l == j_b7_l +1 && bomba1_c == j_b7_c -1)
         {
           --j2_q_barcos;
           grade[bomba1_l][bomba1_c] = barco_i1;
           grade[bomba1_l -1][bomba1_c +1] = barco_i1;
           printf("\n\nEmbarcação inimiga destruída!");
         } 
       }
       else if((bomba1_l == j_b8_l && bomba1_c == j_b8_c) || (bomba1_l == j_b8_l +1 && bomba1_c == j_b8_c +1))//Barco 4 
       {
         if(bomba1_l == j_b8_l && bomba1_c == j_b8_c)
         {
           --j2_q_barcos;
           grade[bomba1_l][bomba1_c] = barco_i1;
           grade[bomba1_l +1][bomba1_c +1] = barco_i1;
           printf("\n\nEmbarcação inimiga destruída!");
         }
         else if(bomba1_l == j_b8_l +1 && bomba1_c == j_b8_c +1)
         {
           --j2_q_barcos;
           grade[bomba1_l][bomba1_c] = barco_i1;
           grade[bomba1_l -1][bomba1_c -1] = barco_i1;
           printf("\n\nEmbarcação inimiga destruída!");
         }
       }
       //Condições caso o jogador bombardeie o proprio barco
       else if(bomba1_l == j_b1_l && bomba1_c == j_b1_c)//Barco 1
       {
         --j1_q_barcos;
         grade[bomba1_l][bomba1_c] = barco_a1;
         printf("\n\nErro. Própria navegação destruída!");
       }
       else if((bomba1_l == j_b2_l && bomba1_c == j_b2_c) || (bomba1_l == j_b2_l && bomba1_c == j_b2_c +1))//Barco 2
       {
         if(bomba1_l == j_b2_l && bomba1_c == j_b2_c)
         {
           --j1_q_barcos;
           grade[bomba1_l][bomba1_c] = barco_a1;
           grade[bomba1_l][bomba1_c +1] = barco_a1;
           printf("\n\nErro. Própria navegação destruída!");
         }
         else if(bomba1_l == j_b2_l && bomba1_c == j_b2_c +1)
         {
           --j1_q_barcos;
           grade[bomba1_l][bomba1_c] = barco_a1;
           grade[bomba1_l][bomba1_c -1] = barco_a1;
           printf("\n\nErro. Própria navegação destruída!");
         } 
       }
       else if((bomba1_l == j_b3_l && bomba1_c == j_b3_c) || (bomba1_l == j_b3_l +1 && bomba1_c == j_b3_c -1))//Barco 3
       {
         if(bomba1_l == j_b3_l && bomba1_c == j_b3_c)
         {
           grade[bomba1_l][bomba1_c] = barco_a1;
           grade[bomba1_l +1][bomba1_c -1] = barco_a1;
           --j1_q_barcos;
           printf("\n\nErro. Própria navegação destruída!");
         }
         else if(bomba1_l == j_b3_l +1 && bomba1_c == j_b3_c -1)
         {
           --j1_q_barcos;
           grade[bomba1_l][bomba1_c] = barco_a1;
           printf("\n\nErro. Própria navegação destruída!");
         }
       }
       else if((bomba1_l == j_b4_l && bomba1_c == j_b4_c) || (bomba1_l == j_b4_l +1 && bomba1_c == j_b4_c +1))//Barco 4
       {
         if(bomba1_l == j_b4_l && bomba1_c == j_b4_c)
         {
           --j1_q_barcos;
           grade[bomba1_l][bomba1_c] = barco_a1;
           grade[bomba1_l +1][bomba1_c +1] = barco_a1;
           printf("\n\nErro. Própria navegação destruída!");
         }
         else if(bomba1_l == j_b4_l +1 && bomba1_c == j_b4_c +1)
         {
           --j1_q_barcos;
           grade[bomba1_l][bomba1_c] = barco_a1;
           grade[bomba1_l -1][bomba1_c -1] = barco_a1;
           printf("\n\nErro. Própria navegação destruída!");
         }  
       }
       else //Condição caso a posição bombardeada não estaja ocupada por algum barco
       {
         grade[bomba1_l][bomba1_c] = b_agua;
         printf("\n\nNão houve destruição");
       }
     }

     //Matriz de visualização de bombas do jogador 1
     printf("\n\n\n Barco inimigo: X   Seu barco: !   Água: *   Barcos inteiros: %i\n\n", j1_q_barcos);
     for(int linha_1 = 0; linha_1 <= tam_grade; linha_1++)
     {
       for(int coluna_1 = 0; coluna_1 <= tam_grade; coluna_1++)
       {
         if( linha_1 == 0)
         {
           printf("%i\t", coluna_1);
         } 
         else if(coluna_1 == 0)
         {
           printf("%i\t", linha_1);
         }
         else
         {
           printf("%c\t", grade [linha_1][coluna_1]);
         }
       }
       if(linha_1 == 0)
       {
         printf("\n");
       }
       printf("\n");
     }

     printf("\n\n--------------------------------------");

     //jogador 2
     printf("\n\n\nJogador(a) %s\nDigite linha e coluna correpondente a uma casa para soltar uma bomba: ", nome_j2);
     scanf("%i %i", &bomba2_l, &bomba2_c);
     getchar();//Leitura da linha e coluna que deseja jogar a bomba

     if((grade[bomba2_l][bomba2_c] != agua) && (grade[bomba1_l][bomba1_c] != agua))//Condição caso o jogador repita as cordenadas de posicionamentp de uma bomba anterior
     {
       printf("\n\nLocal já bombardeado");
     }
     else //Condições caso o jogador bombardeie um barco inimigo
     {
       if(bomba2_l == j_b1_l && bomba2_c == j_b1_c)//Barco 1
       {
         --j1_q_barcos;
         grade[bomba2_l][bomba2_c] = barco_i2;
         printf("\n\nEmbarcação inimiga destruída!");
       }
       else if((bomba2_l == j_b2_l && bomba2_c == j_b2_c) || (bomba2_l == j_b2_l && bomba2_c == j_b2_c +1))//Barco 2
       {
         if(bomba2_l == j_b2_l && bomba2_c == j_b2_c)
         {
           --j1_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_i2;
           grade[bomba2_l][bomba2_c +1] = barco_i2;
           printf("\n\nEmbarcação inimiga destruída!");
         }
         else if(bomba2_l == j_b2_l && bomba2_c == j_b2_c +1)
         {
           --j1_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_i2;
           grade[bomba2_l][bomba2_c -1] = barco_i2;
           printf("\n\nEmbarcação inimiga destruída!");
         }
       }
       else if((bomba2_l == j_b3_l && bomba2_c == j_b3_c) || (bomba2_l == j_b3_l +1 && bomba2_c == j_b3_c -1))//Barco 3
       {
         if(bomba2_l == j_b3_l && bomba2_c == j_b3_c)
         {
           --j1_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_i2;
           grade[bomba2_l +1][bomba2_c -1] = barco_i2; 
           printf("\n\nEmbarcação inimiga destruída!");
         }
         else if(bomba2_l == j_b3_l +1 && bomba2_c == j_b3_c -1)
         {
           --j1_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_i2;
           grade[bomba2_l -1][bomba2_c+ 1] = barco_i2;
           printf("\n\nEmbarcação inimiga destruída!");
         }
       }
       else if((bomba2_l == j_b4_l && bomba2_c == j_b4_c) || (bomba2_l == j_b4_l +1 && bomba2_c == j_b4_c +1))//Barco 4
       {
         if(bomba2_l == j_b4_l && bomba2_c == j_b4_c)
         {
           --j1_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_i2;
           grade[bomba2_l +1][bomba2_c+1] = barco_i2;
           printf("\n\nEmbarcação inimiga destruída!");
         }
         else if(bomba2_l == j_b4_l +1 && bomba2_c == j_b4_c +1)
         {
           --j1_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_i2;
           grade[bomba2_l -1][bomba2_c-1] = barco_i2;
           printf("\n\nEmbarcação inimiga destruída!");
         }  
       }
       //Condições caso o jogador bombardeie o proprio barco
       else if(bomba2_l == j_b5_l && bomba2_c == j_b5_c)//Barco 1
       {
          --j2_q_barcos;
         grade[bomba2_l][bomba2_c] = barco_a2;
         printf("\n\nErro. Própria navegação destruída!");
       }
       else if((bomba2_l == j_b6_l && bomba2_c == j_b6_c) || (bomba2_l == j_b6_l && bomba2_c == j_b6_c +1))//Barco 2
       {
         if(bomba2_l == j_b6_l && bomba2_c == j_b6_c)
         {
           --j2_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_a2;
           grade[bomba2_l][bomba2_c +1] = barco_a2;
           printf("\n\nErro. Própria navegação destruída!");
         }
         else if(bomba2_l == j_b6_l && bomba2_c == j_b6_c +1)
         {
           --j2_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_a2;
           grade[bomba2_l][bomba2_c -1] = barco_a2;
           printf("\n\nErro. Própria navegação destruída!");
         }   
       }
       else if((bomba2_l == j_b7_l && bomba2_c == j_b7_c) || (bomba2_l == j_b7_l +1 && bomba2_c == j_b7_c -1))//Barco 3
       {
         if(bomba2_l == j_b7_l && bomba2_c == j_b7_c)
         {
           --j2_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_a2;
           grade[bomba2_l +1][bomba2_c -1] = barco_a2;
           printf("\n\nErro. Própria navegação destruída!");
         }
         else if(bomba2_l == j_b7_l +1 && bomba2_c == j_b7_c -1)
         {
           --j2_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_a2;
           grade[bomba2_l -1][bomba2_c +1] = barco_a2; 
           printf("\n\nErro. Própria navegação destruída!");
         }
       } 
       else if((bomba2_l == j_b8_l && bomba2_c == j_b8_c) || (bomba2_l == j_b8_l +1 && bomba2_c == j_b8_c +1))//Barco 4
       {
         if(bomba2_l == j_b8_l && bomba2_c == j_b8_c)
         {
           --j2_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_a2;
           grade[bomba2_l +1][bomba2_c +1] = barco_a2;
           printf("\n\nErro. Própria navegação destruída!");
         }
         else if(bomba2_l == j_b8_l +1 && bomba2_c == j_b8_c +1)
         {
           --j2_q_barcos;
           grade[bomba2_l][bomba2_c] = barco_a2;
           grade[bomba2_l -1][bomba2_c -1] = barco_a2;
           printf("\n\nErro. Própria navegação destruída!");
         }
       }
       else //Condição caso a posição bombardeada não estaja ocupada por algum barco
       {
         grade[bomba2_l][bomba2_c] = b_agua;
         printf("\n\nNão houve destruição");
       }
     }

     //Matriz de visualização de bombas do jogador 2
     printf("\n\n\n Barco inimigo: #   Seu barco: +   Água: *   Barcos inteiros: %i\n\n", j2_q_barcos);
     for(int linha_2 = 0; linha_2 <= tam_grade; linha_2++)
     {
       for(int coluna_2 = 0; coluna_2 <= tam_grade; coluna_2++)
       {
         if( linha_2 == 0)
         {
           printf("%i\t", coluna_2);
         } 
         else if(coluna_2 == 0)
         {
           printf("%i\t", linha_2);
         }
         else
         {
           printf("%c\t", grade [linha_2][coluna_2]);
         }
       }
       if(linha_2 == 0)
       {
         printf("\n");
       }
       printf("\n");
     } 

     printf("\n\n--------------------------------------");

   //Condição para finalizar o while
   if(j1_q_barcos == 0)
   {
     printf("\n\n   O ganhador foi o jogador: %s", nome_j2);
     exit_game = 1;
     break;
   }
   else if(j2_q_barcos == 0)
   {
     printf("\n\n   O ganhador foi o jogador: %s", nome_j1);
     exit_game = 1;
     break;
   }
 }while(exit_game == 0);

 return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          