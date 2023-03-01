#include <iostream>
#include <vector>
#include <string>
#include <utility>
using std::cout;
using std::endl;


void printVector(const std::vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}


template <typename T>
T max(const std::vector<T>& v)
{
    T result {v[0]};

    for (int i = 1; i < v.size(); ++i)
    {
        if (v[i] > result)
            result = v[i];
    }

    return result;
}


int main()
{
    std::vector<int> v1={1, 2, 3};
    std::vector<float> v2={1.1, -8.2, 7.5};
    std::vector<std::string> v3={"Cat", "Dog", "Mouse"};
    std::vector<std::pair<int,int>> v4 {{2,8}, {11,-3}, {5,5}};

    cout << max(v1) << endl;
    cout << max(v2) << endl;
    cout << max(v3) << endl;
    cout << max(v4) << endl;
}