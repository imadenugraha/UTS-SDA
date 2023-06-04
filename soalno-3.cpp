#include <iostream>
#include <stack>

int main() {
 
    std::stack<int> stack1;
    std::stack<int> stack2;

    stack1.push(10);
    stack1.push(20);
    stack2.push(10);

    if(stack1.top() == stack2.top()) {
        std::cout << "Stack memiliki elemen yang sama!" << std::endl;
    } else {
        std::cout << "Stack tidak memiliki elemen yang sama!" << std::endl;
    }

    return 0;
}