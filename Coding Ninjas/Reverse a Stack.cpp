#include <stack>

void reverseStack(stack<int> &input, stack<int> &extra) {
	if(input.size()<=1){
        return;
    }
    int temp=input.top();
    input.pop();
    reverseStack(input,extra);
    while(!input.empty()){
        int t=input.top();
        input.pop();
        extra.push(t);
    }
    input.push(temp);
    while(!extra.empty()){
        int t=extra.top();
        extra.pop();
        input.push(t);
    }
}