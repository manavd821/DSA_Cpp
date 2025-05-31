#include<iostream>
#include<deque>
int main() {
    std::deque<int> dq;

    // Push elements to the front
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);

    // Push elements to the back
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);

    // Display the deque
    std::cout << "Deque elements: ";
    for (const auto& elem : dq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Pop elements from the front
    dq.pop_front();
    std::cout << "After popping front, Deque elements: ";
    for (const auto& elem : dq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Pop elements from the back
    dq.pop_back();
    std::cout << "After popping back, Deque elements: ";
    for (const auto& elem : dq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}