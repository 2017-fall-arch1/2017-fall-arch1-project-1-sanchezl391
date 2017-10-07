#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "header.h"

void printTree(Node* root){
  int i = 0;
  if(!root) printf("No values in tree");//Not sure
  
  if(root->left)
    return printTree(root->left);  
  else if(!root->right){
    printf("\n %s" , root->strValue);
    i++;
    }
  
  if(root->right)
    return printTree(root->right);
  else if(i)
    printf("\n %s" , root->strValue);
   
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
 

Node* insertNode(Node* root, char* str){
  if(!root)
    root = createNode(str);
  else
    (root->strValue < str)?
      insertNode(root->right, str):insertNode(root->left, str); 
  return root;
}

void main(){
  // char str[100];
  Node* root = 0;

  //  printf(root->strValue);
  root = insertNode(root , "ad");
  printf(root->strValue);
  root = insertNode(root,"sdfdsf");
  printf(root->strValue);
  root = insertNode(root, "sdfdsfdsfdsffdf");
  printf(root->strValue);

  printf(root->left->strValue);
}
