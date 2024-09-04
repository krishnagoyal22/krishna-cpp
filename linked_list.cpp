#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data=data;
        this->next=NULL;
    }
};
void insertathead(Node* &head,int d){
    Node* temp= new Node(d);
    temp -> next=head;
    head= temp;

}

void print(Node* &head){
    Node* temp= head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node*node1= new Node(10);
    Node*node2= new Node(20);
    node1->next=node2;
    Node*node3= new Node(30);
    node2->next=node3;
    Node*node4= new Node(40);
    node3->next=node4;
    cout<<node1->data <<"\n"<<node1->next <<"\n";
    cout<<node2->data<<"\n"<<node2->next <<"\n";
    cout<<node3->data <<"\n"<<node3->next <<"\n";
    cout<<node4->data <<"\n"<<node4->next <<"\n";
    return 0;
}