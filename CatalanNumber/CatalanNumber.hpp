//
//  CatalanNumber.hpp
//  CatalanNumber
//
//  Created by 金心羽 on 2023/3/16.
//

#ifndef CatalanNumber_hpp
#define CatalanNumber_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class CatalanNumber
{
public:
    long long number;
public:
    void CatalanNumberInit(long long k);
    long long Calculate();
    long long factorial(long long number);
};
#endif /* CatalanNumber_hpp */
