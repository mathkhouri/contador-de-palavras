/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include<stdio.h>

int main(){

    int palavras = 0, i = 0, j;
    char frase[500], letra = 'a';

    scanf("%[^\n]s", frase);

    while(letra != '\0'){
        letra = frase[i];

        if((65 <= letra && letra <= 90) || (97 <= letra && letra <= 122)){
            while((65 <= letra && letra <= 90) || (97 <= letra && letra <= 122)){
                i++;
                letra = frase[i];
            }
            palavras++;
        }
        if(48 <= letra && letra <= 57){
            while(48 <= letra && letra <= 57){
                i++;
                letra = frase[i];
            }
            i++;
            letra = frase[i];
            while(48 <= letra && letra <= 57){
                i++;
                letra = frase[i];
            }
            palavras++;
        }
        i++;
    }

    printf("%d", palavras);

    return 0;
}
