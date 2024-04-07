#include<bits/stdc++.h>
using namespace std;
 class Node
  {
  public:
     int data;
     Node *next, *prev;
     Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
   Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
  };

Node* constructDLL(vector<int>& arr) {
    // Write your code here

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i=1;i<arr.size();i++){

        Node* newnode = new Node(arr[i]);

         newnode->prev=temp;
         temp->next=newnode;

         temp=temp->next;
    }

    return head;
}

void print(Node* head){
    Node* temp = head;

    while(temp !=NULL){

        cout<<temp->data<<" ";

        temp=temp->next;
    }
}

int main(){
 vector<int>arr = {2,4,5,6,7,9};

  Node* head = constructDLL(arr);

  print(head);
 
 
return 0;
}