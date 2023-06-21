# Question
<h1 align="center">Monsters</h1>
There is a magical village where wizards are living and near the village there is a forest where monsters are living one day monsters start coming in village and
kill people of vilage.All the people asked for help from the wizard so wizards prepare some spell to help the peoples.<br><br>
Daily n monsters are coming in village and wizards also prepare n spells.Every i<sup>th</sup> monster has a<sub>i</sub> health and
every j<sup>th</sup> spell has b<sub>i</sub> power.You have to determine if wizards can save the vilage with spells or not.<br>
<h3>Input Format</h3>
<p>First line contains number of monsters and spell - N.Second line contains N integer, which are power of spells.Third line contains N integers, which are health of monsters.</p>
<h3>Output Format</h3>
<p>Print a single line containing 'Yes' or 'No'.</p>
<h3>Input Constraint</h3>
<p>1 < N < 10</p>
<h3>Example</h3>

| Sample Input        | Sample Output |
| ------------------- | ------------- |
| 5<br> 123 146 454 542 456<br>100 328 248 689 200|No            |<br>

>Time Limit: 1 second<br>
>Memory Limit: 256 MB<br>

# Solution

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
        c[i]=b[i]-a[i];
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

