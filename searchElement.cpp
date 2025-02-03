#include <iostream>
using namespace std;

//function prototype
void searchElement(int vals[], int size);

    int main() {

    int vals[] = {1, 42, 23, 6, 9, 54, 17};
    int size = 7;

    //call the function
    searchElement(vals, size);
    
    return 0;
}

// print array reverse
    void searchElement(int vals[], int size){
        
        int value = 0;
        
        int index = -1;
        
        cout << "Enter the value you are searching for: ";
    
        cin >> value;
    
        for (int j = 0; j < size; j++){
                
            if(value == vals[j] ){
            
                index = j;
                
            }
            
        }    
       cout << index;
    }
