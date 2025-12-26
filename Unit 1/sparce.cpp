#include<iostream>
using namespace std;
int main() {
    int arr[4][4] = {
        {1,2,0,0},
        {3,0,0,0},
        {0,0,0,1},
        {4,5,0,3}
    };

    int count = 0;
    for(int i = 0; i < 4; i ++) {
        for(int j = 0; j < 4; j ++) {
            if(arr[i][j] == 0) {
                count++;
            }
        }
    }

    if(count > (4*4)/2) {
        cout << "\nThis matrix is sparce matrix\n" << endl;
    } else {
        cout << "\nThis matrix is not a sparce matrix\n" << endl;
    }
}