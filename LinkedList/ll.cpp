#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    int data;
    Node *next;

    Node(){
        this->data=0;
        this->next=NULL;

    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

void insert(Node* &head,Node* &add){
    add->next=head;
    head=add;

}

void inserttail(Node* &tail , int data){
    Node *temp = tail;

    Node* newnode = new Node(data);

    while(temp!=NULL){
        temp=temp->next;
    }

    temp->next=newnode;

    newnode->next=NULL;


}

int main(){
 
   Node* first = new Node(10);
   Node* second = new Node(20);
   Node* third = new Node(30);

   first->next=second;
   second->next=third;

   Node* head = first;
   Node* tail = NULL;

  // printing before insert
  cout<<"printing before insert at head "<<endl;
  print(head);

  // create   a node to insert
  Node* add = new Node(5);

 // inserting the new node
  insert(head,add);

  //printing after insert
  cout<<"printing after insert at head "<<endl;
  print(head);

 //insert the new node at tail
 inserttail(head,77);

 //printing after add at tail
 cout<<"printing before insert at tail "<<endl;
 print(head);




 
return 0;
}