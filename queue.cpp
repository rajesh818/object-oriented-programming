#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
    Node(int x){
        data = x;
        right = left = NULL;
    }
};

class Queue{
    private:
        Node* head;
        Node* tail;
        int count;
    public:
        Queue(){
            head = tail = NULL;
            count = 0;
        }
        void push(int x){
            count++;
            if(head==NULL){
                head = new Node(x);
                tail = head;
            }
            else{
                Node* node = new Node(x);
                node->left = tail;
                tail->right = node;
                tail = node;
            }
        }
        int size(){
            return count;
        }
        int front(){
            if(head!=NULL){
                return head->data;
            }
            return -1;
        }
        void pop(){
            if(head!=NULL){
                count--;
                head = head->right;
            }
        }
};

int main(){
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    while(Q.size()){
        cout << Q.front() << " ";
        Q.pop();
    }
}