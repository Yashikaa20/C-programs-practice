//fibonacci series
#include <iostream>
using namespace;
int main(){
  int i;
  int n;
  int a=0;
  int b=1;
  cout<<"enter the value of n:";
  cin>>n;
  cout<<a<<" "<<b<<" ";
  for(i=1;i<=n;i++){
    int nextnum=a+b;
    cout<<nextnum<<" ";
    a=b;
    b=nextnum;
  }
}