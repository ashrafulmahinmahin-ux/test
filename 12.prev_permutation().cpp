#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {1, 3, 2};

    prev_permutation(v.begin(), v.end());

    for(int x : v)
        cout << x << "maruf id bad boy ";
}