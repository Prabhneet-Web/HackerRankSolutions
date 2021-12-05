#include<iostream>

int main(){

    int number;
    std::cin>>number;

    if(number == 1) std::cout<<"one"<<std::endl;
    else if(number == 2) std::cout<<"two"<<std::endl;
    else if(number == 3) std::cout<<"three"<<std::endl;
    else if(number == 4) std::cout<<"four"<<std::endl;
    else if(number == 5) std::cout<<"five"<<std::endl;
    else if(number == 6) std::cout<<"six"<<std::endl;
    else if(number == 7) std::cout<<"seven"<<std::endl;
    else if(number == 8) std::cout<<"eight"<<std::endl;
    else if(number == 9) std::cout<<"nine"<<std::endl;
    else std::cout<<"Greater than 9"<<std::endl;

    return 0;
}