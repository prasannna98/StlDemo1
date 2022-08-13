#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1={10,20,30,40,50,5,9,98};
    cout<<"v1:{";
    for_each(begin(v1),end(v1),[](const auto& x){cout<<x<<" ";});
    cout<<"}"<<endl;
    return 0;
}