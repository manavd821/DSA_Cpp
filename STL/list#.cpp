#include<iostream>
#include<bits/stdc++.h>

// doubly linked list implementation
// allows duplicate elements
// insertion and deletion can be done from both ends in O(1) time
// not stored in sorted order
// can be traversed in both directions
// used when frequent insertion and deletion operations are required

void display(std::list<int> &l){
    std::cout<<"list Elements:\n";
    for(auto ele : l){
        std::cout<<ele<<" ";
    }
    std::cout<<std::endl;
}

int main(){
    std::list<int> l1;
    l1.push_back(3);
    l1.push_back(4);
    l1.push_front(2);
    l1.push_front(1);
    l1.push_front(10);
    l1.push_back(40);

    display(l1);
    // remove front element 10
    l1.pop_front();
    display(l1);
    // remove back element 40
    l1.pop_back();
    display(l1);

    l1.push_back(100);
    std::cout<<*l1.begin()<<std::endl;
    // using iterator:
    for(auto it = l1.begin(); it != l1.end(); it++){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;

    // reverse print
    for(auto it = l1.rbegin(); it != l1.rend(); it++){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;

    std::cout<<*next(l1.begin(), 2)<<std::endl;
    std::cout<<"SIZE: "<<l1.size()<<std::endl;

    l1.clear();
    display(l1);
}