#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int num[100];  // Assume the array will not exceed 100 elements
    cout << "Enter " << size << " integers: ";

    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += num[i];
    }

    cout << "Sum of elements is: " << sum << endl;

    return 0;
}
