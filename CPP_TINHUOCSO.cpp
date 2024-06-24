// CPP_TINHUOCSO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {

    int so;

    cout << "nhap vao mot so: ";
    cin >> so;

    cout << " uoc so cua " << so << " la: ";

    for (int i = 1; i <= so; ++i) {
        if (so % i == 0) {
 
            cout << i << " ";


        }
   

    }
    cout << endl;

    return 0;

}

    