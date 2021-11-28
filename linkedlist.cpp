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
    int print(struct Node* head){
        if(head==NULL){
            return -1;
        }
        return head->data;
    }
};
int main(){
    struct Node* head = new Node(1);
    cout << head->print(head) << endl;
}