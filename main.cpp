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

int getMin(const vector<int>& vec){
    int mini = vec[0];
    for (int i = 1; i < vec.size(); i++)
        mini = min(mini, vec[i]);
    return mini;
}

int main(){
    vector<int> v(10);
    for (int i = 0; i < 10; i++)
        v[i] = i+1;

    cout << "vector sum = " << getSum(v) << endl;
    cout << "vector average = " << getAverage(v) << endl;
    cout << "vector minimum = " << getMin(v) << endl;
    
    return 0;
}