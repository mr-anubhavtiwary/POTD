#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){
    int n{};
    cin>>n;
    for(int i{1};i<=n;++i){
        for(int j{5};j>i;j--) cout<<" "; 
        for(int k{1};k<=i;k++) cout<<"* "; 
        cout<<"\n";
        }
}