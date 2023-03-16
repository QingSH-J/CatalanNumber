//
//  CatalanNumber.cpp
//  CatalanNumber
//
//  Created by 金心羽 on 2023/3/16.
//

#include "CatalanNumber.hpp"

long long CatalanNumber::factorial(long long number1)
{
    long long sum = 1;
    while(number1 != 0)
    {
        sum *= number1;
        number1 --;
    }
    return sum;
}


void CatalanNumber::CatalanNumberInit(long long k)
{
    number = 2 * k;
}

long long CatalanNumber::Calculate()
{
    long long k = number / 2;
    long long M = factorial(number);
    long long MsubN = factorial(k);
    long long N = factorial(k);
    long long MsubNsub1 = factorial(k - 1);
    long long MsubNadd1 = factorial(k + 1);
    long long ans = M / (N * MsubN);
    long long ans1 = M / (MsubNadd1 * MsubNsub1);
    return ans - ans1;
}
