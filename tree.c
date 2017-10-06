#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "header.h"


void printTree(){
  
}

void traverseTree(){

}

Node* createNode(char* str){
  Node* createdNode = malloc(sizeof(Node));

  while(*str != '\0'){
    createdNode->str = str;
    str++;
  }
  
  printf("\n%s" , createdNode->str);
}

void linkNode(){

}

void insertNode(Node* root, char* str){
  
}

void main(){
  char str[100];
  Node* root = 0;



  createNode();
  //insertNode(root , "ad");
  //insertNode(root, "sdfdsf");
  //insertNode(root, "sdfdsfdsfdsffdf");
}
