#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;


   Stack(int s){
    arr=new int[s];
    size=s;
    top=-1;
   }

   void push(int data){
     if(top== size-1){
        cout<<"stack overflow"<<endl;
        return;

     }
     else{
        top++;
        arr[top]=data;
     }
   }

   int gettop(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    else{
        return arr[top];
    }
     
   }


   bool isempty(){
      if(top==-1){
        return true;
      }
      else return false;
   }

   void pop(){
     if(top==-1){
        cout<<"stack is empty "<<endl;
     }

     else{
        top--;
     }
   }

   int getsize(){
    return top+1;
   }
 
   void print(){
       cout<<"top : "<<top<<endl;
      cout<<"top element : "<<arr[top]<<endl;

      cout<<"stack: ";

    for(int i=0;i<getsize();i++){
         
        cout<<arr[i]<<" ";
    }
    cout<<endl <<endl;
   }


};
int main(){
 
 Stack st(5);


 st.push(10);
 st.print();

 st.push(20);
 st.print();

 st.push(30);
 st.print();

 st.push(40);
 st.print();
 
 st.push(50);
 st.print();

  
  
 cout<<"top element is : "<<st.gettop()<<endl;
 cout<<"size of stack is : "<<st.getsize()<<endl;
 

 if(st.isempty()){
    cout<<"stack is empty"<<endl;
 }
 else cout<<"stack not empty"<<endl;


return 0;
}