#ifndef NUM_H
#define NUM_H

class num{
    unsigned int x;
    unsigned int x1;
    unsigned int x2;

    public:
        num();
        num(unsigned int n);
        unsigned int operator+(unsigned int n);
        unsigned int operator-(unsigned int n);
        float operator/(unsigned int n);
        unsigned int operator*(unsigned int n);
        unsigned int operator++();
        unsigned int operator--();
        bool operator==(unsigned int n);
        bool operator!=(unsigned int n);
        bool operator>(unsigned int n);
        bool operator<(unsigned int n);
        bool operator>=(unsigned int n);
        bool operator<=(unsigned int n);
        unsigned int conv();
        void most();

    protected:

    private:
};

#endif // NUM_H
