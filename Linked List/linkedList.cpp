#include <iostream>
using namespace std;
#include <cstdlib>

struct LL_Node{
    int data;
    LL_Node *next;
};

LL_Node *list = NULL;

void insert(int value){

    LL_Node *temp; 
    temp = (LL_Node*) malloc(sizeof(LL_Node));

    temp->data = value;
    temp->next = NULL;

    if (list == NULL){
        list = temp;
    }else{
        LL_Node *cur = list;

        while (cur-> next != NULL)
        {
            cur = cur->next;
        }
        cur->next = temp;
    } 
}

void display()
{
    LL_Node *cur = list; 
    while (cur != NULL)
    {
        cout << cur->data << ",";
        cur = cur->next;
    }
    
}
int main() {

    // int ch;
    // cin >> ch;
    // if (ch == 1)
    // {
        // int value;
        // cout << "Enter a value u want to store!";
        // cin >> value;
        insert(10);
        insert(20);

        display();
        // search()
    // }
    
}