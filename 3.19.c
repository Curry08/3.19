#include <stdio.h>

int main(){
    float l1,l2,l3;

    printf("Inserisci il primo lato: ");
    scanf("%f",&l1);
    printf("Inserisci il secondo lato: ");
    scanf("%f",&l2);
    printf("Inserisci il terzo lato: ");
    scanf("%f",&l3);

    if(l1==l2 && l2==l3){
        printf("Il triangolo è equilatero");
    }
    else if(l1==l2 || l2==l3 || l3==l1){
        printf("Il triangolo è isoscele");
    }
    else{
       printf("Il triangolo è scaleno");;
    }
    return 0;
}
