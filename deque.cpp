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

class Deque{
    private:
        Node* head;
        Node* tail;
        int count;
    public:
        Deque(){
            head = tail = NULL;
            count = 0;
        }

        void push_back(int x){
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

        void push_front(int x){
            count++;
            if(head==NULL){
                head = new Node(x);
                tail = head;
            }
            else{
                Node* node = new Node(x);
                node->right = head;
                head->left = node;
                head = node;
            }
        }

        int size(){
            return count;
        }

        int front(){
            if(head!=NULL){
                return head->data;
            }
            return 0;
        }

        int back(){
            if(tail!=NULL){
                return tail->data;
            }
            return 0;
        }

        void pop_back(){
            if(tail!=NULL) return;
            Node* node;
            count--;
            node = tail;
            if(tail==head){
                head = tail = NULL;
            }
            else{
                tail = tail->left;
                tail->right = NULL; //
            }
            delete node;
        }

        void pop_front(){
            if(head==NULL) return;
            count--;
            Node* node;
            node = head;
            if(tail==head){
                head = tail = NULL;
            }
            else{
                head = head->right;
                head->left = NULL;
            }
            delete node;
        }

        void show(){
            Node* node = head;
            while(node!=NULL){
                cout << node->data << " ";
                node = node->right;
            }
            cout << endl;
        }

};


int main(){
    cout << sqrt(5) << endl;
    cout << sqrt(5.0/2) << endl;
}