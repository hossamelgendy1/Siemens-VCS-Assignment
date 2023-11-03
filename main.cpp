#include <iostream>
#include <vector>
using namespace std;

int getSum(const vector<int>& vec){
    int sum = 0;
    for(int i : vec) 
        sum += i;
    return sum;
}

int main(){
    vector<int> v(10);
    for (int i = 0; i < 10; i++)
        v[i] = i+1;

    cout << "vector sum = " << getSum(v) << endl;
    
    return 0;
}