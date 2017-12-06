#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float n, x, p, q, cp;
    printf("n=");
    scanf("%f", &n);
    printf("x=");
    scanf("%f", &x);
    printf("p=");
    scanf("%f", &p);
    q=(1-p);

    int fact(n){
       int m=1, i;
    for(i=n;i>=n;i--){
            m=m*i;
    }
    return m;
    }

    cp=(fact(n)/(fact(x)*fact(n-x)))*(pow(p,x))*(pow(q,(n-x)));

    printf("cp=%f",cp);

    return 0;
}
