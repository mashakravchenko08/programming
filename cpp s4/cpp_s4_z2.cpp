#include <iostream>
#include <string>
#include <vector>
#include <span>
using std::cout;
using std::endl;

void printVector(const std::vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}

std::vector<int> lastDigits1(const std::vector<int>& v)
{
    std:: vector<int> vec(v.size());
    for (int i=0; i < v.size(); ++i)
    {
        vec[i] = v[i]%10; 
    }
    return vec;
}

void lastDigits2(std::vector<int>& v)
{
    for (int i=0; i < v.size(); ++i)
    {
        v[i] = v[i]%10; 
    }
}

void lastDigits3(std::vector<int>* pv)
{
    for (int i=0; i < (*pv).size(); ++i)
    {
        (*pv)[i] = (*pv)[i]%10; 
    }
}

void lastDigits4(std::span<int> sp)
{
    for (int i=0; i < sp.size(); ++i)
    {
        sp[i] = sp[i]%10; 
    }
}

int main()
{
    std:: vector<int> v = {431, 832, 153, 164, 235, 426};
    printVector(lastDigits1(v));
    std:: vector<int> v2 = {43, 83, 153, 13, 23, 43};
    lastDigits2(v2);
    printVector(v2);
    std:: vector<int> v3 = {11, 111, 10, 100};
    std:: vector<int>* pv = &v3;
    lastDigits2(v3);
    printVector(v3);
    std:: vector<int> v4 = {99, 98, 987, 956, 985};
    lastDigits4(v4);
    printVector(v4);
}