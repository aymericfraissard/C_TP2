#include <stdio.h>


// fonction empile 
int empile(int tab[], int& valeur, int& taille, int& verif) {
	if (taille >= 20) {
		return false;
	}else if (verif == 0) {
		int c; // vidé buffer car bug
		c = getchar();
		while (c != EOF && c != '\n')
		{
			c = getchar();
		}
		verif = 1;
		return false;
	}
	tab[taille] = valeur;
	taille++;
	return true;
}
// fin fonction empile




// fonction depile
int depile(int tab[], int valeur, int& taille, int& oldValeur) {
	if (taille <= 0) {
		return false;
	}
	oldValeur = tab[taille - 1];
	tab = tab - 1;
	taille--;
	return true;
}
// fin fonction depile 



//fonction affiche
void affiche(int tab[], int taille) {
	if (taille <= 0) {
		printf("le tableau est vide\n");
	} else {
		for (int i = 0;i < taille;i++) {
			printf("\n%d\n", tab[taille - i - 1]);
		}
	}
}
//fin fonction affiche





int main()
{
	int oldValeur;
	int tab[20];
	int taille = 0;
	int valeur = 0;
	int verif = 1;



	for (int i = 0; i < 25; i++) {
		verif = verif = scanf_s("%d", &valeur); valeur;
		if (empile(tab, valeur, taille, verif)) {
			printf("le nombre a bien ete empile\n");
		} else {
			printf("le nombre n'a pas ete empile car le tableau est plein ou la valeur saisie n'est pas un nombre\n");
		}
	}


	affiche(tab, taille);
	for (int i = 0; i < 25; i++) {
		if (depile(tab, valeur, taille, oldValeur)) {
			printf("le nombre a bien ete depile\n");
		} else {
			printf("le tableau est vide on ne peut pas le depile\n");
		}
	}



	affiche(tab, taille);
	for (int i = 0; i < 6; i++) {
		verif = scanf_s("%d", &valeur); valeur;
		if (empile(tab, valeur, taille, verif)) {
			printf("le nombre a bien ete empile\n");
		} else {
			printf("le nombre n'a pas ete empile car le tableau est plein ou la valeur saisie n'est pas un nombre\n");
		}
		if (depile(tab, valeur, taille, oldValeur)) {
			printf("le nombre a bien ete depile\n");
		} else {
			printf("le tableau est vide on ne peut pas le depile\n");
		}
	}
	affiche(tab, taille);
}