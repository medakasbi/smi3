#include <stdio.h>
int main(){

	int nbrCopies;
	float prixTot;

	
	do{
		printf("Veuillez entrer le nombres des copies\n");
		scanf("%d", &nbrCopies);
	}while(nbrCopies <=0);



	if (nbrCopies <= 10)
	{
		prixTot = 0.5 * nbrCopies;
	}
	else if(nbrCopies <=30)
	{
		prixTot = .5 * 10 + (nbrCopies - 10)*.4;
	}
	else
	{
		prixTot= .5 * 10 + .4 * 20 + (nbrCopies * .25);
		}

	printf("Le prix total est de  %.2f dirhams \n", prixTot);



}