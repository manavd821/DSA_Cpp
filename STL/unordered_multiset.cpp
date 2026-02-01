#include <bits/stdc++.h>

int main() {

    std::unordered_multiset<int>s;
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(40);
    s.insert(10);

    for(auto ele : s)
        std::cout<<ele<<std::endl;
    return 0;
}