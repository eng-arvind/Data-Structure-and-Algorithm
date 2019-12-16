#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
  vector<int> a;
  a.push_back(100);
  a.push_back(200);
  a.push_back(300);
  a.push_back(400);
  a.push_back(500);
  vector<int>::iterator itr=a.begin();
  for(;itr!=a.end();itr++)
  cout<<*itr<<" ";
  return 0;
}
