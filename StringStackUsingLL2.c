#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node* head=NULL;
struct Node{
  char data;
  struct Node *next;
};
struct Node* push(char character){
  struct Node* newNode=malloc(sizeof(struct Node));
  newNode -> data=character;
  newNode -> next=head;
  head=newNode;
  return head;
}
void peek(){
  printf("%c \n",head -> data);
}
char pop(){
  if(head == NULL){
    return '\0';
  }
  struct Node* temp=head;
  char character=temp -> data;
  head=head -> next;
  free(temp);
  return character;
}
int main(){
  char ch[]={"NAMAN AMAk GLBBLG"};
  int len=strlen(ch);
  char c[len+1];
  for(int i=0;i<len;i++)
   push(ch[i]);
  for(int i=0;i<len;i++)
    c[i]=pop();
  c[len]='\0';
  for(int i=0;i<len;i++)
     printf("%c",c[i]);
}