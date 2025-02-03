#include <iostream>
using namespace std;

//function prototype
void reversePrintarray(int vals[], int size);

    int main() {

    int vals[] = {1, 42, 23, 6, 9, 54, 17};
    int size = 7;

    //call the function
    reversePrintarray(vals, size);
    
    return 0;
}

// print array reverse
    void reversePrintarray(int vals[], int size){
    
    cout << "The array in reverse is: "<< endl;
    
    for (int j = 1; j <= size; j++){
                
        cout << vals[size-j] << endl;
        
    }    

}
