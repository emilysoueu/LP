#include <stdio.h>
#include <stdlib.h>

typedef struct _lista_ {
   string nomes;
   struct _lista_* prox;
} Lista;

Lista* newNode(int data) {
   List* new = malloc(sizeof(List)); // Alocar o nó
   if(new == NULL) { // Se n alocou
      return new;
   }
   // Inserir o dado no nó
   new->data = data;
   new->next = NULL;
   return new;
}