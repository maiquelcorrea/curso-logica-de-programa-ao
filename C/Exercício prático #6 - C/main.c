int main(){
    char nome[216];
    int idade;

    printf("ola! qual seu nome?");
    scanf("%s",&nome);

    printf("Qual sua idade?\n");
    sacnf("%d",&idade);

    prinf("nome: %s\nidade: %d\n",nome,idade);

    printf("\nAguarde enquanto lemos seus dados...");

    printf("a primeira letra do seu nome é: %c",nome[0]);

    if (idade >= 18)
    {
        printf("\nVoce e adulto!");
    }else if(idade >= 12){
        printf("\nVoce e adolescente!");
    }else{
        printf("\nVoce e criança!");
    }
    
    return 0;
}