#include "exception.h"

template <class T, int MAXSIZE> class Stack{
private:
    T stack[MAXSIZE];
    int top;
public:
    Stack() : top(-1) {}
    void push(const T a){
        if(top < MAXSIZE -1) stack[++top] = a;
    }
    T pop(){
        if(top>-1) return stack[top--];
        
        throw empty_stack_exception("Der Stack ist leer!");
    }
};