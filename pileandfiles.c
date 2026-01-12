#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
/*

 //LIFO   LAST in FIRST out 
 //pile
typedef struct My_pile{

 int sommet;
 int taille;
 int pile[30];

}My_pile;
int est_vide(My_pile p){

  return p.sommet == 0;

}
int est_pleine(My_pile p){


    return p.sommet==p.taille;
}
void empiler (My_pile*p,int v){
    p->pile[p->sommet++]=v;
}

int depiler (My_pile *p ){
  return p->pile[--p->sommet];


}
int main(){
  My_pile p1;
  int n;
  printf("Entrer la taille max de cette pile : ");
  scanf("%d",&p1.taille);
  p1.sommet=0;
  sleep(1);
  while (!est_pleine(p1))
  {
    for (int i = 0; i <p1.taille; i++)
    {
        printf ("Entrer l'elemnt %d:",i+1);
        scanf("%d",&n);
        empiler(&p1,n);
    }

  }while (!est_vide(p1))
  {
    printf ("%d\n",depiler(&p1));
  }
  
  


return 0;

} */





//FIFO   FIRST in FIRST out

//file


typedef struct my_file{
    int taille;
    int tete;
    int queue;
    int file[20];

}my_file;


int est_vide(my_file f ){
   return f.queue==f.tete;
}

int est_pleine(my_file f){
    return f.queue==f.taille;
}

void  enfiler(my_file* f,int v){
    f->file[f->queue++]=v;

}
int defiler(my_file*f){
    return f->file[f->tete++];
}

int main(){

    my_file F1;
    int n;
    F1.tete=0;
    F1.queue=0;
    printf ("Entrer la taille max de cette file:");
    scanf("%d",&F1.taille);
    sleep(1);
  
    while (!est_pleine(F1))
    {
        for (int i = 0; i < F1.taille; i++)
        {
          printf ("Entrer l'elemnt %d:",i+1);
          scanf("%d",&n);
          enfiler(&F1,n);
        }
 
    }
    
    while (!est_vide(F1))
    { 
      
        printf("%d\n",defiler(&F1));
    }
    



    return 0;
}