#include <iostream>
using namespace std;

//git init 
//git add c030324143stack
//git commit -m "first commit"
//git branch -M main
//git remote add origin https://github.com/AbdullahAlamri/c030324143
//git push -u origin main


struct node {
    int data;
    node* next;
};

class stack {
private:
    node* top;
    int count;
    static const int MAX_SIZE = 5;

public :
    stack() : top(nullptr), count(0) {};
    

    ~stack() {
        while (!isEmpty()) {
            pop();
    }
}
  
bool isEmpty() const {
    return top == nullptr;
}

bool isFull() const {
    return count >= MAX_SIZE;
} 
bool push(int value) {
    if (isFull()) {
        cout << "STACK KOSONG! Pop gagal." << endl;
        return false;
    }
    node* newNode = new node();
    newNode->next = top;
    top = newNode;
    count++;
}



}
   

