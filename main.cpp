//
//  main.cpp
//  bubble
//
//  Created by Chu Lin on 16/11/6.
//  Copyright © 2016年 Chu Lin. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[] = { 3,55,33,5,99,22,54,18,38,55 };
    int flag = 9;
    int position = 0;
       while (flag) {
        position = 0;
        for(int i=0; i<flag; i++){
            if(a[i]>a[i+1]){
                int n = 0;
                n = a[i+1];
                a[i+1] = a[i];
                a[i] = n;
                position = i;
            }
        }
        flag = position;
    }
    for (int i = 0; i<10; i++) {
        std::cout << a[i]<<" ";
    }
    return 0;
}


