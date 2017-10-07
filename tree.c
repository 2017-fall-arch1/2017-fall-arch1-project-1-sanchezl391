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

  printf("\nNode Created. Value: %s" , createdNode->strValue); 
  return createdNode;
}
 

Node* insertNode(Node* root, char* str){
  if(root == 0){
    printf("\nNo child nodes. Attempting to create Node");
    root = createNode(str);    
  }
  else if(strcmp(str, root->strValue) > 0){
    printf("\nCreating right child for %s" , root->strValue);
    root->right = insertNode(root->right , str);
  }
  else{
    printf("\nCreating left child for %s" ,root->strValue);
    root->left = insertNode(root->left, str);
  }
 
  printf("\n" ); 
  return root;
}

void main(){
  // char str[100];
  Node* root = 0;

  root = insertNode(root , "ad");
  root = insertNode(root,"sdfdsf");
  root = insertNode(root, "sdfdsfdsfdsffdf");
  root = insertNode(root , "a");
  
  printf("\nRoot: %s" , root->strValue);
  printf("\nRoot's left child: %s" , root->left->strValue);
  printf("\nRoot's right child: %s" , root->right->strValue);
  printf("\nRoot's right child->right child: %s" , root->right->right->strValue);
  
}
