#include <bits/stdc++.h>

// singly linked list implementation
// allows duplicate elements
// insertion and deletion can be done from front in O(1) time
// not stored in sorted order
// can be traversed only in forward direction

int main() {

    std::forward_list<int>li = {1,2,3,4,5,6,7,8,9,10};

    if (li.empty()) {
        std::cout << "The forward_list is empty." << std::endl;
    }
    else{
        std::cout<<"Not empty\n";
    }
    auto it = next(li.begin(), 5);
    std::cout<<*it<<std::endl;

    // insert after 6th element
    li.insert_after(it, 11);

    for(auto it : li){
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;
    
    // find element
    auto it1 = find(li.begin(), li.end(), 10);
    if(it1 != li.end()) std::cout<<*it<<std::endl;
    else std::cout<<"Element not found"<<std::endl;
    // std::cout<<*it1<<std::endl;
    
    for(auto i = li.begin(); i!= li.end(); i++){
        std::cout<<*i<<" ";
    }
    std::cout<<std::endl;
    
    std::cout<<distance(li.begin(), li.end())<<std::endl;
    // delete first element
    std::cout<<"Pop first element:\n";
    li.pop_front();
    for(auto i = li.begin(); i!= li.end(); i++){
        std::cout<<*i<<" ";
    }
    std::cout<<std::endl;
    
    // remove 11 from list
    std::cout<<"Pop 11 element:\n";
    std::forward_list<int>::iterator it2 = li.begin();
    advance(it2, 4);
    li.erase_after(it2);
    for(auto i = li.begin(); i!= li.end(); i++){
        std::cout<<*i<<" ";
    }
    std::cout<<std::endl;
    return 0;
}