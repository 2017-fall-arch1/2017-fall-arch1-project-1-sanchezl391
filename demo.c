#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void main(){

  Node* root = 0;

  root = insertNode(root , "amy sand");
  root = insertNode(root,"luis sanchez");
  root = insertNode(root, "susana gutierrez");
  root = insertNode(root , "pewie");
  
  printTree(root);printf("\n");
  root=deleteNode(root,"amy sand");

  printTree(root);printf("\n");
  root=deleteNode(root , "luis sanchez");

  printTree(root);printf("\n");
  root=insertNode(root , "luis sanchez");
  
  FILE *pointer = fopen("new_file.txt" , "First Line");

}
