#include <stdio.h>
#include <ctype.h>


#define QUAL_TIPO(vt) vt.tipo
#define RECEBE_INTEIRO(vt) ({ 			\
      scanf("%d", &vt.dado.i);			\
      vt.tipo = INTEGER; 			\
    })
#define RECEBE_REAL(vt) ({ 			\
      scanf("%f", &vt.dado.f);			\
      vt.tipo = FLOAT;				\
    })
#define MOSTRA_DADO(vt) ({ 			\
      switch(vt.tipo) { 			\
      case INTEGER:				\
	printf("A representacao de um int por um float e: %g\n", vt.dado.i);		\
	break;					\
      case FLOAT:				\
	printf("A representacao de um float por um inteiro e: %d\n", vt.dado.f);		\
	break;					\
      default:					\
	printf("Vazio.\n");			\
      } })

typedef enum {
  INTEGER = 1,
  FLOAT = 2
} tipos_aceitos;

typedef struct {
  tipos_aceitos tipo;
  union {
    int i;
    float f;
  } dado;
} VAR_t;

inline void pgetchar(char * character) {
  // Getchar "protegido", recebe apenas um
  // caractere e descarta o resto do STDIN
  int c;
  *character = getchar();
  while((c = getchar()) != EOF && c != '\n');
}

int main() {
  char opcao;
  VAR_t meuDado;
  do {
    printf("%s %s", "Qual o tipo de dado a armazenar?",
	   "(I)nteiro, (F)loat: ");
    pgetchar(&opcao);
    opcao = toupper(opcao);
  } while(opcao != 'I' && opcao != 'F');
  printf("Entre com o dado ");
  switch(opcao) {
  case 'I':
    printf("inteiro: ");
    RECEBE_INTEIRO(meuDado);
    break;
  case 'F':
    printf("real: ");
    RECEBE_REAL(meuDado);
  }

  MOSTRA_DADO(meuDado);
  return 0;
}
