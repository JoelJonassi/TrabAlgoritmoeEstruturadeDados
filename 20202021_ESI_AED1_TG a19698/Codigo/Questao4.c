/**
 * @file Questao4.c
 * @author Joel Jonassi (joel14jonassi.jj@gmail.com)
 * @brief atribuir descontos a gatos mediante um preço
 * @version 0.1
 * @date 2020-11-10
 *  * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>

int gatoTamanho;

int main() {

printf("Insira o Comprimento do gato: ");
scanf ("%d", &gatoTamanho);

    if(gatoTamanho>=6 && gatoTamanho<25)
    {

        if (gatoTamanho>=6 && gatoTamanho<10)
            { 
            printf("Desconto de 10%%\nGenero: F");
            }
        if (gatoTamanho>=10 && gatoTamanho<15)
            {
            printf("Desconto de 9%%\nGenero: M");
            } 
        if (gatoTamanho>=15 && gatoTamanho<18)
            {
            printf("Desconto de 8%%\nGenero: F");
            }
        if (gatoTamanho>=18 && gatoTamanho<25)
            {
            printf("Desconto de 7%%\nGenero: M e F");
            }
    }
    else printf("Desconto de 5%%\nGenero: ");


}


   