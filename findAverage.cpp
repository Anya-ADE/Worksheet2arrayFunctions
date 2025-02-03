#include <iostream>
using namespace std;

//function prototype
double averageOfarray(int vals[], int size);

int main() {

    int vals[] = {1, 42, 23, 6, 9, 54, 17};
    int size = 7;

    //call the function
cout << " The average of the array is: "<< averageOfarray(vals, size) << endl;
    return 0;
}

//return average of array
double averageOfarray(int vals[], int size) {
int sum = 0;
    double average = 0;
    for(int i=0; i < size; i++) {
        sum = sum + vals[i];
	average = sum/size ; 
    }
    return average;
}
