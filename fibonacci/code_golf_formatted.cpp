#include <stdio.h>
int main(){
    long double i,l=0,c=1;
    printf("%.0Lf\n",l);
    printf("%.0Lf\n",c);
    for (i=0;i<98;i++){
        printf("%.0Lf\n",c=l+c);
        l=c-l;
    }
}
