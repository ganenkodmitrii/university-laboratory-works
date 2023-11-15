#include <stdio.h>
int main(){
	char nume1[11], nume2[11], nume3[11];
	int h1, h2, h3;
	int s1, s2, s3;
	float sh1, sh2, sh3;
	// setarea datelor de la tastatura
	printf("1. Setati: Firma, Numarul proselor, Cifra de afaceri ($), Cota pietii (%) >>");
		scanf("%s %d %d %f", nume1, &h1, &s1, &sh1);
	printf("2. Setati: Firma, Numarul proselor, Cifra de afaceri ($), Cota pietii (%) >>");
		scanf("%s %d %d %f", nume2, &h2, &s2, &sh2);
	printf("3. Setati: Firma, Numarul proselor, Cifra de afaceri ($), Cota pietii (%) >>");
		scanf("%s %d %d %f", nume3, &h3, &s3, &sh3);
	// afisarea antetului de tabel
	printf("---------------------------------------------------------------------\n");
	printf("|                       Firme-producatori BDSC                       |\n");
	printf("---------------------------------------------------------------------\n");
	printf("|  Firma | Numarul proselor | Cifra de afaceri ($) | Cota pietii (%) |\n");
	printf("---------------------------------------------------------------------\n");
	// afisarea datelor
	printf("|  %10s  |   %d   |   %28d   |   %28f   |\n", nume1, h1, s1, sh1);
	printf("|  %10s  |   %d   |   %28d   |   %28f   |\n", nume2, h2, s2, sh2);
	printf("|  %10s  |   %d   |   %28d   |   %28f   |\n", nume3, h3, s3, sh3);
	// afisarea subsolului de tabel
	printf("---------------------------------------------------------------------\n");
	printf("|       Remarca: conform datelor Gartner Group pentru anul 1999     |\n");
	printf("---------------------------------------------------------------------\n");
	return 0;
}
