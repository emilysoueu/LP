#include <stdio.h>
#include <stdlib.h>

typedef struct _list_ {
   int data;
   struct _list_* next;
} List;

List* newNode(int data) {
   List* new = malloc(sizeof(List)); // Alocar o nó
   if(new == NULL) { // Se n alocou
      return new;
   }
   // Inserir o dado no nó
   new->data = data;
   new->next = NULL;
   return new;
}

void insertNode(List** head, int data) {
   // Alocar o nó
   List *new = newNode(data);
   if (new == NULL) return; // Se n alocou, n tem pq continuar
   // Se a lista ainda n foi criada, entao o novo no vai ser a lista
   if(*head == NULL) {
      *head = new;
   } else {
      /* Aqui precisa criar uma nova variavel para apontar para a cabeca
       * Pq se usar a variavel head e mover ela, entao as referencias vao ser
       * perdidas */
      List *tmp = *head;
      // Iterar ate um no que n tem proximo
      while(tmp->next != NULL){
         tmp = tmp->next;
      }
      // Fazer o novo no ser o proximo do no que n tinha proximo
      tmp->next = new;
   }
}

void printList(List* head) {
   // Se a lista ainda n tiver sido criada
   if(head == NULL) {
      printf("List is empty\n");
      return;
   }
   while(head != NULL){
      printf("%d ", head->data);
      head = head->next;
   }
}

void searchNode(List* head, int data) {
}

List* removeNode(List** head, int data) {
}

int main() {
   List *head = NULL;

   int option = 0;
   int number;
   while(option != 9) {
      printf("\n1 - Insert\n2 - Search\n3 - Remove\n4 - Print\n9 - Exit\nOption:");
      scanf("%d", &option);
      switch(option) {
         case 1:
            printf("Number to insert:");
            scanf("%d", &number);
            insertNode(&head, number);
            break;
         case 2:
            break;
         case 4:
            printList(head);
            break;
      }
   }

   // Remover a lista toda da memoria
   List* aux;
   while (head != NULL) {
      aux = head;
      head = head->next;
      free(aux);
   }
}
