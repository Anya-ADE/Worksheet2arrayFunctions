#include <iostream>
using namespace std;

//function prototype
void largestValueofArray(int vals[], int size);

int main() {

    int vals[] = {1, 42, 23, 6, 9, 54, 17};
    int size = 7;

    //call the function
    largestValueofArray(vals, size);
    return 0;
}

//return largest value of array
    void largestValueofArray(int vals[], int size){
    int largest = vals[0];
    for(int i=0; i < size; i++) {
        if ( vals[i] > largest){
	    largest = vals[i]; 
    } 
}
    cout << " The largest value of the array is: "<< largest << endl;
}

