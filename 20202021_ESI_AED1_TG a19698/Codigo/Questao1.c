#include <stdio.h>

/**
 * @file Questão1.c
 * @author Joel Jonassi (joel14jonassi.jj@gmail.com)
 * @brief Aplicação de supervisionamento de paquetes
 * @version 0.1
 * @date 2020-11-08
 * @copyright Copyright (c) 2020
 */
 
  int paquete;
  int mediaPaq;
  int ref, horasTrab;
  int soma=0;

int main(){

printf("Introduza o numero do paquete: ");
scanf ("%d", &paquete);
printf("introduza as horas de trabalho: ");
scanf("%d", &horasTrab);

  if (paquete>=1 && paquete<=5)
  { 
      if (paquete==1)
        {     
          printf("introduza o numero de refeicoes: ");
          scanf ("%d", &ref);
          mediaPaq = ref/horasTrab;
          printf("A media das refeicoes do paquete%d : %d refeicoes por hora", paquete, mediaPaq);
          if (ref>4){
            soma += ref; 
            printf("%d",soma);
            }
        }
      if (paquete==2)
        {
          printf("introduza o numero de refeicoes: ");
          scanf ("%d", &ref);
          mediaPaq = ref/horasTrab;
          printf("A media das refeicoes do paquete%d : %d refeicoes por hora", paquete, mediaPaq);
          if (ref>4){
            soma+=ref ;
            printf("%d",soma);
        }
        }
      
      if (paquete==3)
        {
          printf("introduza o numero de refeicoes: ");
          scanf ("%d", &ref);
          mediaPaq = ref/horasTrab;
          printf("A media das refeicoes do paquete%d : %d refeicoes por hora", paquete, mediaPaq);
        } 
      if (paquete==4)
        {
          printf("introduza o numero de refeicoes: ");
          scanf ("%d", &ref);
          mediaPaq = ref/horasTrab;
          printf("A media das refeicoes do paquete%d : %d refeicoes por hora", paquete, mediaPaq);
        }
      if (paquete==5)
        {
          printf("introduza o numero de refeicoes: ");
          scanf ("%d", &ref);
          mediaPaq = ref/horasTrab;
          printf("A media das refeicoes do paquete%d : %d refeicoes por hora", paquete, mediaPaq);
        }

  }
  else printf("introduza o numero correcto do paquete de 1 a 5"); 
}

