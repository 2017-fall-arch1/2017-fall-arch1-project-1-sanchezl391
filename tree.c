#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "header.h"

void printTree(){
  
}

void traverseTree(){

}

Node* createNode(char* str){
  Node* createdNode = malloc(sizeof(Node));

  createdNode->strValue = str;
  createdNode->right = 0;
  createdNode->left = 0;

  return createdNode;
}
 

void linkNode(){

}

void insertNode(Node* root, char* str){
  if(root == 0)
    root = createNode(str);
  //else if(root->strValue < str)
}

void main(){
  // char str[100];
  Node* root = 0;
  
  insertNode(root , "ad");
  insertNode(root, "sdfdsf");
  insertNode(root, "sdfdsfdsfdsffdf");
}
