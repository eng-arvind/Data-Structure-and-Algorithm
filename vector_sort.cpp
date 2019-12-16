#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
//bool f(int x,int y)
//{
//  return x>y;
//}
int main()
{
  vector<int> b;
  b.push_back(2);
  b.push_back(1);
  b.push_back(7);
  b.push_back(5);
  b.push_back(4);
  sort(b.begin(),b.end());
  vector<int>::iterator itr;
  for(itr=b.begin();itr!=b.end();itr++)
  cout<<*itr<<" ";
  bool present=binary_search(b.begin(),b.end(),7);
  cout<<endl;
  cout<<present;
  return 0;
}
