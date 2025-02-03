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

// print number odd numbers
    void searchElement(int vals[], int size){
        
        int odd = 0;
        
        cout << "The number of odd numbers in array is: "<< endl;
    
        for (int j = 0; j < size; j++){
                
        if(vals[j] % 2 == 1){
            
            odd++ ;
        }
        
    } 
        cout << odd << endl;
}
