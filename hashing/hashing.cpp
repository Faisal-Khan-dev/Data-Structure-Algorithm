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

//          cout << "Press 1 to insert value! \nPress 2 to display values! \nPress 3 for exit \n";
    
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
//             display();
//         }
//         if(ch == 3){
//             break;
//         }
//         cout << "insert number to execute function! \n";
//     }
   
//     return 0;
// }
