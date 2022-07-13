#include<random>
#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
#include<climits>
#include<map>
#define check cout<<"check"<<" "
#define rep(a,b,c) for(int a = b ; a < c ;a++)
#define roop(i,n) for(int i = 0; i < (n); ++i)
using namespace std; 
void _main(); 
int main() 
{ 
    cin.tie(0); 
    ios::sync_with_stdio(false);
    _main(); 
}
using REF = vector< vector< int > > ;
using aray = vector< int >;
using Find = vector< vector< bool> >;
using judge = vector< bool >;

void _main()
{
    cout<<"Who are you?"<<endl;
    cout<<"> ";
    string name;
    cin>>name;
    cout<<"Hello, "<<name<<"!"<<endl;
    cout<<"Tossing coin..."<<endl;
    string s[2];
    random_device rnd;
    s[0] = "Heads";
    s[1] = "Tails";
    roop(i,3)
    {
        cout<<"Round "<<i + 1<<": ";
        cout<<s[rnd() % 2]<<endl;
    }
    string s2[2];
    s2[0] = ", ";
    s2[1] = "\n";
    roop(i,2)
    {
        cout<<s[rnd() % 2]<<": "<<i + 1<<s2[i];
    }


}