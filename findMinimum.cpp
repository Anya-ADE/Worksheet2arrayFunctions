#include <iostream>
using namespace std;

//function prototype
void minValueofArray(int vals[], int size);

int main() {

    int vals[] = {1, 42, 23, 6, 9, 54, 17};
    int size = 7;

    //call the function
    minValueofArray(vals, size);
    return 0;
}

//return minimum value of array
    void minValueofArray(int vals[], int size){
    int min = vals[0];
    for(int i=0; i < size; i++) {
        if ( vals[i] < min){
	    min = vals[i]; 
    } 
}
    cout << " The minimum value of the array is: "<< min << endl;
}
