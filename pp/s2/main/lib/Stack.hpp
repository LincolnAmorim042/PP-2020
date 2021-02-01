class Stack{
private:
    int *p, topo, aloc;
public:
    Stack();
    Stack(int val);
    void del();
    void push(int val);
    int top();
    void pop();
};