#include <iostream>
using namespace std;

int main(){                             \\To read a datatypes ,use the syntax : scanf("`format_specifier`", &val).

 int p;
 long long int q;
 char r;
 float s;
 double t;

 scanf("%d %lld %c %f %lf",&p,&q,&r,&s,&t);

 printf("%d\n%lld\n%c\n%f\n%lf",p,q,r,s,t);

return 0;
}
