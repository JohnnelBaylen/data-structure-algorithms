#include <iostream>
#define COUNT 5
using namespace std;

char stck [COUNT];
int top = - 1;

// Checks if Stack is Empty
bool isEmpty(){

    return top == -1; 

    // if (top == -1){
    //     return true;
    // } else {
    //     return false;
    // }
}

// Checks if Stack is Full
bool isFull(){

    return top == COUNT-1;

    // if (top == COUNT -1){
    //     return true;
    // } else {
    //     return false;
    // }

}

void push(char data){
     
    if(isFull){
        cout << "Stack is full" << endl;
    }else{
        top++;
        stck[top] = data;
        cout << "Pushed " << data << endl;  
    }
}

int main(){

    push('A');
    push('B');
    push('C');

    return 0;

}