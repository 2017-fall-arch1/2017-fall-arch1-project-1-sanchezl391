#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void main(){
  
  FILE *pointer;
  readFile(pointer, "directory.txt");  
  
  printf("\nRunning Demo..");
  printf("Creating Root Node..");
  Node* root = 0;
  
  root = insertNode(root, "jelly bean");
  root = insertNode(root , "amy sand");
  root = insertNode(root,"luis sanchez");
  root = insertNode(root, "susana gutierrez");
  root = insertNode(root , "pewie");
  root = insertNode(root, "abcd efghi");

  printf("\n%s\n" , root->right->strValue);
  
  printTree(root);
  printf("\n");

  root=deleteNode(root,"amy sand");
  printTree(root);printf("\n");
  
  root=insertNode(root , "luis sanchez");

}
