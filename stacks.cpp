#include <iostream> 
#include <stack>
#include <string>

using namespace std;
int main() {
	stack<int> stack;
	
	stack.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
	stack.push(22);
	stack.push(24);
	stack.push(25);
	int num=0;
	stack.push(num);

	
	while (!stack.empty()) {
		cout << stack.top() <<" " << "\n";
		stack.pop();
	}
}