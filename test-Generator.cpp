#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n = rnd.next(1,10);
    println(n);
    int a[n];
    for(int i=0;i<n;i++){
        int x=rnd.next(1,1000000000);
        a[i]=x;
    }
    for(int i=0;i<n;i++){
        if(i==n-1)
            printf("%d",a[i]);
        printf("%d ",a[i]);
    }
}
