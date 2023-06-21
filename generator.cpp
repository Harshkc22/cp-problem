#include<bits/stdc++.h>
#include "testlib.h"
using namespace std;

void file(){
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	#endif
}
void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
}

int main(){
	file();
	fast();
	int idx=3;
	char x[]="out000.txt";
	for(int j=0;j<10;j++){
		if(x[idx]=='9')
			idx++;
		freopen(x,"w",stdout);
		x[idx]++;
		int n = rnd.next(1,10);
	    cout<<n<<endl;
	    long long a[n];
	    long long b[n];
	    for(int i=0;i<n;i++){
	    	
	        long long x=rnd.next(1,1000000000);
	        a[i]=x;
	    }
	    for(int i=0;i<n;i++){
	        if(i==n-1)
	            printf("%d\n",a[i]);
	        else
	        	printf("%d ",a[i]);
	        
	    }
	    for(int i=0;i<n;i++){
	    	
	        long long x=rnd.next(1,1000000000);
	        b[i]=x;
	    }
	    for(int i=0;i<n;i++){
	        if(i==n-1)
	            printf("%d\n",b[i]);
	        else
	        	 printf("%d ",b[i]);
	       
	        
	    }
    }
}