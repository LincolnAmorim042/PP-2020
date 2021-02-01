#include <iostream>
#include "class.h"
#include <complex>

Complexos::Complexos(){
    double num;
}
Complexos::Complexos(double d){
    num = d;
}
double Complexos::operator+(Complexos n){
    return (num+n.num);
}
double Complexos::operator-(Complexos n){
    return (num-n.num);
}
double Complexos::operator/(Complexos n){
    return (num/n.num);
}
double Complexos::operator*(Complexos n){
    return(num*n.num);
}
void Complexos::operator=(Complexos n){
    num=n.num;
}
bool Complexos::operator==(Complexos n){
    return(num==n.num);
}
bool Complexos::operator!=(Complexos n){
    return(num!=n.num);
}
void Complexos::operator++(int){
    num+1;
}
void Complexos::operator--(int){
    num-1;
}