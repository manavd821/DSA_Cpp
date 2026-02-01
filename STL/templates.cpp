#include <bits/stdc++.h>
using namespace std;

template<typename T>
struct customeComparator{
    bool operator()(const T& a, const T& b) const{
        int num_of_iteration = 1;
        for(auto it_of_a = a.begin(), it_of_b = b.begin(); (it_of_a != a.end() && it_of_b != b.end()); ++it_of_a, ++it_of_b){
            if(*it_of_a != *it_of_b){
                if(num_of_iteration % 2 == 0) return *it_of_a > *it_of_b; //even
                else return *it_of_a < *it_of_b;
            }
            ++num_of_iteration;
        }
    }
};
// Problem Statement:
// So, I've to create data structure where each data is triplate of integers (a,b,c). I want to store it in specific order. Here, if first value is different, then make them ascending order. If first value is same and second value is different, then second value should be in descending order. If second value is also same, then third value is in ascending order. I will use set as data structure. Explain all the possible way that you've taught me to create this data structure. 

int main() {

    // two method : 1. inbuilt data structure(here tuple) 2. Custom/own Data structure(here Triplate)
    // 1. . inbuilt data structure(here tuple)
    // while using inbuilt data container as type in set:
    // two method for custom comparator : 1). explicit class/struct 2). lambda 

    // 1).explicit class/struct
    // struct cmp{
    //     bool operator()(const tuple<int,int,int> &t1, const tuple<int,int,int> &t2)
    //     {
    //         if(get<0>(t1) != get<0>(t2)) 
    //             return get<0>(t1) < get<0>(t2); //asc
    //         if(get<1>(t1) != get<1>(t2))
    //             return get<1>(t1) > get<1>(t2); // dsc

    //         return get<2>(t1) < get<2>(t2); //asc
    //     }
    // };
    // set<tuple<int,int,int>, cmp>st;
    
    // 2). lambdas
    // auto cmpLambda = [] (const tuple<int,int,int> &t1, const tuple<int,int,int> &t2){
    //     if(get<0>(t1) != get<0>(t2)) 
    //         return get<0>(t1) < get<0>(t2); //asc
    //     if(get<1>(t1) != get<1>(t2))
    //         return get<1>(t1) > get<1>(t2); // dsc

    //     return get<2>(t1) < get<2>(t2); //asc
    // };
    // set<tuple<int,int,int>, decltype(cmpLambda)> st(cmpLambda);
    // st.insert({1,1,1});
    // st.insert({1,2,1});
    // st.insert({2,1,1});
    // st.insert({2,1,3});

    //  for(auto &tp : st){
    //     cout << get<0>(tp) << " " << get<1>(tp) << " " << get<2>(tp) << endl;
    // }

    // 2. Custom Data structure(here Triplate)
    // using own data structure

    struct Triplate{
        int a,b,c;

        bool operator<(const Triplate &other) const {
            if(a != other.a) return a < other.a;
            if (b != other.b) return b > other.b;
            return c < other.c;
        }
    };
    set<Triplate>st;

    st.insert({1,1,1});
    st.insert({1,2,1});
    st.insert({2,1,1});
    st.insert({2,1,3});

    for(auto &tp : st){
        cout << tp.a << " " << tp.b << " " << tp.c << endl;
    }
    return 0;
}