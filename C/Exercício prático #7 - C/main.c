int main(){
    // pedra, papel ou tesoura.
    char player[256];
    char player2[256];

    printf("player 1, sua vez...");
    scanf("%s",&player);

    printf("\nplayer 2, sua vez...");
    scanf("%s",&player2);

    printf("\no player 1 jogou %s e o player2 jogou %s",player,player2);

    prinf("\nAguarde, estamos calculando o resultado...\n");

    if(strcmp(player,"papel") == 0){
        if(strcmp(player2,"papel") == 0){
            printf("empate");
        }else if(strcmp(player2,"pedra") == 0){
            printf("player 2 pganhou, por que papel embrulha a pedra!");
        }else if(strcmp(player2,"tesoura") == 0){
            printf("player 2 perdeu, por que tesoura corta papel!");
        }else{
            printf("o player 2 jogou uma informaçao invalida!");
        }
    }else if(strcmp(player,"pedra") == 0){
       if(strcmp(player2,"papel") == 0){
            printf("player 2 perdeu, por que papel embrulha a pedra!");
        }else if(strcmp(player2,"pedra") == 0){
            printf("empate!");
        }else if(strcmp(player2,"tesoura") == 0){
            printf("player 2 ganhou, por que pedra quebra a tesoura!");
        }else{
            printf("o player 2 jogou uma informaçao invalida!");
        }
    }else if(strcmp(player,"tesoura") == 0){
        if(strcmp(player2,"papel") == 0){
            printf("player 2 ganhou, por que tesoura corta papel!");
        }else if(strcmp(player2,"pedra") == 0){
            printf("player 2 perdeu, por que pedra quebra a tesoura!");
        }else if(strcmp(player2,"tesoura") == 0){
            printf("empate!");
        }else{
            printf("o player 2 jogou uma informaçao invalida!");
        }
    }else{
        printf("Voce jogou uma informaçao invalida!");
    }
    

    return 0;
}