#include "../headers/blockchain.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

struct Header * createHeader(void) {
  struct Header *header = malloc(sizeof(struct Header));

  header->first = NULL;
  header->last = NULL;
  header->current = NULL;

  return header;
}

struct Node * createNode(char *string, int noncode) {
  struct Node *node = malloc(sizeof(struct Node));

  node->string = malloc(sizeof(string));
  strcpy(node->string, string);
  
  node->noncode = noncode;

  return node;
}
