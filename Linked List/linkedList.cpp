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


// Double Linked List!


struct LL_Node{
    int data;
    LL_Node *next;
};

LL_Node *list = NULL;

void insert(int value){

    LL_Node *temp; 
    temp = (LL_Node*) malloc(sizeof(LL_Node));

    temp->data = value;

    if (list == NULL){
        list = temp;
        temp->next = list;
    }else{
        LL_Node *cur = list;

        while (cur->next != list)
        {
            cur = cur->next;
        }
        cur->next = temp;
        temp->next = list;
    } 
}

void display(){
     if(list == NULL){ 
        cout << "The List is empty!" << endl;
        return;
    }
    LL_Node *cur = list; 
    cout << "List: ";
    do{
         cout << cur->data << " ";
        cur = cur->next;
    }while (cur != list);
    cout << endl;
}

void search(int toSearch){
    if(list == NULL){ 
        cout << "The List is empty!" << endl;
        return;
    }
    bool found;
    LL_Node *cur = list; 
    do{
        if(cur-> data == toSearch){
            cout << "value found!" << endl;
            found = true;
        }
        cur = cur->next;
    }while (cur != list);
    if(!found){
        cout<<"Value not found!" << endl;
    }
}
void del(int value){
    if(list == NULL){ 
        cout << "The List is empty!" << endl;
        return;
    }
    bool found = false;
    if(list->next == list){
        free(list);
        list =  NULL;
        found = true;
        return;
    }
    
    LL_Node * cur = list;
    if(value == list -> data){
        LL_Node * temp = list -> next;
       
        list = cur -> next;

                while(temp != list){
                    temp  = temp -> next;
             }
                temp -> next = list;
                free(cur);
                found = true;
        }
   
    LL_Node * prev = list;
    cur = list -> next;
    while(cur != list){
        if(value == cur-> data){
            prev-> next = cur -> next;
            free(cur);
            found = true;
            break;
        }
       
        prev = cur;
        cur = cur -> next;
    }
    if(!found){
        cout << "Value not found!" << endl;
    }
     
    
    
}

int main() {

    int ch;
       cout << "Press 1 for insert" << endl << "Press 2 for search!" << endl << "Press 3 for dislay!" << endl  << "Press 4 for delete" << endl  << "Press 5 for exit" << endl;
    while (true){
       
    cin >> ch;
        
    if (ch == 1)
    {
        int value;
        cout << "Enter a value u want to insert!" << endl;
        cin >> value;
        insert(value);
    }
      if (ch == 2)
    {
        int value;
        cout << "Enter a value u want to search" << endl;
        cin >> value;
        search(value);
    }
    if (ch == 3){
         
        display();
    }
    if(ch == 4){
        int value;
        cout << "Enter a value u want to delete" << endl;
        cin >> value;
        del(value);
    }
    if(ch == 5){
        break;
    }
    
    cout << "Press number to execute function!" << endl;
        
    }
 
    
}