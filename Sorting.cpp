#include <iostream>
using namespace std;

// Single Liear Search!

// int main() {
    
//     int i = 0;
//     int toSearch;
//     cout<<"Enter your Number: ";
//     cin>>toSearch;
    
//     int arr[10] = {12, 14, 56, 89, 90, 52, 16, 78, 79, 15};
     
//      for(i; i < 10; i++){
//          if(toSearch == arr[i]){
//              cout<<"Value found at indxex: "<<i;
//              break;
//          }
//      }
//      if(i == 10){
//          cout<<"Value not found";
//      }
    
// }


// Multiple linear search!

// int main() {
    
//     int toSearch;
//     cout<<"Enter your Number: ";
//     cin>>toSearch;
    
//     int arr[10] = {12, 14, 56, 12, 90, 52, 12, 78, 79, 12};
//     bool found = false;
     
//      for(int i=0; i < 10; i++){
//           if (toSearch == arr[i]) {
//             if (!found) {
//                 cout << "Value found at index: ";
//             }
//             if (found) {
//                 cout << ", ";
//             }
//             cout << i;
//             found = true;
//         }
//      }
//      if(!found){
//          cout<<"Value not found";
//      }
    
// }


// Single Binary Search!

// int main() {
    
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int leftIndex = 0; 
//     int rightIndex = 9;
//     int toSearch;
//     cout<<"Enter a Number: "; 
//     cin>>toSearch;
    
//     while(leftIndex <= rightIndex){
//         int mid = (leftIndex + rightIndex) / 2;
        
//         if(toSearch == arr[mid]){
//         cout<<"Value found at index: "<<mid;
//         break;
//         }
        
//         if(toSearch == arr[mid]){ 
//             cout<<"Value found at index: "<<mid; 
//             break; 
//         }
        
//         if(toSearch > arr[mid]){ 
//             leftIndex = mid + 1; 
//         }
        
//         if(toSearch < arr[mid]){ 
//             rightIndex = mid - 1; 
//         }
//     }
    
//     if(leftIndex > rightIndex){ 
//         cout<<"Value not found"; 
//     }
    
//     return 0; 
    
// }


// Multiple Binary Search!

// int main() {
    
//     int arr[10] = { 1, 2, 2, 2, 3, 4, 5, 6, 7, 8};
//     int leftIndex = 0; 
//     int rightIndex = 9;
//     bool found = false;
//     int toSearch;
//     cout << "Enter a Number: ";
//     cin >> toSearch;

//     while (leftIndex <= rightIndex) {
//         int mid = (leftIndex + rightIndex) / 2;

//         if (toSearch == arr[mid]) {
    
//              if (!found) {
//                 cout << "Value found at index: ";
//             }
            
//             for(int i = mid; i >= 0 && arr[i] == toSearch; i--){
                
//              if (found) {
//                 cout << ", ";
//             }
            
//             cout << i;
//             found = true;
//             }
//             for(int i = mid+1; i <= 9 && arr[i] == toSearch; i++){
                
//              if (found) {
//                 cout << ", ";
//             }
            
//             cout << i;
//             found = true;
//             }
//             break;
//         }

//         if (toSearch > arr[mid]) {
//             leftIndex = mid + 1;
//         }

//         if (toSearch < arr[mid]) {
//             rightIndex = mid - 1;
//         }
//     }

//     if (!found) {
//         cout << "Value not found";
//     }

//     return 0;

// }



// Bubble Sort!

// int main() {
 
// int arr[5] = {2, 1, 5, 4, 3};
// int n = 5;
// bool sorted = false;
// int temp;

// for(int i = 0; i < n - 1; i++){
// bool swapped = false;
//     for(int j = 0; j < n - 1 - i; j++){
//         if(arr[j] > arr[j + 1]){
//             temp = arr[j];
//             arr[j] = arr[j + 1];
//             arr[j + 1] = temp;
            
//             swapped = true;
//             sorted = true;
//         }
//     }
//         if(!swapped){
//             break;
//         }
// }
// if(sorted){
//     cout<<"Sorted Array: " ;
//     for(int i = 0; i < n; i++){
//         cout<<arr[i];
//     }
// }
// if(!sorted){
//     cout<<"Already Sorted";
// }

//     return 0;
// }


// Bubble sort using swap!

// int main() {
 
// int arr[5] = {2, 1, 5, 4, 3};
// int n = 5;
// bool sorted = false;

// for(int i = 0; i < n - 1; i++){
// bool swapped = false;
//     for(int j = 0; j < n - 1 - i; j++){
//         if(arr[j] > arr[j + 1]){
//             swap(arr[j] , arr[j + 1]);
//             swapped = true;
//             sorted = true;
//         }
//     }
//         if(!swapped){
//             break;
//         }
// }
// if(sorted){
//     cout<<"Sorted Array: " ;
//     for(int i = 0; i < n; i++){
//         cout<<arr[i];
//     }
// }
// if(!sorted){
//     cout<<"Already Sorted";
// }

//     return 0;
// }



// Selection Sort!

// int main() {
 
// int arr[5] = { 1, 3, 5, 2 , 4};
// int n = 5;
// int temp;

// for(int i = 0; i < n - 1; i++){
// int minIndex = i;
//     for(int j = i + 1; j < n ; j++){
//         if(arr[minIndex] > arr[j]){
//             minIndex = j;
//         }
//     }
//        temp = arr[minIndex];
//        arr[minIndex] = arr[i];
//        arr[i] = temp;
// }

// cout<<"Sorted Array: " ;
// for(int i = 0; i < n; i++){
//     cout<<arr[i];
//     if(i < n - 1){
//         cout<<", ";
//     }
// }

//     return 0;
// }



// Selection Sort Using Swap!

// int main() {
 
// int arr[5] = { 1, 2,3, 4, 5};
// int n = 5;
// int temp;

// for(int i = 0; i < n - 1; i++){
// int minIndex = i;
//     for(int j = i + 1; j < n ; j++){
//         if(arr[minIndex] > arr[j]){
//             minIndex = j;
//         }
//     }
//        swap(arr[i], arr[minIndex]);
// }

// cout<<"Sorted Array: " ;
// for(int i = 0; i < n; i++){
//     cout<<arr[i];
//     if(i < n - 1){
//         cout<<", ";
//     }
// }

//     return 0;
// }
