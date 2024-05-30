#include <iostream>
#include <climits>

using namespace std;

int getMax(int num[], int n) {
    int max = INT_MIN; 

    for(int i = 0; i < n; i++) {
        if(num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if(size <= 0) {
        cout << "Invalid size: " << size << endl;
        return 1;
    }

    if(size > 100) {
        cout << "Size exceeds maximum allowed (100)" << endl;
        return 1;
    }

    int num[100];
    cout << "Enter " << size << " integers: ";

    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Entered numbers are: ";
    for(int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    int maxValue = getMax(num, size);
    cout << "Maximum value is: " << maxValue << endl;

    return 0;
}
