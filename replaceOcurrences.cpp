#include <iostream>
using namespace std;

//function prototype
void replaceOcurrences(int vals[], int size);

    int main() {

    int vals[] = {1, 42, 9, 6, 9, 54, 17, 9};
    int size = 8;

    //call the function
    replaceOcurrences(vals, size);
    
    return 0;
}

// print number odd numbers
    void replaceOcurrences(int vals[], int size){
     
        int occurence = 0;
        int n = 0;
  
        cout << "Enter a value" << endl;
    
        cin >> n;
    
        for(int i = 0; i < size; ++i){
    
            if (n == vals[i] ){
            occurence++;
            vals[i] = 0;
            } 
        }
        
        cout << "The number " << n << " occured " << occurence << " times in array" << endl;
    
        cout << "Updated array: " << endl;

        for (int j = 0; j < size ; j++) {
        
            cout << vals[j] << " ";
        }
}
