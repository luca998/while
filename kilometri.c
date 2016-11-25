#include <stdio.h>

int main()
{
  float litri_utilizzati;
  int km_percorsi;
  float km_litro;
  float km_litro_tot;
  float somma_litri;
  int somma_km;

  
  printf("Calcola i km per litro\n");
     printf("Inserisci i litri utilizzati (-1 per terminare):");
     scanf ("%f", &litri_utilizzati);
    
    while (litri_utilizzati != -1){
        
      printf("Inserisci i kilometri percorsi:");
      scanf("%d", &km_percorsi);
      km_litro= km_percorsi/litri_utilizzati;
      printf("I km al litro sono:%f\n",km_litro); 
      printf("Inserisci i litri utilizzati (-1 per terminare):");
      scanf ("%f", &litri_utilizzati);
     
      somma_litri = somma_litri + (litri_utilizzati - (-1));
      somma_km = somma_km + km_percorsi;
     }
   
 km_litro_tot=somma_km/somma_litri;
 printf("I km al litro complessivi sono:%f\n",km_litro_tot);
  
  printf("\n");
 
  
  return 0;
}
