int main(){
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;
    
    printf("qual seu nome?\n");
    scanf("%s",nome);

    printf("\nshow de bola, %s...Qual sua idade?",nome);
    scanf("%d",&idade);

    printf("Muito bom! o %s tem %d anos",nome,idade);



    return 0;
}