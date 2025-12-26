#include<iostream>
using namespace std;
bool upperTriangularMatrix(int arr[4][4]) {
    for(int i = 1;i < 4; i ++) {
        for(int j = 0; j < i; j ++) {
            if(arr[i][j] != 0) {
                return false;
                break; //may be work or not but return false will return the false
            }
        }
    }

    return true;
}

int main() {
    int arr[4][4] = {
        {3,4,1,5},
        {0,5,1,3},
        {0,0,5,5},
        {0,2,0,5},
    };

    if(upperTriangularMatrix(arr)) {
        cout << "\nThis matrix is upperTriangularMatrix \n" << endl;
    } 
    else {
        cout << "\nThis matrix is not upperTriangularMatrix \n" << endl;
    }

    return 0;
}