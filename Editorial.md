# Editorial
<h3>Brief Description:</h3>
<p>Given an integer N, Second line contains N integers, which are power of spells.
Third line contains N integers, which are health of monsters.
Print a single line containing 'Yes' if wizards can rescue the village or 'No' otherwise.</p>

--------

<h3>Detailed Editorial:</h3>
This question has a very short and easy solution:

as you can easily sort the spells and helaths of monsters in ascending order.
Then start a loop from the first monster's health and compare the spell's power with the health of monster:

If the corresponding monster is stronger than the spell: Just print "No" as the wizards can't save the village.

If you complete the loop and every monster is killed then print "Yes".

**Time Complexity:** O(NlogN).<br>
**Memory Space Complexity** O(N).

<h4>Solution in C++:</h4>

```C++
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
```

