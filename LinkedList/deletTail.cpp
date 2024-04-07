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

Node* deletetail(Node* head){

    if(head==NULL  || head->next==NULL) return NULL;

    Node* temp = head;

    while(temp->next->next != NULL){

        temp=temp->next;
    }

    delete(temp->next);

    temp->next=nullptr;

    return head;
}
int main(){
 
 vector<int>arr={2,3,4,5,6,7};

 Node* head = new Node(arr[0]);
 Node* mover=head;

 for(int i=1;i<arr.size();i++){
      Node* naya= new Node(arr[i]);
      mover->next=naya;
      mover=naya;
 }
 

 head = deletetail(head);

 print(head);

 
return 0;
}