#include <bits/stdc++.h>

// similar to set but allow duplicate elements
// sorted order
// implemented using Red-Black tree or AVL tree
int main() {

    std::multiset<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(40);

    for(auto i : s) std::cout<<i<<std::endl;
    std::cout<<"Write"<<std::endl;
    s.erase(10);
    for(auto i : s) std::cout<<i<<std::endl;
    return 0;
}