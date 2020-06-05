//estudar melhor essa logica pq se eu estivesse em uma prova teria dancado, jamaaaaais q daria conta de fazer isso
//so resolvi sozinha a parte das horas terem 3600 sgundos :(


#include "stdio.h"

int main()
{
    char *caractere;
    int segundos;
    int minutos=0;
    int horas=0;

    printf("Insira a quantidade de segundos a serem convertidos: ");
    scanf("%d", &segundos);
    scanf("%c", &caractere); //limpa o buffer

    //3600 e a quantidade de segundos que 1 hora possui
    while (segundos >3600)
    {
        segundos-=3600;
        horas++;
    }

    //calcula os minutos dentro dos segundos que sobram depois de extrair as horas
    while (segundos >60)
    {
        segundos-=60;
        minutos++;
    }

    printf("%d horas, %dminutos, e %dsegundos\n", horas, minutos, segundos );
    scanf("%c", &caractere);
    return 0;
}
