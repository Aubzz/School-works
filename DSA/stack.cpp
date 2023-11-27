#include <iostream>
#define MAX 5
using namespace std;

char stck[MAX];
int top = -1;

bool isEmpty(){
    return top == -1;      // return(S.top == 0)
}

bool isFull(){
    return top == MAX-1;    // return(S.top == MAX)
}

void push(char x){
    if(isFull()){
        cout <<"STACK OVERFLOW" <<endl;
    }else {
        top++;      // it is top--; in prof's version of code   // ililipat niya yung top index sa 0
        stck[top] = x;    // after mapunta yung top index sa 0 ay pwede na maglagay nang any letter then pataas na siya nang pataas yung top index every time na magalalagay
        cout <<"Pushed " << x <<endl;   // this is not include in prof's ppt
    }
}

void pop(){
    if(isEmpty()){
        cout <<"STACK UNDERFLOW" <<endl;   // wala na tayong ma-delete kasi wala ng laman
    }else {
        cout<<"Popped " <<stck[top] <<endl;
        //stck[top] = NULL;  optional lang to but yung top is equal to NULL so made-delete yung letter sa 0 so ibig sabihin walang laman
        top--;  // then after ma-delete babawasan yung top ng isang beses, yung top mapupunta ng isa pababa which is -1
    }
}

// it is char dahil char gamit natin sa char stck. Kailangan same data type
char peek(){
    if(isEmpty()) cout <<"Stack is empty" <<endl;  // okay na yan mar-return lang naman nito is NULL since walang laman. OPTIONALL
    return stck[top];  // re-return lang pinakatop index
}

// since index natin ay simula sa 0 kaya kailangan natin mag-add ng 1 para malaman kung ano talaga size ng stack natin
int cnt(){
    return top + 1;   // kinukuha lang kung gaano karami yung laman ng stack natin as of the moment
}#include <iostream>
#define MAX 5
using namespace std;

char stck[MAX];
int top = -1;

bool isEmpty(){
    return top == -1;      // return(S.top == 0)
}

bool isFull(){
    return top == MAX-1;    // return(S.top == MAX)
}

void push(char x){
    if(isFull()){
        cout <<"STACK OVERFLOW" <<endl;
    }else {
        top++;      // it is top--; in prof's version of code   // ililipat niya yung top index sa 0
        stck[top] = x;    // after mapunta yung top index sa 0 ay pwede na maglagay nang any letter then pataas na siya nang pataas yung top index every time na magalalagay
        cout <<"Pushed " << x <<endl;   // this is not include in prof's ppt
    }
}

void pop(){
    if(isEmpty()){
        cout <<"STACK UNDERFLOW" <<endl;   // wala na tayong ma-delete kasi wala ng laman
    }else {
        cout<<"Popped " <<stck[top] <<endl;
        //stck[top] = NULL;  optional lang to but yung top is equal to NULL so made-delete yung letter sa 0 so ibig sabihin walang laman
        top--;  // then after ma-delete babawasan yung top ng isang beses, yung top mapupunta ng isa pababa which is -1
    }
}

// it is char dahil char gamit natin sa char stck. Kailangan same data type
char peek(){
    if(isEmpty()) cout <<"Stack is empty" <<endl;  // okay na yan mar-return lang naman nito is NULL since walang laman. OPTIONALL
    return stck[top];  // re-return lang pinakatop index
}

// since index natin ay simula sa 0 kaya kailangan natin mag-add ng 1 para malaman kung ano talaga size ng stack natin
int cnt(){
    return top + 1;   // kinukuha lang kung gaano karami yung laman ng stack natin as of the moment
}