#include<iostream>
using namespace std;
int main() {
    int row,col;
    cout << "Enter row : ";
    cin >> row;

    cout << "Enter Column : ";
    cin >> col;

    int arr[row][col];
    for(int i = 0; i < row; i ++) {
        for(int j = 0; j < col; j ++) {
            cout << "Enter element [" << i << "][" << j << "] : ";
            cin >> arr[i][j]; 
        }
        cout << endl;
    }

    cout << "\nMatrix down below" << endl;

    for(int i = 0; i < row; i ++) {
        for(int j = 0; j < col; j ++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int count = 0;
    for(int i = 0; i < row; i ++) {
        for(int j = 0; j < col; j ++) {
            if(arr[i][j] != 0) {
                count++;
            }
        }
        cout << endl;
    }

    cout << "Triplet representation down below";
    //Triplet representation contains row,column and value of non-zero values that are in the matrix

    int triplet[3][count],k = 0;

    for(int i = 0; i < row; i ++) {
        for(int j = 0; j < col; j ++) {
            if(arr[i][j] != 0) {
                triplet[0][k] = i;
                triplet[1][k] = j;
                triplet[2][k] = arr[i][j];
                k++;
            }
        }
        cout << endl;
    }

    //printing the triplet representation
    for(int i = 0; i < 3; i ++) {
        for(int j = 0; j < count; j ++) {
            cout << triplet[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}