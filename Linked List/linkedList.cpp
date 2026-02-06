#include <iostream>
using namespace std;
#include <cstdlib>

// struct LL_Node{
//     int data;
//     LL_Node *next;
// };

// LL_Node *list = NULL;

// void insert(int value){

//     LL_Node *temp; 
//     temp = (LL_Node*) malloc(sizeof(LL_Node));

//     temp->data = value;
//     temp->next = NULL;

//     if (list == NULL){
//         list = temp;
//     }else{
//         LL_Node *cur = list;

//         while (cur-> next != NULL)
//         {
//             cur = cur->next;
//         }
//         cur->next = temp;
//     } 
// }

// void display(){
//      if(list == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//     }
//     LL_Node *cur = list; 
//     cout << "List: ";
//     while (cur != NULL){
//         cout << cur->data << " ";
//         cur = cur->next;
//     }
//     cout << endl;
    
// }

// void search(int toSearch){
//     if(list == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//     }
//     bool found;
//     LL_Node *cur = list; 
//      while (cur != NULL){
//         if(cur-> data == toSearch){
//             cout << "value found!" << endl;
//             found = true;
//             break;
//         }
//         cur = cur->next;
//     }
//     if(!found){
//         cout<<"Value not found!" << endl;
//     }
// }
// void del(int value){
//     if(list == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//     }
//     LL_Node * cur = list;
//     if(value == list -> data){
//         list = list -> next;
//         free(cur);
//         return;
//     }
//     LL_Node * prev = list;
//     cur = list -> next;
//     bool found = false;
//     while(cur != NULL){
//         if(value == cur-> data){
//             prev-> next = cur -> next;
//             free(cur);
//             found = true;
//             break;
//         }
       
//         cur = cur -> next;
//         prev = prev ->next;
//     }
//     if(!found){
//         cout << "Value not found!" << endl;
//     }
     
    
    
// }

// int main() {

//     int ch;
//        cout << "Press 1 for insert" << endl << "Press 2 for search!" << endl << "Press 3 for dislay!" << endl  << "Press 4 for delete" << endl  << "Press 5 for exit" << endl;
//     while (true){
       
//     cin >> ch;
        
//     if (ch == 1)
//     {
//         int value;
//         cout << "Enter a value u want to insert!" << endl;
//         cin >> value;
//         insert(value);
//     }
//       if (ch == 2)
//     {
//         int value;
//         cout << "Enter a value u want to search" << endl;
//         cin >> value;
//         search(value);
//     }
//     if (ch == 3){
         
//         display();
//     }
//     if(ch == 4){
//         int value;
//         cout << "Enter a value u want to delete" << endl;
//         cin >> value;
//         del(value);
//     }
//     if(ch == 5){
//         break;
//     }
    
//     cout << "Press number to execute function!" << endl;
        
//     }
 
    
// }


// Circular Linked List!


// struct LL_Node{
//     int data;
//     LL_Node *next;
// };

// LL_Node *list = NULL;

// void insert(int value){

//     LL_Node *temp; 
//     temp = (LL_Node*) malloc(sizeof(LL_Node));

//     temp->data = value;

//     if (list == NULL){
//         list = temp;
//         temp->next = list;
//     }else{
//         LL_Node *cur = list;

//         while (cur->next != list)
//         {
//             cur = cur->next;
//         }
//         cur->next = temp;
//         temp->next = list;
//     } 
// }

// void display(){
//      if(list == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//     }
//     LL_Node *cur = list; 
//     cout << "List: ";
//     do{
//          cout << cur->data << " ";
//         cur = cur->next;
//     }while (cur != list);
//     cout << endl;
// }

// void search(int toSearch){
//     if(list == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//     }
//     bool found;
//     LL_Node *cur = list; 
//     do{
//         if(cur-> data == toSearch){
//             cout << "value found!" << endl;
//             found = true;
//         }
//         cur = cur->next;
//     }while (cur != list);
//     if(!found){
//         cout<<"Value not found!" << endl;
//     }
// }
// void del(int value){
//     if(list == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//     }
//     bool found = false;
//     if(list->next == list){
//         free(list);
//         list =  NULL;
//         found = true;
//         return;
//     }
    
//     LL_Node * cur = list;
//     if(value == list -> data){
//         LL_Node * temp = list -> next;
       
//         list = cur -> next;

//                 while(temp != list){
//                     temp  = temp -> next;
//              }
//                 temp -> next = list;
//                 free(cur);
//                 found = true;
//         }
   
//     LL_Node * prev = list;
//     cur = list -> next;
//     while(cur != list){
//         if(value == cur-> data){
//             prev-> next = cur -> next;
//             free(cur);
//             found = true;
//             break;
//         }
       
//         prev = cur;
//         cur = cur -> next;
//     }
//     if(!found){
//         cout << "Value not found!" << endl;
//     }
     
    
    
// }

// int main() {

//     int ch;
//        cout << "Press 1 for insert" << endl << "Press 2 for search!" << endl << "Press 3 for dislay!" << endl  << "Press 4 for delete" << endl  << "Press 5 for exit" << endl;
//     while (true){
       
//     cin >> ch;
        
//     if (ch == 1)
//     {
//         int value;
//         cout << "Enter a value u want to insert!" << endl;
//         cin >> value;
//         insert(value);
//     }
//       if (ch == 2)
//     {
//         int value;
//         cout << "Enter a value u want to search" << endl;
//         cin >> value;
//         search(value);
//     }
//     if (ch == 3){
         
//         display();
//     }
//     if(ch == 4){
//         int value;
//         cout << "Enter a value u want to delete" << endl;
//         cin >> value;
//         del(value);
//     }
//     if(ch == 5){
//         break;
//     }
    
//     cout << "Press number to execute function!" << endl;
        
//     }
 
    
// }


// Double Linked List!



// struct DLL_Node{
//     int data;
//     DLL_Node *next;
//     DLL_Node *prev;
// };

// DLL_Node *list = NULL;

// void insert(int value){

//     DLL_Node *temp; 
//     temp = (DLL_Node*) malloc(sizeof(DLL_Node));

//     temp->data = value;
//     temp->next = NULL;
//     temp->prev = NULL;

//     if (list == NULL){
//         list = temp;
//     }else{
//         DLL_Node *cur = list;

//         while (cur-> next != NULL)
//         {
//             cur = cur->next;
//         }
//         cur->next = temp;
//         temp->prev = cur;
//     } 
// }

// void display(){
//      if(list == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//     }
//     DLL_Node *cur = list; 
//     cout << "List: ";
//     while (cur != NULL){
//         cout << cur->data << " ";
//         cur = cur->next;
//     }
//     cout << endl;
    
// }

// void search(int toSearch){
//     if(list == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//     }
//     bool found = false;
//     DLL_Node *cur = list; 
//      while (cur != NULL){
//         if(cur-> data == toSearch){
//             cout << "value found!" << endl;
//             found = true;
//             break;
//         }
//         cur = cur->next;
//     }
//     if(!found){
//         cout<<"Value not found!" << endl;
//     }
// }
// void del(int value){
//     if(list == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//     }
//     DLL_Node * cur = list;
//     if(value == list -> data){
//         list = list -> next;
//         list -> prev = NULL;
//         free(cur);
//         return;
//     }
//     DLL_Node * prev = list;
//     cur = list -> next;
//     bool found = false;
//    while(cur != NULL){
//     if(cur->data == value){
//         cur->prev->next = cur->next;
//         if(cur->next != NULL)
//             cur->next->prev = cur->prev;
//         free(cur);
//         found = true;
//         return;
//     }
//     cur = cur->next;
// }

//     if(!found){
//         cout << "Value not found!" << endl;
//     }
     
    
    
// }

// int main() {

//     int ch;
//         cout << "Press 1 for insert" << endl << "Press 2 for search!" << endl << "Press 3 for dislay!" << endl  << "Press 4 for delete" << endl  << "Press 5 for exit" << endl;
//     while (true){
       
//     cin >> ch;
        
//     if (ch == 1)
//     {
//         int value;
//         cout << "Enter a value u want to insert!" << endl;
//         cin >> value;
//         insert(value);
//     }
//       if (ch == 2)
//     {
//         int value;
//         cout << "Enter a value u want to search" << endl;
//         cin >> value;
//         search(value);
//     }
//     if (ch == 3){
         
//         display();
//     }
//     if(ch == 4){
//         int value;
//         cout << "Enter a value u want to delete" << endl;
//         cin >> value;
//         del(value);
//     }
//     if(ch == 5){
//         break;
//     }
    
//     cout << "Press number to execute function!" << endl;
        
//     }
 
    
// }


// Multi Linked List!


// struct SNode{
//     int SNo;
//     SNode * SNext;
// };

// struct CNode{
//     int CNo;
//      CNode * CNext;
//      SNode * Std_List;
// };

// CNode* CList = NULL;

// void Add_Course(int val){
    
//     CNode* temp = (CNode*)malloc(sizeof(CNode));
//     temp -> CNo = val;
//     temp -> CNext = NULL;
//     temp -> Std_List = NULL;
    
//     if(CList == NULL){
//         CList = temp ;
//         return;
//     }else{
//         CNode * Ccur = CList;
//         while(Ccur -> CNext != NULL){
//             Ccur = Ccur -> CNext;
//         }
//         Ccur -> CNext = temp;
//     }
// }

// void Add_Std(int C_No, int S_No){
//     CNode * Ccur = CList;
//     while(Ccur != NULL){
//             SNode * temp;
//         if(C_No == Ccur -> CNo){
//             temp = (SNode*)malloc(sizeof(SNode));
//             temp -> SNo = S_No;
//             temp -> SNext = NULL;
        
        
//         if(Ccur -> Std_List == NULL){
//             Ccur -> Std_List = temp;
//         }else{
//             SNode * Scur = Ccur -> Std_List;
//             while(Scur -> SNext != NULL){
//                 Scur = Scur -> SNext;
//             }
//                 Scur -> SNext = temp;
//         }
//         return;
//     }
//         Ccur = Ccur->CNext;
// }
//         if(Ccur == NULL){
        
//         cout << "Course not found!" << endl;
//     }
// }

// void Display_All(){
//     CNode * Ccur = CList;
    
//     if(Ccur == NULL){
//         cout << "The List is Empty!" << endl;
//         return;
//     }
    
//     while(Ccur != NULL){
//         cout << "Course: " << Ccur -> CNo << " " << "Students: ";
//         SNode* Scur = Ccur -> Std_List;
//         while(Scur != NULL){
//             cout << Scur -> SNo << " ";
//             Scur = Scur -> SNext;
//         }
        
//         cout << "Null" << endl;
//         Ccur = Ccur -> CNext;
//     }
// }

// void Search_Course(int C_No){
//      if(CList == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//      }
     
//      bool found = false;
//     CNode *Ccur = CList; 
//      while (Ccur != NULL){
//         if(Ccur-> CNo == C_No){
//             cout << "course found!" << endl;
//             found = true;
//             break;
//         }
//         Ccur = Ccur->CNext;
//     }
//     if(!found){
//         cout<<"course not found!" << endl;
//     }
// }
// void Update_Course(int C_No, int Upd_CNo){
//      if(CList == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//      }
     
//     CNode *Ccur = CList; 
//      while (Ccur != NULL){
//         if(Ccur-> CNo == C_No){
//             Ccur-> CNo = Upd_CNo;
//             break;
//         }
//         Ccur = Ccur->CNext;
//     }
// }

// void Del_Course(int C_No){
//      if(CList == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//      }
     
//      CNode *Ccur = CList;
    
//      if(C_No == CList -> CNo){
//           SNode *Scur = Ccur->Std_List;
          
//         while(Scur != NULL){
//             SNode* temp = Scur;
//             Scur = Scur->SNext;
//             free(temp);
//     }
//          CList = CList -> CNext;
//          free(Ccur);
//          return;
//      }
     
//      CNode *prev = CList;
//      Ccur = CList -> CNext;
//      bool found = false;
//      while(Ccur != NULL){
//          if(C_No == Ccur -> CNo){
//               SNode *Scur = Ccur->Std_List;
              
//               while(Scur != NULL){
//             SNode* temp = Scur;
//             Scur = Scur->SNext;
//             free(temp);
//     }
//              prev -> CNext = Ccur -> CNext;
//              free(Ccur);
//              found = true;
//              return;
//          }
//          Ccur = Ccur -> CNext;
//          prev = prev -> CNext;
//      }
//      if(!found){
//          cout << "Course not found!" << endl;
//      }
// }

// void Del_ALL_Courses(){
//     if(CList == NULL){
//         cout << "The List is empty!" << endl;
//         return;
//     }

//     while(CList != NULL){

//         SNode *Scur = CList->Std_List;
//         while(Scur != NULL){
//             SNode *temp = Scur;
//             Scur = Scur->SNext;
//             free(temp);
//         }

//         CNode *temp = CList;
//         CList = CList->CNext;
//         free(temp);
//     }

//     cout << "All courses deleted successfully!" << endl;
// }



// void Del_Course_Std(int C_No, int S_No){
    
//     if(CList == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//      }
     
//       CNode *Ccur = CList;
//       bool found = false;
      
//       while(Ccur != NULL){
          
//           if(Ccur -> CNo == C_No){
              
//                 SNode *Scur = Ccur->Std_List;
//                  SNode *prev = NULL;
                 
//                 while(Scur != NULL){
//                     // SNode* temp = Scur;
                    
//                     if(Scur -> SNo == S_No){
                   
//                         found = true;
//                         if(prev == NULL){
//                             Ccur->Std_List = Scur->SNext;
//                             free(Scur);
//                             return;
//                         }  
                        
//                         if(prev != NULL){
//                             prev->SNext = Scur->SNext;
//                             free(Scur);
//                             return;
//                         }
//                     }
//                     prev = Scur;
//                     Scur = Scur->SNext;
//                 }
//           }
//           Ccur = Ccur -> CNext;
//       }
      
//         if(!found){
//          cout << "Student not found in the course!" << endl;
//      }
// }

// void search_Std(int S_No){
    
//       if(CList == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//      }
     
//      CNode *Ccur = CList;
//       bool found = false;
      
//         while(Ccur != NULL){
           
//             SNode *Scur = Ccur->Std_List;

//             while(Scur != NULL){

//                 if(Scur -> SNo == S_No){
//                     found = true;
//                     cout << "Student found at course " << Ccur -> CNo << endl;
                    
//                 }
//                 Scur = Scur->SNext;
//             }
//             Ccur = Ccur -> CNext;
//         }
//          if(!found){
//          cout << "Student not found at any course!" << endl;
//      }
// }

// void Search_Course_Std(int C_No, int S_No){
    
//       if(CList == NULL){ 
//         cout << "The List is empty!" << endl;
//         return;
//      }
     
//      CNode *Ccur = CList;
//       bool found = false;
//         while(Ccur != NULL){
//         if(Ccur -> CNo == C_No){
              
//                 SNode *Scur = Ccur->Std_List;

//                 while(Scur != NULL){

//                     if(Scur -> SNo == S_No){
                   
//                         found = true;
//                         cout << "Student found at course " << Ccur -> CNo << endl;
//                         return;
//                     }
//                     Scur = Scur->SNext;
//                 }
//           }
//             Ccur = Ccur -> CNext;
//         }
//          if(!found){
//          cout << "Student not found in the course!" << endl;
//      }
// }

// int main() {
    
//     int ch;
//     int C_No;
//     int S_No;
    
//     cout << "Press 1 to Add Course!" << endl << "Press 2 to Add Student!"<< endl << "Press 3 to Display All!" << endl << "Press 4 to Search enrolled course!" << endl << "Press 5 to Update course!" << endl << "Press 6 to Delete course!"<< endl << "Press 7 to Delete Student from the course!" << endl << "Press 8 to Search Student from the courses!" << endl << "Press 9 to Search Student at any course!" << endl << "Press 10 to delete courses!" << endl << "Press 11 to Exit!"<< endl; 
    
//     while(true){
//         cin >> ch;
//         if(ch == 1){
//             cout << "Enter course no u want to insert!" << endl;
//             cin >> C_No;
//             Add_Course(C_No);
//         }
//         if(ch == 2){
//             cout << "Enter Course No & Student Seat No for Enrolment!" << endl;
            
//             cin >> C_No >> S_No;
//             Add_Std(C_No , S_No);
//         }
//         if(ch == 3){
//             Display_All();
//         }
//          if(ch == 4){
//             cout << "Enter course no u want to Search!" << endl;
//             cin >> C_No;
//             Search_Course(C_No);
//         }
//          if(ch == 5){
//             cout << "Enter Course No & Updated Course No for Updation!" << endl;
//             int Upd_CNo;
//             cin >> C_No >> Upd_CNo;
//             Update_Course(C_No , Upd_CNo);
//         }
//         if(ch == 6){
//             cout << "Enter course no u want to delete!" << endl;
//             cin >> C_No;
//             Del_Course(C_No);
//         }
//         if(ch == 7){
//             cout << "Enter Course No & Student Seat No to delete student from the course!" << endl;
//             int S_No;
//             cin >> C_No >> S_No;
//             Del_Course_Std(C_No , S_No);
//         }
//         if(ch == 8){
//             cout << "Enter Student Seat no u want to search!" << endl;
//             cin >> S_No;
//             search_Std(S_No);
//         }
//          if(ch == 9){
//             cout << "Enter Course No & Student Seat No to search student at any course!" << endl;
//             int S_No;
//             cin >> C_No >> S_No;
//             Search_Course_Std(C_No , S_No);
//         }
//         if(ch == 10){
//             Del_ALL_Courses();
//         }
//         if(ch == 11){
//             break;
//         }
        
//         cout << "Press Number to execute function!" << endl;
        
//     }
  
//     return 0;
// }