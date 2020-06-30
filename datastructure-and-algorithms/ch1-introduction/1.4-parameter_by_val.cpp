#include <iostream>

void incremmentByVal(int val){
    val++;
}

int main(){
    int i = 10;
    std::cout<<"Value of: "<<i<<std::endl;
    incremmentByVal(i);
    std::cout<<"Value of: "<<i<<std::endl;
    return 0;
}

