#include <iostream>
using namespace std;

int main() {
    int a=0, b=1, c=0, n=0, i;
    cout<<"inserisci quante n volte sviluppare la serie di fibonacci."<<endl;
    cin>>n;

    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    while(c<n) {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
   return 0;
}
