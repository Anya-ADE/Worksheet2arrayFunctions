#include <iostream>
using namespace std;

//function prototype
void cumulativeArray(int vals[], int size);

    int main() {

    int vals[] = {1, 42, 9, 6, 9, 54, 17, 9};
    int size = 8;

    //call the function
    cumulativeArray(vals, size);
    
    return 0;
}

// print number odd numbers
    void cumulativeArray(int vals[], int size){
     
        int sum = 0;
    
        for(int i = 0; i < size; ++i){
            sum = vals[i] + vals[i];
            if (i == 0){
            vals[i] = sum;
            }
            else {
                vals[i] = sum + vals[i-1];
            }
        }
    
        cout << "Cumulative array: " << endl;

        for (int j = 0; j < size ; j++) {
        
            cout << vals[j] << " ";
        }
}


