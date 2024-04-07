#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

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

void insert(Node* &head,int val){
    Node* add= new Node(val);

    Node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=add;
    add->next=NULL;
}


int main(){
 
 vector<int>arr={2,3,4,5,6};

 Node* head = new Node(arr[0]);
 Node* mover=head;

 for(int i=1;i<arr.size();i++){
      Node* naya= new Node(arr[i]);
      mover->next=naya;
      mover=naya;
 }
 
 insert(head,8);
 print(head);

 
return 0;
}