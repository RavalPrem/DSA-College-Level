#include<iostream>
using namespace std;
bool lowerTriangularMatrix(int arr[4][4]) {
    for(int i = 1;i < 4; i ++) {
        for(int j = i + 1; j < 4; j ++) {
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
        {7,0,0,0},
        {5,5,0,0},
        {3,0,5,0},
        {1,2,3,5},
    };

    if(lowerTriangularMatrix(arr)) {
        cout << "\nThis matrix is lowerTriangularMatrix \n" << endl;
    } 
    else {
        cout << "\nThis matrix is not lowerTriangularMatrix \n" << endl;
    }

    return 0;
}