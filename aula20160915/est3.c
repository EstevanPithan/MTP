#include<stdio.h>
#define QTDEMAX 1000

inline void pgetchar(char * character) {
  int c;
  *character = getchar();
  while((c = getchar()) != EOF && c != '\n');
}

inline void pgetint(int * num) {
  int c;
  scanf("%d",num);
  while((c = getchar()) != EOF && c != '\n');
}

#define RECEBE(c,p) \
    ({printf("Entre com nome do %d cadastro: ",c+1); gets(p.nome); \
     printf("Entre com a idade do %d cadastro: ",c+1);pgetint(&p.idade); \
     printf("Entre com o telefone do %d cadastro: ",c+1);pgetint(&p.telefone);})

#define MOSTRA(p) \
    ({printf("%s -> %d -> %d\n", p.nome, p.idade, p.telefone);})

struct cadastro{
        char nome[256];
        int idade;
        int telefone;
};

int main(){
    char aux;
    int i, qtde=0;
    struct cadastro cad[QTDEMAX];

    while (1){
        system("cls");
        printf("O que voce deseja fazer:\n\n\t1-Cadastrar\n\t2-Visualizar lista de contatos\n\t3-Sair\n\nQual a opcao: ");
        pgetchar(&aux);
        if(aux == '1'){
            RECEBE(qtde,cad[qtde]);
            qtde++;
        }
        if(aux == '2'){
            for (i=0; i<qtde;i++)
                MOSTRA(cad[i]);
        }
        if(aux == '3')
            break;
    }
    return 0;
}

