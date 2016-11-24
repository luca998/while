#include <stdio.h>

int main()
{
  float litri_utilizzati;
  int km_percorsi;
  float km_litro;
  float km_litro_tot;
  float somma_litri=0;
  int somma_km=0;
  int c=1;
  
  printf("Calcola i km per litro\n");
  
  
    while (c>0){
    printf("Inserisci i litri utilizzati (-1 per terminare):");
    scanf ("%f", &litri_utilizzati);
        
    if(litri_utilizzati == -1 || litri_utilizzati < -1 ){
       c--;
           }
    else {
    printf("Inserisci i kilometri percorsi:");
    scanf("%d", &km_percorsi);
    km_litro= km_percorsi/litri_utilizzati;
      printf("I km al litro sono:%f\n",km_litro); 
      somma_litri = somma_litri + litri_utilizzati;
      somma_km = somma_km + km_percorsi;
    }}
   
   if(c!=0){ 
 km_litro_tot=somma_km/somma_litri;
 printf("I km al litro complessivi sono:%f\n",km_litro_tot);
  
  printf("\n");
 
  }
  return 0;
}
