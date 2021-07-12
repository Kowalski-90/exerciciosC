#include <stdio.h>
 
int main() 
{
    int tempo, horas, minutos, segundos, resto;
    scanf("%i", &tempo);

    horas = tempo / 3600;
    resto = tempo % 3600;
    minutos = resto / 60 ;
    segundos = resto % 60;
    
    printf("%i:%i:%i\n", horas, minutos, segundos);
 
    return 0;
}

