#include <stdio.h>

int main(){
	int diviseur , entier , sommeDesDiviseurs= 0;

	
	printf("Veuillez saisir un entier: ");
	scanf("%d", &entier);

	for(diviseur = 1; diviseur <= entier/2; diviseur++){
		if (entier%diviseur == 0){
			sommeDesDiviseurs += diviseur;
			printf("%d\n", sommeDesDiviseurs);
		}
	
	}
	if(entier == sommeDesDiviseurs){
			printf("Le nombre %d est parfait\n", entier);
		}
	else{
			printf("Le nombre %d n'est pas parfait\n", entier);
		}


	return 0;



}