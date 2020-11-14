/**
 * @file Questao2.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-10
 * 
 * @copyright Copyright (c) 2020
 * 
 */
 #include<stdio.h>

 int main(){
     int ano;
     printf("Insira o ano: ");
     scanf("%d", &ano);
     if (ano % 4 && ano % 100){
        
            printf("%d ano bissexto", ano);        
        }
        if (ano % 4 && ano % 400){
        printf("%d ano nao bissexto", ano);
    }
    
    
     
 }