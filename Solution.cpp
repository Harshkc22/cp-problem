
#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin>>n;
      int a[n];
      int b[n];
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
      for(int i=0;i<n;i++){
         cin>>b[i];
      }
      sort(a,a+n);
      sort(b,b+n);
      int c[n];
      int flag=1;
      for(int i=0;i<n;i++){
        c[i]=a[i]-b[i];
      }
      for(int i=0;i<n;i++){
        if(c[i]<0){
          flag=0;
          break;
        }
      }
      if(flag==1){
        cout<<"Yes";
      }
      else{
        cout<<"No";
      }
}

