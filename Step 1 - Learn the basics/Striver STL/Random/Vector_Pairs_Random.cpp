#include <bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int, int>> &v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main()
{
    vector<pair<int, int>> v = {{1,2}, {2,3}, {7,9}};
    printVector(v);

}