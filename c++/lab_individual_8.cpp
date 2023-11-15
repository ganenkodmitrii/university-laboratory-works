//Ganenco Dmitri ind.lab. N8
#include <stdio.h>
int main(){
	char denumire1[7], denumire2[7], denumire3[7];
	char g1, g2, g3;
	char l1[8], l2[8], l3[8];
	int np1, np2, np3;
	// setarea datelor de la tastatura
	printf("1. Setati: denumirea, Grupa, Locul de trai, Numarul populatiei >>");
		scanf("%s %c %s %d", denumire1, &g1, &l1, &np1);
	printf("2. Setati: denumirea, Grupa, Locul de trai, Numarul populatiei >>");
		scanf("%s %c %s %d", denumire2, &g2, &l2, &np2);
	printf("3. Setati: denumirea, Grupa, Locul de trai, Numarul populatiei >>");
		scanf("%s %c %s %d", denumire3, &g3, &l3, &np3);
	// afisarea antetului de tabel          
	printf("---------------------------------------------------------\n");
	printf("|                Unele specii de antilope                |\n");
	printf("---------------------------------------------------------\n");
	printf("| Denumirea | Grupa | Locul de trai | Numarul populatiei |\n");
	printf("----------------------------------------------------------\n");
	// afisarea datelor
	printf("|  %7s  |   %c   |   %9s   |   %14d   |\n", denumire1, g1, l1, np1);
	printf("|  %7s  |   %c   |   %9s   |   %14d   |\n", denumire2, g2, l2, np2);
	printf("|  %7s  |   %c   |   %9s   |   %14d   |\n", denumire3, g3, l3, np3);
	// afisarea subsolului de tabel
	printf("----------------------------------------------------------\n");
	printf("| Grupe:         A - antilope originale;                 |\n");
	printf("|                B - antilope-vaci;                      |\n");
	printf("|                H - antilope-cal;                       |\n");
	printf("----------------------------------------------------------\n");
	return 0;
}
