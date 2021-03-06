#ifndef header_h
#define header_h
#include <stdio.h>

/* Node struct*/
typedef struct Node{
  struct Node *left;
  struct Node *right;
  char *strValue;
}Node;

char *string;

/*Interface*/

Node* insertNode(Node* root, char* str);
Node* deleteNode(Node* root, char* str);
void printTree(Node* root);
void readFile(FILE* ptr, char* fileName);

#endif
