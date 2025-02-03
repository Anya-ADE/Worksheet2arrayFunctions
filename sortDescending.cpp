#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void sortAscending(vector<int>& vals);

int main() {
    vector<int> data = {1, 42, 23, 6, 9, 54, 17};

    cout << "Unsorted array: ";
    for (int x : data) {
        cout << x << " ";
    }
    cout << endl;

    sortAscending(data);

    cout << "Sorted array: ";
    for (int x : data) {
    cout << x << " ";
    }
    cout << endl;

    return 0;
}

// inspired by Bubble Sort function
void sortAscending(vector<int>& vals) {
    int n = vals.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; 
        for (int j = 0; j < n - i - 1; j++) {
            if (vals[j] < vals[j + 1]) {
                swap(vals[j], vals[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break; 
        }
    }
}
