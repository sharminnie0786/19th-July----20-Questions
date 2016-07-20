//
//  main.cpp
//  MultiDimensionalArrays
//
//  Created by Sharmyn Kayani on 19/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    const int row = 3;
    const int column = 4;
    int arr[row][column];
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    int temp = 0;
    
    for (int i = 0;  i < column;) {
        for (int j = 0; j < row; j++) {
            if (arr[j][i] > arr[j + 1][i]) {
                temp = arr[j][i];
                arr[j][i] = arr[j + 1][i];
                arr[j + 1][i] = temp;
            }
        }
        i++;
    }
    
    for (int i = 0;  i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    
}