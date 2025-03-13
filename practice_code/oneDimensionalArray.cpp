#include <iostream>
using namespace std;

int main(){
    int numbers[6] = {2, 5, 8, 9, 10, 15};

    cout << "Array element: ";
    for (int i = 0; i < 6; i++){
        cout << numbers[i] << " ";
    }

    return 0;
}