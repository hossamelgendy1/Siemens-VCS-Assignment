#include <iostream>
#include <vector>
using namespace std;

int getSum(const vector<int>& vec){
    int sum = 0;
    for(int i : vec) 
        sum += i;
    return sum;
}

double getAverage(const vector<int>& vec){
    return 1.0 * getSum(vec) / vec.size();
}

int main(){
    vector<int> v(10);
    for (int i = 0; i < 10; i++)
        v[i] = i+1;

    cout << "vector sum = " << getSum(v) << endl;
    cout << "vector average = " << getAverage(v) << endl;

    return 0;
}