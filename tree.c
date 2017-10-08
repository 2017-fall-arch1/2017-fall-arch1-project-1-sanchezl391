#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "header.h"

void printTree(Node* root){
  if(!root)
    return;
  
  if(root->left)
    printTree(root->left);
  printf("\n%s" , root->strValue);
  if(root->right)
    printTree(root->right);
 }

Node* findMin(Node* root){
  if(root->left)
    return findMin(root->left);
  return root;
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

  else if(strcmp(str, root->strValue) <= 0)
    root->left = insertNode(root->left , str);
  else
    root->right = insertNode(root->right, str);

  return root;
}

Node* deleteNode(Node* root, char* str){
  if(!root)
    return root;
  
  if(strcmp(str, root->strValue) < 0)
    root->left = deleteNode(root->left, str);
  else if(strcmp(str, root->strValue) > 0)
    root->right = deleteNode(root->right, str);
  else{
    if(!root->left && !root->right){
      free(root);
      root = 0;
    }
    else if(!root->left){
      Node* temp = root;
      root = root->right;
      free(temp);
    }
    else if(!root->right){
      Node* temp = root;
      root = root->right;
      free(temp);
    }
    else{
      Node* temp = findMin(root->right);
      root->strValue = temp->strValue;
      root->right = deleteNode(root->right , str);
    }
    
    return root;
  }        
}

void main(){
  // char str[100];
  Node* root = 0;

  root = insertNode(root , "amy sand");
  root = insertNode(root,"luis sanchez");
  root = insertNode(root, "susana gutierrez");
  root = insertNode(root , "pewie");
  
  printTree(root);printf("\n");
  root=deleteNode(root,"pewie");

  printTree(root);printf("\n");
  root=deleteNode(root , "luis sanchez");

  printTree(root);printf("\n");
  root=insertNode(root , "luis sanchez");
  
  printTree(root);printf("\n");
}
