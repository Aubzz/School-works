#include <iostream>
#define MAX 5
using namespace std;

class Mystack {
private:
  int S[MAX]; // Array to store the stack elements
  int top; // Index of the top element
  bool isEmpty();
  bool isFull();
public:
  // constructor
  Mystack() : top(MAX){} // initialize 'top' member variable to MAX
  void push(int x);  // parameter 'x' is the value to be pushed onto the stack
  void pop();
  void display();
};

bool Mystack::isEmpty(){
  return top == MAX; // since top is initialized to MAX, if top is MAX, the stack is empty
}

bool Mystack::isFull(){
  return top == 0;   // since top is initialized to MAX, if top is 0, the stack is full
}

void Mystack::push(int x){
  if(isFull()){
    cout << "STACK OVERFLOW" <<endl;
    return;
  } else {
    top--;
    S[top] = x;  // insert 'x' at the top of the stack
  }
}

void Mystack::pop(){
  if(isEmpty()){
    cout << "STACK UNDERFLOW" <<endl;
    return;
  } else {
    top++;
  }
}

void Mystack::display(){
int i;
int j = 1;
  if(isEmpty()){
    cout << "STACK IS EMPTY" <<endl;
  } else {
    for(int i = top; i < MAX; i++){  // start from the top of the stack
      cout << j << ".)" << S[i] <<endl;
    }
  }
}

int main(){
  Mystack stck;
  stck.push(2);
  stck.push(5);
  stck.push(7);
  stck.push(9);
  stck.display();
  cout <<"After 2 pop operations...\n";
  stck.pop();
  stck.display();
}