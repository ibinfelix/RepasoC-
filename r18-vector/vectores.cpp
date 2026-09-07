#include <vector>
#include <iostream>
int main(){
    std::vector<int> v = {};
    int capacity=v.capacity();
    // v.reserve(1000);
    for(int i=1;i-1<1000;i++){
        v.push_back(i);
        if(int(v.capacity())!=capacity) std::cout<<v.capacity()<<std::endl;
        capacity = v.capacity();
    }

    return 0;
}