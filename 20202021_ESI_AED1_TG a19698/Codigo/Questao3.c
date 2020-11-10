/**
 * @file Questão 3.c
 * @author Joel Jonassi (a19698@alunos.ipca.pt)
 * @brief Calcula a media de 4 diciplinas
 * @version 0.1
 * @date 2020-11-02
 * @copyright Copyright (c) 2020
 */
#include <stdio.h> 
#include <stdlib.h>



const float percentagemNota = 4.0F;
float notaMatematica, notaIngles, notaGeografia, notaPortugues, media;

int main() {
  
 printf("Insira a nota de Matematica: ");
 scanf ("%f", &notaMatematica);
 printf("Insira a notaIngles: "); 
 scanf ("%f", &notaIngles);
 printf("Insira a notaGeografia: ");
 scanf ("%f", &notaGeografia);
 printf("Insira a notaPortugues: "); 
 scanf ("%f", &notaPortugues);
        
    media = (notaMatematica+notaIngles+notaGeografia+notaPortugues)/percentagemNota;

        if (media>=0 && media<=20)
        {
            if (media>=0 && media<9.50)
            {
            printf("Reprovado ");
            }   
            else
            {
                printf("Aprovado ");
             }    
        }      
        else
        {
        printf("introduza valores de 0 a 20");
        return 0;                         
        }
            
    printf("com media: %f", media);
    return 0;
}