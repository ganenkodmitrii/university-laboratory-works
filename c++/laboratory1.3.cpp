//Ganenco Dmitri Lab 1.3
#include <conio.h>
#include <stdio.h>

int main(){
    char fisrtName[10],lastName[10];
    printf("Taps fisrt name ");
    gets(fisrtName);
	printf("Taps last name ");
	gets(lastName);	
    putchar(fisrtName[0]);putchar('.');putchar('\n');putchar(lastName[0]);putchar('.');putchar('\n');
	puts("To continue press any key"); 
	getch();
    return 0;
}
