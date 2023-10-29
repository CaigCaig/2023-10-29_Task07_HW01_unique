#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = { 1, 1, 2, 5, 6, 1, 2, 4 };
    vector<int>::iterator it;
    cout << "[IN]: ";
    for (int i = 0; i < v.size(); i++) cout << " " << v[i];
    cout << endl;

    sort(v.begin(), v.end());
    it = unique(v.begin(), v.end());
    v.resize(std::distance(v.begin(), it));

    cout << "[OUT]: ";
    for (int i = 0; i < v.size(); i++) cout << " " << v[i];
    cout << endl;

    system("pause");
}