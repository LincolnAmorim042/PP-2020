class Stack
{
private:
    int *ptr, topo, nAlocado;
public:
    Stack(); //aloca 4 de inicio
    Stack(int val);
    ~Stack();
    void push(int val);
    int top();
    void pop();
};