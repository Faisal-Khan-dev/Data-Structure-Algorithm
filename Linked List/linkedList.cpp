#include <iostream>
using namespace std;

struct LL_Node{
    int data;
    LL_Node *next;
};

LL_Node *list = NULL;

void insert(int value){
    
}

int main() {

    int ch;
    cin >> ch;
    if (ch == 1)
    {
        int value;
        cout << "Enter a value u want to store!";
        cin >> value;
        insert(value);
    }
    
}