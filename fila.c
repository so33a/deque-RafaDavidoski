#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


link novoNo(int item, link next) {
  link t = malloc(sizeof *t);
  if (t == NULL) {
    printf ("Erro no malloc \n");
    exit(-1);
  }
  t->item = item;
  t->next = next;
  return t;
}

FILA novaFila() {
  FILA f = malloc(sizeof *f);
  f->maisNovo = f->maisAntigo = NULL;
  return f;
}

void inseririnicio(FILA f, int e)
  if(f->noDireita == NULL) {
    f
  }

void inserirfinal(FILA f, int e) {
  if(f->noEsquerda == NULL) {
    f->noEsquerda = f->noDireita = novoNo(e, NULL);
  } else {
    f->noDireita->next = novoNo(e, NULL);
    f->noDireita = f->noDireita->next;
  }
}

int removerfinal(FILA f){
  int x;
  link t;
  if(filaVazia(f)){
    printf ("Erro, a fila esta vazia\n");
    return 0;
  }
  
  x = f->noEsquerda->item;
  t = f->noEsquerda;
  f->noEsquerda = f->noEsquerda->next;
 
  if(f->noEsquerda == NULL)
    f->noDireita = NULL;

  free(t);
  return x;
}
int filaVazia(FILA f) {
  return ((f->maisNovo == NULL) || (f->maisAntigo == NULL));
}
void imprimirFila(FILA f) {
  link t;
  for(t = f->maisAntigo; t != NULL; t = t->next) 
    printf ("%d ", t->item);
  printf ("\n");
}
void destroiFila(FILA f) {
  while (!filaVazia(f))
    remover(f);
  free(f);
}

