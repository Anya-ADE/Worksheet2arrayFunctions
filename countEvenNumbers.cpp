#include <iostream>
using namespace std;

//function prototype
void countEveninArray(int vals[], int size);

    int main() {

    int vals[] = {1, 42, 23, 6, 9, 54, 17};
    int size = 7;

    //call the function
    countEveninArray(vals, size);
    
    return 0;
}

// print array reverse
    void countEveninArray(int vals[], int size){
        
        int even = 0;
        
        cout << "The number of even numbers in array is: "<< endl;
    
        for (int j = 0; j < size; j++){
                
        if(vals[j] % 2 == 0){
            
            even++ ;
        }
        
    }    
        cout<< even << endl;
}
