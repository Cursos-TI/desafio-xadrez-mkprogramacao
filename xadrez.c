#include <stdio.h>

// usando o void para deixar o codigo mais limpo e mais facil de entender
void moverTorre(int casas){

    if(casas > 0){
        printf("direita\n");
        moverTorre(casas - 1);
    }
}
void moverBispo(int casas){

    if (casas > 0){
        printf("cima direita\n");
        moverBispo(casas - 1);
    }
}
void moverRainha(int casas){

    if (casas > 0){
        printf("esquerda\n");
        moverRainha(casas - 1);
    }
}

int main(){
    // variaveis para o cavalo e opção
    int cavalo, eml;
    int opcao;

    // menu do jogo com as opções para escolher
    printf("   JOGO DE XADREZ   \n");
    printf("1. mover torre\n");
    printf("2. mover bispo\n");
    printf("3. mover rainha\n");
    printf("4. mover cavalo\n");
    printf("5. sair do jogo\n");
    printf("escolha uma opção: ");
    scanf("%d", &opcao);

    // switch com as peças 
    switch (opcao){
    case 1:
        printf("\nmovendo torre:\n");
        moverTorre(5);
        break;
    case 2:
        printf("\nmovendo bispo:\n");
        moverBispo(5);
        break;
    case 3:
        printf("\nmovendo rainha:\n");
        moverRainha(8);
        break;
    case 4:
        printf("\nmovendo cavalo:\n");
        for (cavalo = 2; cavalo == 2; cavalo++){
        for (eml = 1; eml <= 2; eml++){
        printf("baixo\n");
        }
        printf("esquerda\n");
        }
        break;
    case 5:
        printf("saindo do jogo...\n");
        break;
    default:
        printf("opção invalida\n");
        break;
    }


    return 0;
}