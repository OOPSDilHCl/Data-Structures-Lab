#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node* head=NULL;
struct Node{
  char data;
  struct Node* next;
};
void push(char character){
  struct Node* newNode=malloc(sizeof(struct Node));
  newNode -> data=character;
  newNode -> next=head;
  head=newNode;
}
char peek(){
   return head -> data;
}
char pop(){
  if(head==NULL)
   return '\0';
  struct Node* temp=head;
  char character=temp -> data;
  head=head->next;
  free(temp);
  return character;
}
int isempty(){
  if(head==NULL) 
    return 1;
  return 0;
}
int main(){
  char ch[]={"{}[]{}(())"};
  int len=strlen(ch);
 // char c[len+1];
  for(int i=0;i<len;i++){
    if(ch[i]=='['||ch[i]=='{'||ch[i]=='('){
      push(ch[i]);
    }
    else{
      if(isempty()){
        printf("Not valid parentheses");
        return 0;
      }
      if((ch[i]==')'&&peek()=='(')||(ch[i]=='}'&&peek()=='{')||(ch[i]==']'&&peek()=='[')) pop();
      else{
        printf("Not valid parentheses");
        return 0;
      }
    }
  }
  if(isempty()){
    printf("Valid Parentheses");
  }
  else printf("Not valid parentheses");
  return 0;
}