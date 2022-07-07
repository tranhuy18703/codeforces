#include <iostream>
 
using namespace std;
void createarray(int a[],int m) {
    for (int i=1;i<m-1;i+=2) {
        if (a[i-1]==0) {
            a[i]=a[i+1]=1;
        }
        else {
            a[i]=a[i+1]=0;
        }
    }
    if (a[m-2]==0) {
        a[m-1]=1;
    }
    else {
        a[m-1]=0;
    }
}
void printarray(int a[],int m) {
    for (int i=0;i<m;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main () {
     int t;
     cin>>t;
     while (t--) {
         int m,n;
         cin>>n>>m;
         int a1[m];
         int a2[m];
         int a3[n];
         a1[0]=1;
         createarray(a1,m);
         a2[0]=0;
         createarray(a2,m);
         a3[0]=1;
         createarray(a3,n);
         for (int i=0;i<n;i++) {
             if (a3[i]==1) {
                 printarray(a1,m);
             }
             else {
                 printarray(a2,m);
             }
         }
     }
 }
