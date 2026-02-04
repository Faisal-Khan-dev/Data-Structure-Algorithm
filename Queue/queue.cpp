#include <iostream>
#include <cstdlib>
using namespace std;

struct queue{
    int data;
    queue *next;
};

queue *rear = NULL;
queue *front = NULL;

void EnQueue(int value){
    queue *temp = (queue *)malloc(sizeof (queue));
    
    temp -> data = value;
    temp -> next = NULL;
    
    if(rear == NULL){
       rear = temp;
       front = temp;
    }else{
        rear -> next = temp;
        rear = temp;
    }
}

int DeQueue(){
    if(front == NULL){
        cout << "The queue is empty u can't De queue! \n";
        return -1;
    }else{
         queue *cur = front;
         front = front -> next;
         cout << cur -> data << "\n";
         free(cur);
         if(front == NULL){
             rear = NULL;
         }
    }
    return 0;
}

int main() {
    
    cout << "Press 1 to En Queue value! \nPress 2 to De queue value! \nPress 3 for exit \n";
    
    int ch;
    int value;
    while(true){
    cin >> ch;
        if(ch == 1){
            cout << "Enter value u want to En Queue! \n";
           cin >> value;
           EnQueue(value);
        }
        if(ch == 2){
            DeQueue();
        }
        if(ch == 3){
            break;
        }
        cout << "insert number to execute function! \n";
    }
    return 0;
}