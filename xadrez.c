#include <stdio.h>

void torre(){
    for (int i = 1; i<=5; i++) {
        printf("Direita\n", i);
    }
    printf("\n");
}

void bispo(){
    int j = 0;
    for (int i = 0; i<5; i++){
        while(j<5){
            printf("Direita\n");
            j++;
            continue;
        }
    printf("Cima\n");
   }
   printf("\n");
}

void rainha(){
    for (int i = 1; i<=8; i++) {
        printf("Esquerda\n", i);
        }
        printf("\n");
}

void cavalo(){
    int j = 0;
    for (int i = 0; i<2; i++){
        while(j<1){
            printf("Direita\n");
            j++;
            continue;
        }
    printf("Cima\n");
   }
}

int main() {
    // int i = 1;
    int j = 0;
//Para a Torre
    torre();
// // Para o Bispo
    bispo();
// Para a Rainha
    rainha();

// Para o Cavalo
   cavalo();
    

    return 0;

}