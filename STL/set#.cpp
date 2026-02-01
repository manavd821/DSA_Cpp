#include <bits/stdc++.h>

// only unique elements are stored
// elements are stored in sorted order(dafult accending)
// Insertion, Deletion, Search -> O(log n) time complexity
// Generally implemented using Balanced BST (like Red-Black Tree)
// We can sort it in decreasing order by using greater<int> as comparator

void ascendingOrder()
{
    std::set<int> s;
    // insert
    s.insert(10);
    s.insert(1001);
    s.insert(102);
    s.insert(100);
    s.insert(90);
    s.insert(80);
    s.insert(50);
    s.insert(40);
    s.insert(30);
    s.insert(20);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
void descendingOrder()

{
    // descending order
    std::set<int, std::greater<int>> s2;
    // insert
    s2.insert(10);
    s2.insert(1001);
    s2.insert(102);
    s2.insert(100);
    s2.insert(90);
    s2.insert(80);
    s2.insert(50);
    s2.insert(40);
    s2.insert(30);
    s2.insert(20);

    for (auto it = s2.begin(); it != s2.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}



int main()
{
    descendingOrder();
    // ascending order
    std::set<int> s;
    // insert
    s.insert(10);
    s.insert(1001);
    s.insert(102);
    s.insert(100);
    s.insert(90);
    s.insert(80);
    s.insert(50);
    s.insert(40);
    s.insert(30);
    s.insert(20);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // search element
    int n = 100;
    if(s.find(n) != s.end()){
        std::cout<<"Element Present: "<<*s.find(n)<<std::endl;
    }
    else{
        std::cout<<"Not Found: "<<*s.find(n)<<std::endl;
    }
    // or method 2 to find any element:
    if(s.count(n)) std::cout<<"Present\n";
    else std::cout<<"Absent\n";

    // delete
    std::cout<<s.count(1001)<<std::endl;
    s.erase(1001);
    std::cout<<s.count(1001)<<std::endl;
    return 0;
}

