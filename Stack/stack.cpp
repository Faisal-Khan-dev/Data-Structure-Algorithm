#include <iostream>
using namespace std;

// Stack with fix Array!


// const int capacity = 10;
// int arr[capacity];
// int n = 0;

// void Push(int value){
//     if(n == capacity){
//         cout << "Array full! Cannot push more.\n";
//         return;
//     }
//     arr[n++] = value;
   
// }

// void Pop(){
//     if(n == 0){
//         cout << "Array is empty! Cannot pop.\n";
//         return;
//     }
//     n--;
//     cout << "Last element popped.\n";
// }

// void Display(){
//     cout << "Array elements: ";
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int ch;
//     int value;

//     cout << "\nPress 1 to push number in the array! \nPress 2 pop number from the array! \nPress 3 to display numbers \nPress 4 for exit! \n";
    
//     while(true){
//         cin >> ch;

//         if(ch == 1){
//             cout << "Enter value u want to push in the array" << endl;
//             cin >> value;
//             Push(value);
//         }
//         if(ch == 2){
//             Pop();
//         }
//         if(ch == 3){
//             Display();
//         }
//         if (ch == 4){
//             break;
//         }
//         cout << "insert number to execute function!" << endl;
//     }
// }
    

// struct Node{
//     int data;
//     Node*next;
// };

// Node * top = NULL;

// void push(int n){
//     Node* temp = (Node*)malloc(sizeof(Node));
//     temp->data = n;
//     temp->next = top;
//     top = temp;
// }


// void display(){
//     if(top == NULL){
//         cout << "Stack is Empty!" << endl;
//         return;
//     }

//     Node* temp = top;
//     cout << "Stack Elements: ";
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }


// int pop(){
//     if(top == NULL){
//         cout << "Stack is Empty!" << endl;
//         return -1;
//     }

//     Node* temp = top;
//     int poppedValue = top->data;
//     top = top->next;
//     free(temp);

//     cout << "Popped Value: " << poppedValue << endl;
//     return poppedValue;
// }




// int main() {
   
//     int ch;
//     int value;
   
//     cout << "Press 1 to Push Value!" << endl << "Press 2 to Pop Value!"<< endl << "press 3 to Exit!" << endl;
   
//     while(true){
//         cin >> ch;
//         if(ch == 1){
//             cout << "Enter Number u want to push!" << endl;
//             cin >> value;
//             push(value);
//         }
//         if(ch == 2){
//             pop();
//         }
//         if(ch == 3){
//             display();
//         }
       
//         if(ch == 4){
//             break;
//         }
       
//         cout << "Press Number to execute function!" << endl;
       
//     }
 
// }