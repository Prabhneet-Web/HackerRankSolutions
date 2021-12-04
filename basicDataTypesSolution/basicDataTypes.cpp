#include<iostream>

int main(){
    int a;
    long long int l;
    char c;
    float f;
    double d;

    scanf("%d %lld %c %f %lf", &a,&l,&c,&f,&d);

    printf("%d\n%lld\n%c\n%.3f\n%.9lf",a,l,c,f,d);

    return 0;
}