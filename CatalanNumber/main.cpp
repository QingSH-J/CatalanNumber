//
//  main.cpp
//  CatalanNumber
//
//  Created by 金心羽 on 2023/3/16.
//

#include <iostream>
#include "CatalanNumber.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    //test your code here
    CatalanNumber number;
    number.CatalanNumberInit(6);
    long long number1 = number.Calculate();
    cout << number1 << endl;
    return 0;
}
