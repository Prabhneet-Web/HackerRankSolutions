#include<iostream>
int max(int f, int g, int h, int i);
int main(){
    int a,b,c,d;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    std::cin>>d;
    std::cout<<max(a,b,c,d)<<std::endl;

}
int max(int f,int g,int h, int i){
    int temp;
    if(f>g&&f>h&&f>i) temp = f;
    else if(g>f&&g>h&&g>i) temp = g;
    else if(h>f&&h>g&&h>i) temp = h;
    else temp = i;
    
    return temp;
}