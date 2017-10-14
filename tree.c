#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void readFile(FILE* ptr, char* fileName){
  char tempStr[30];
  ptr = fopen(fileName, "r");
  if(ptr){
    while(fgets(tempStr, 30 , ptr)){
      puts(tempStr);
    }
  }
  else
    ptr = fopen(fileName , "w");
  fclose(ptr);
}

void printTree(Node* root){
  if(!root)
    return;
  
  if(root->left)
    printTree(root->left);
  printf("\n%s" , root->strValue);//This needs to be changed
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
