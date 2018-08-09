//
//  main.cpp
//  SelectSort
//
//  Created by kidd on 2018/8/9.
//  Copyright © 2018年 Kidd. All rights reserved.
//  

#include <iostream>
using namespace std;

void SelectSort(int arr[], int length){
    int min;
    for (int i = 0; i < length-1; i++) {
        min = i;
        for (int j=i+1; j<length; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(arr[i], arr[min]);
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, Simple selectsort!\n";
    
    int arr[] = {5,8,10,2,1,6};
    SelectSort(arr, 6);
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
