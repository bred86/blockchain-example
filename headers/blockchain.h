struct Node {
  char *string;
  int noncode;
  struct Node *previous;
};

struct Header {
  struct Node *first;
  struct Node *last;
  struct Node *current; 
};

struct Header * createHeader(void);

struct Node * createNode(char *string, int noncode);
