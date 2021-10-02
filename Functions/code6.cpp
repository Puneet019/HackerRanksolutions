#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;

    int b;
    cin>>b;

    int c;
    cin>>c;

    int d;
    cin>>d;

    int e;
    e= max((max(a,b)),(max(c,d)));
    cout <<e<<endl;

    return 0;
}
