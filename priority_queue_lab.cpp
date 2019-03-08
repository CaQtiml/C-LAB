#include "bits/stdc++.h"
using namespace std;
#define ii pair<int,int>
int main()
{
    priority_queue<ii,vector<ii>,greater<ii>> pq;
    pq.emplace(8,2);
    pq.emplace(8,11);
    pq.emplace(8,5);
    pq.emplace(7,9);
    pq.emplace(7,6);
    pq.emplace(7,3);
    for(int i=1;i<=6;i++)
    {
        int op = pq.top().second;
        cout << op << " ";
        pq.pop();
    }
}