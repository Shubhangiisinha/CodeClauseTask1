#include <iostream>

using namespace std;

void printArray(int arr[], int size) {

    cout<<"printing the array: "<<endl;
    for(int i=0;i<size;i++) {
        cout<< arr[i] << " ";
    }


}

int main () {
    int number[15];

    cout<<"hello"<< number[14] <<endl;

    int second[4] = {3,4,5};

    cout<<"value at 2nd index: "<<second[2]<< endl;

    int third[10] = {1,2,3,6,9};

    int n = 10;
    printArray(third,10);

    int fourth[10] = {0};

    n = 10;
    printArray(fourth,10);

    int fifth[10] = {1};

    n = 10;
    printArray(fifth,10);

    int fifthSize = sizeof(fifth)/sizeof(int);

    cout<<"size of fifth is : "<<fifthSize;

    }

  
