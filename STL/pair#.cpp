#include<iostream>
#include<bits/stdc++.h>

// pair is a container that holds two values of different data types
// used to store two related information together

int main(){
    std::pair<int, int> p;
    p.first = 2;
    p.second = 3;
    std::cout<<p.first<<" "<<p.second<<std::endl;
    std::pair<int, std::string> p2;
    p2 = std::make_pair(50, "HAhahahah");
    
    std::cout<<p2.first<<" "<<p2.second<<std::endl;

    std::pair<int, std::pair<std::string, int> > p3 = {100, {"Manav", 90}};
    std::cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<std::endl;

}