#include<stdio.h>
#include<stdlib.h>
struct Node{
  char data;
  struct Node *next;
};
struct Node* head=NULL;
void insert_beg(char character){
  struct Node* newNode=malloc(sizeof(struct Node));
  newNode -> data=character;
  newNode -> next=head;
  head=newNode;
}
void delete_beg(){
  struct Node* temp=head;
  head=head -> next;
  free(temp);
}
int main(){
  char str[]="ba";
  for(int i=0;i<strlen(str);i++){
    insert_beg(str[i]);
  }
  for(int i=0;i<strlen(str);i++){
    if(str[i]!=head -> data){
      printf("Not a palindrome!");
      return 0;
    }
    delete_beg();
  }
  printf("It is a palindrome");
}