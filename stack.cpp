#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Stack{
    public:
        struct Node* head;
        int count = 0;
        Stack(){
            head = NULL;
        }
        void push(int x){
            count++;
            if(head==NULL){
                head = new Node(x);
            }
            else{
                Node* node = new Node(x);
                node->next = head;
                head = node;
            }
        }
        int size(){
            return count;
        }
        void pop(){
            if(head!=NULL){
                count--;
                head = head->next;
            }
        }
        int top(){
            if(head!=NULL){
                return head->data;
            }
            return -1;
        }
};

int main(){
    Stack S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(10);
    while(S.size()){
        cout << S.top() << " ";
        S.pop();
    }
}