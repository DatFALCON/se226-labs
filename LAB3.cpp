#include <iostream>

using namespace std;
#define MAX 1000

class Node{
public:
    int data;
    Node *next;
    Node(int x,Node* n) {data=x; next=n;}

};


class Stack {
public:
    Node* top;
    int currentSize;

    Stack(){top=nullptr;currentSize=0;}

bool isEmpty(){
    if(top==nullptr)
        return true;
    else
        return false;
}

int size(){
return currentSize;
}

void push(int x){
if(size()==MAX){
    cout<<"The stack is overflow, please leave it alone.";

}
else{
if(top==nullptr)
    top= new Node(x,nullptr);
else{
    Node* node=new Node(x,top);
    top=node;
}
currentSize++;
}
}
void pop(){
    if(isEmpty()==true){
        cout<<"The stack is empty, you can't pop anything.";
    }
    else{
        Node* temp;

        temp=top;

        top=top->next;

        delete temp;
        currentSize--;
    }

}

int topx(){
    if(isEmpty()==true)
        cout<<"The stack is empty, you can't reach top.";
    else
        return top->data;
}

};




int main()
{
    Stack* stackx = new Stack();


  for(int i=1;i<10;i++){
    stackx->push(i*5);
  }
  cout<<"Test"<<endl;

  Node* temp;
 for(temp=stackx->top;temp!=nullptr;temp=temp->next){
    cout<<temp->data<<endl;
 }

 cout<<"The top of the stack is: " << stackx->topx();
    return 0;
}
