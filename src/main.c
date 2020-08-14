#include "../headers/blockchain.h"
#include <stdio.h>
#include <stddef.h>

int main (int argc, char *argv[]) {
  struct Header *header;
  struct Node *node;

  header = createHeader();
  node = createNode("test", 1);

  printf("%d\n", node->noncode);

  return 0;
}
