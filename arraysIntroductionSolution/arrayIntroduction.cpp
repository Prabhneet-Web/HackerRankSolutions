#include<iostream>

int main(){

    int length;
    std::cin>>length;
    int temp = 0;
    int array[length];

    for(int i = 0; i < length; i++){
        std::cin>>array[i];
    }
    for(int i = 0; i < length/2; i++){
        temp = array[i];
        array[i] = array[(length - 1) - i];
        array[(length -1)- i] = temp;
    }
    for(int i = 0; i < length; i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}