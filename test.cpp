// The MIT License (MIT)

// Copyright (c) 2019 Victor

//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

/* code */


#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

vector<int> get_number(int);
bool is_c(int);

int main(void)
{
    for (int i = 1; i < 8; i++)
    {
        vector<int> result = get_number(i);
        cout<< i << ":" << result.size() << endl;
        for (int j = 0; j < result.size(); j++)
        {
            cout << "    " << result.at(j) << " ";
        }
        cout << endl;
    }

    cin.get();
    return 0;
}

vector<int> get_number(int n)
{
    vector<int> result;
    int start = pow(10, (n-1));
    int end = pow(10, n)-1;
    if (n == 1)
    {
        start = 0;
    }

    for (int i = start; i <= end; i++)
    {
        if (is_c(i))
        {
            result.push_back(i);
        }
    }

    return result;
}

bool is_c(int number)
{
    vector<int> digits;
    int i = 10;
    int tmp = number;
    while(tmp > 0)
    {
        int digit = tmp%10;
        tmp = tmp/10;
        digits.push_back(digit);
    }

    int n = digits.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += pow(digits.at(i), n);
    }

    if (sum == number)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}