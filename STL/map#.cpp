#include <bits/stdc++.h>

// It  stores data in key-value pairs and key should be unique -> keys are in ascending order
// Keys are unique and used to access the corresponding values
// Implemented using or Red-Black Tree or AVL tree or Balanced BST or Hash Table
// Provides fast search, insertion, and deletion operations based on keys -> O(log n)

int main() {

    std::map<int, int>m;

    m.insert(std::make_pair(20,30));
    m.insert(std::make_pair(30,310));
    m.insert(std::make_pair(40,330));
    m.insert(std::make_pair(60,300));
    m.insert(std::make_pair(10,309));
    m.insert(std::make_pair(10,390000));

    m[1000] = 787; // insert or update bhi kar deta hai
    m[40] = 4545;
    
    for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++)
        std::cout<<"Key: "<<(*it).first<<", value: "<<(*it).second<<std::endl;
    
    std::cout<<std::endl;
    std::cout<<"Find key: ";
    int n;
    std::cin>>n;
    if(m.count(n)) std::cout<<m[n]<<std::endl;
    else std::cout<<"key "<<n<<" doesn't exist."<<std::endl;
    return 0;
}