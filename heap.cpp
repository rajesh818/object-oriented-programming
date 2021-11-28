#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class heap{
    private:
        vector<int> V;
    public:
        int left(int x){
            return (2*x) + 1;
        }
        int right(int x){
            return (2*x) + 2;
        }
        int parent(int x){
            return (x-1)/2;
        }

        int top(){
            return V[0];
        }
        int size(){
            return V.size();
        }
        void heapify(int x){
            int small = x;
            if(left(x)<V.size()&&V[left(x)]<V[small]){
                small = left(x);
            }
            if(right(x)<V.size()&&V[right(x)]<V[small]){
                small = right(x);
            }
            if(small!=x){
                swap(V[x],V[small]);
                heapify(small);
            }
        }
        void show(){
            for(auto x:V){
                cout << x << " ";
            }
            cout << endl;
        }
        void pop(){
            if(V.size()==1){
                V.pop_back();
            }
            else{
                swap(V[0],V[V.size()-1]);
                V.pop_back();
                heapify(0);
            }
        }


        void push(int x){
            V.push_back(x);
            int i = V.size() - 1;
            while(i!=0&&V[parent(i)]>V[i]){
                swap(V[parent(i)],V[i]);
                i = parent(i);
            }
        }
};

int main(){
    heap H;
    int N = 10;
    while(N--){
        H.push(rand() % 100);
    }
    while(H.size()!=0){
        cout << H.top() << " ";
        H.pop();
    }
}