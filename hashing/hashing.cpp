#include <iostream>
using namespace std;

// Linear Probing!

// const int SIZE = 10;
// int hashTable[SIZE];

// void init() {
//     for(int i = 0; i < SIZE; i++)
//         hashTable[i] = -1;
// }

// void insert(int value) {
//     int index = value % SIZE;

//     while(hashTable[index] != -1) {
//         index = (index + 1) % SIZE;
//     }

//     hashTable[index] = value;
//     cout << value << " inserted at index " << index << endl;
// }

// void search(int value) {
//     int index = value % SIZE;
//     int startIndex = index;

//     while (hashTable[index] != -1) {
        
//         if (hashTable[index] == value) {
//             cout << value << " found at index " << index << endl;
//             return;
//         }
        
//         index = (index + 1) % SIZE;

//         if (index == startIndex)
//             break;
//     }
//     cout << value << " not found!" << endl;
// }

// void display() {
//     for(int i = 0; i < SIZE; i++) {
//         if(hashTable[i] == -1)
//             cout << i << "" << endl;
//         else
//             cout << i << " : " << hashTable[i] << endl;
//     }
// }

// int main() {
//     init();

//          cout << "Press 1 to insert value! \nPress 2 to search value! \nPress 3 to display values! \nPress 4 for exit \n";
    
//     int ch;
//     int value;
//     while(true){
//     cin >> ch;
//         if(ch == 1){
//             cout << "Enter value u want to Insert! \n";
//             cin >> value;
//             insert(value);
//         }
//         if(ch == 2){
//             cout << "Enter value u want to search! \n";
//             cin >> value;
//             search(value);
//         }
//         if(ch == 3){
//             display();
//         }
//         if(ch == 4){
//             break;
//         }
//         cout << "insert number to execute function! \n";
//     }
   
// }


// Quadratic probing!


// const int SIZE = 10;
// int hashTable[SIZE];

// void init() {
//     for(int i = 0; i < SIZE; i++)
//         hashTable[i] = -1;
// }

// void insert(int value) {
//     int index = value % SIZE;
//      int i = 1;

//     while(hashTable[index] != -1) {
//         index = (value % SIZE + i * i) % SIZE;
//         i++;
//     }

//     hashTable[index] = value;
//     cout << value << " inserted at index " << index << endl;
// }

// void search(int value) {
//     int index = value % SIZE;
//     int i = 1;

//     while (hashTable[index] != -1) {

//         if (hashTable[index] == value) {
//             cout << value << " found at index " << index << endl;
//             return;
//         }

//         index = (value % SIZE + i * i) % SIZE;
//         i++;

//         if (i == SIZE)
//             break;
//     }
//     cout << value << " not found!" << endl;
// }


// void display() {
//     for(int i = 0; i < SIZE; i++) {
//         if(hashTable[i] == -1)
//             cout << i << "" << endl;
//         else
//             cout << i << " : " << hashTable[i] << endl;
//     }
// }

// int main() {
//     init();

//          cout << "Press 1 to insert value! \nPress 2 to search value! \nPress 3 to display values! \nPress 4 for exit \n";
    
//     int ch;
//     int value;
//     while(true){
//     cin >> ch;
//         if(ch == 1){
//             cout << "Enter value u want to Insert! \n";
//             cin >> value;
//             insert(value);
//         }
//         if(ch == 2){
//             cout << "Enter value u want to search! \n";
//             cin >> value;
//             search(value);
//         }
//         if(ch == 3){
//             display();
//         }
//         if(ch == 4){
//             break;
//         }
//         cout << "insert number to execute function! \n";
//     }
   
// }


// struct Node{
//     int data;
//     Node* next;
// };

// const int SIZE = 10;
// Node HT[SIZE];

// void init() {
//     for(int i = 0; i < SIZE; i++){
//         HT[i].data = -1;
//         HT[i].next = NULL;
//     }
// }

// void insert(int value){
   
//     int index = value % 10;
   
//     if(HT[index].data == -1){
//         HT[index].data = value;
//     }else{
//         Node *temp = (Node*) malloc(sizeof(Node));
//         temp -> data = value;
//         temp -> next = NULL;
       
//         Node* cur = HT[index].next;
       
//         if(cur == NULL){
//             HT[index].next = temp;
//         }else{
           
//               while(cur->next != NULL){
//                 cur = cur->next;
//                 }
               
//                 cur -> next = temp;
//         }
//     }
   
// }

// void search(int value){
//     int index = value % 10;

//     if(HT[index].data == -1){
//         cout << "Value not found!" << endl;
//         return;
//     }

//     if(HT[index].data == value){
//         cout << "Value found at index " << index << endl;
//         return;
//     }

//     Node* cur = HT[index].next;
//     while(cur != NULL){
//         if(cur->data == value){
//             cout << "Value found at index " << index << endl;
//             return;
//         }
//         cur = cur->next;
//     }

//     cout << "Value not found!" << endl;
// }


// void display(){
   
//     for(int i = 0; i < SIZE; i++){
//         cout << "Index " << i << " : ";

//         if(HT[i].data == -1){
//             cout << "";
//         }else{
//             cout << HT[i].data;

//             Node* cur = HT[i].next;

//             while(cur != NULL){
//                 cout << " -> " << cur->data;
//                 cur = cur->next;
//             }
//         }

//         cout << endl;
//     }
// }

// int main() {
   
//     init();
   
//          cout << "Press 1 to insert value!  \nPress 2 to search value! \nPress 3 to display value! \nPress 4 for exit \n";
     
//        int ch;
//         int value;
//         while(true){
//         cin >> ch;
//             if(ch == 1){
//                 cout << "Enter value u want to Insert! \n";
//                 cin >> value;
//                 insert(value);
//             }
//             if(ch == 2){
//                 cout << "Enter value u want to search! \n";
//                 cin >> value;
//                 search(value);
//             }
//              if(ch == 3){
//             display();
//         }
//              if(ch == 4){
//             break;
//             }
//             cout << "insert number to execute function! \n";
//         }
 
// }