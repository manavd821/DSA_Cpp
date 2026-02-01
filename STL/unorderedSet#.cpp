#include <bits/stdc++.h>

// stores unique values but in random order
// Search, Insert, Delete in O(1)
// It uses hashing technique to implement
// Don't allow duplicate element -> auto remove if anything is repeated
// for duplicate element -> unordered_multiset
int main() {

    std::unordered_set<int>s;
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    s.insert(70);
    s.insert(80);
    s.insert(90);

    for(auto ele : s){
        std::cout<<ele<<std::endl;
    }
    return 0;
}