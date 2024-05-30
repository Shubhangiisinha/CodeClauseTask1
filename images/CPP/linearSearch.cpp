#include <iostream>
using namespace std;

bool Search(int arr[], int n, int key) {
    for (int i =0 ; i<n; i++ ) {
        if (arr[i] == key) {
            return 1;
        }

    }
    return 0;
}
int main() {

    int arr[10] = {1, 3, 4, 5, 7, 8, -6,0,1,78};
    int key;

    cout<<"Enter element you wanna lookup: "<<endl;
    cin>>key;

    bool found = Search(arr, 10, key);

    if (found) {
        cout<<"KEY IS FOUND!"<<endl;

    }
    else {
        cout<<"SORRY! NOT PRESENT"<<endl;
    }

}