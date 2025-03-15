#include <iostream>
using namespace std;


int main(){
    int matrix [2][3] = {{2, 5, 8},{7, 6, 2}};
    cout << "matrix:\n";
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
           cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
