#include <iostream>
using namespace std;

//function prototype
int sumOfArray(int vals[], int size);

int main() {

    int vals[] = {1, 42, 23, 6, 9, 54, 17};
    int size = 7;

    //call the function
cout << " The sum of the array is: "<< sumOfArray(vals, size) << endl;
    return 0;
}

//return sum of array
int sumOfArray(int vals[], int size) {
    int sum = 0;
    for(int i=0; i < size; i++) {
        sum = sum + vals[i];
    }
    return sum;
}
