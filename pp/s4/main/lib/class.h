class Complexos{
    double num;
public:
    
    Complexos();
    Complexos(double d);
    
    double operator+(Complexos n);
    double operator-(Complexos n);
    double operator/(Complexos n);
    double operator*(Complexos n);
    
    void operator=(Complexos n);
    
    bool operator==(Complexos n);
    bool operator!=(Complexos n);
    
    void operator++(int);
    void operator--(int);

};