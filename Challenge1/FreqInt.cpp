#include<stdlib.h>
#include<iostream>
#include<string.h>
#include"Stack.h"
#include<time.h>

using namespace std; 

const int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
#define NUMOFLIST 1000

int* GenerateRandomNumebers()
{
    srand(time(NULL)); 
    int* data = new int(NUMOFLIST); 
    int random_num = 0; 
    for (int i = 0; i < NUMOFLIST; i++)
    {
        random_num = rand() % 20;
        int j = num[random_num];
        data[i] = num[random_num];
    }

    return data; 
}

int main (int argc, char* argv[])
{
    int* numlist = GenerateRandomNumebers(); 
    //int numlist[] = {0,2,3,4,5,2,3,2,4,5,2,4,5,7,9,7,6,8,6,4,4,4,4,4,4,4,4,4,2,8};
    for (int i = 0; i < NUMOFLIST; i++)
    {
        cout << numlist[i] << endl; 
    }
    
    Stack *root = NULL;
    Stack *nodeI;
    
    for (int i = 0 ; i < NUMOFLIST; i++)
    {
        nodeI = root->AddtoStack(numlist[i], &root);
        if (nodeI)
        {
            nodeI->increaseCount();
        }
    }
    root->printStack(root); 

    nodeI = root->FindMaxCount(root); 
    cout << "MOST FREQUENT NUMBER = " << nodeI->getValue() << "\t Count: " << nodeI->getCount() << endl; 
    
    root->~Stack(); 
    delete root;
    delete nodeI;
    delete numlist;

    return 0; 
}