#pragma once 
#include <stdlib.h>
#include <iostream>

using namespace std; 

class Stack
{
    Stack* next; 
    int value;
    int count; 

    public: 
        Stack(); 
        Stack(int i, Stack* ptr);
        Stack* AddtoStack(int i, Stack**root);
        Stack* SearchStack(int i, Stack* root); 
        int getValue() { return value; }
        int getCount() { return count; }
        void increaseCount() { count++; }
        void printStack(Stack* root); 
        Stack* FindMaxCount(Stack* root); 
        ~Stack(); 
};   