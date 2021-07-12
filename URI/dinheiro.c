#include <stdio.h>

int main()
{
    int dinheiro, exata100, resto100, exata50, resto50, exata20, resto20, exata10, resto10, exata5, resto5, exata2, resto2;
    scanf("%i", &dinheiro);
    
     exata100 = dinheiro / 100;
     resto100 = dinheiro % 100;
    
     exata50 = resto100 / 50;
     resto50 = resto100 % 50;
    
     exata20 = resto50 / 20;
     resto20 = resto50 % 20;
    
     exata10 = resto20 / 10;
     resto10 = resto20 % 10;
    
     exata5 = resto10 / 5;
     resto5 = resto10 % 5;
    
     exata2 = resto5 / 2;
     resto2 = resto5 % 2;
    
    printf("%i\n", dinheiro);
    printf("%i nota(s) de R$ 100,00\n", exata100);
    printf("%i nota(s) de R$ 50,00\n", exata50);
    printf("%i nota(s) de R$ 20,00\n", exata20);
    printf("%i nota(s) de R$ 10,00\n", exata10);
    printf("%i nota(s) de R$ 5,00\n", exata5);
    printf("%i nota(s) de R$ 2,00\n", exata2);
    printf("%i nota(s) de R$ 1,00\n", resto2);
    
    return 0;
}