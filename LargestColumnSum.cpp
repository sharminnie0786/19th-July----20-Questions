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
    int arr[10][10];
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            //This will ensure that the number is 3 digits
            arr[i][j] = rand() % 100 + 200;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    int prevColSum = 0;
    int count = 0;
    int colSum = 0;
    int number = 0;
    
    for (int row = 0; row < 10; row++) {
        colSum += arr[row][number];
        count++;
        if (count == 10) {
            if (colSum > prevColSum) {
                prevColSum = colSum;
                number++;
                row = 0;
                count = 0;
            }
            
        }
        
    }
    
    
    cout << "The column with the largest sum is: " << prevColSum << endl;
    
    return 0;
}
