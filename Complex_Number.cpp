#include <iostream>
#include <cmath>

using namespace std;

class Complex{
    private:
        float real;
        float imaginary;
    public:
        Complex(const Complex& Cmx){
            real=Cmx.real;
            imaginary=Cmx.imaginary;
        }
        Complex(float r=0.0, float im=0.0){
            real=r;
            imaginary=im;
        }
        void print(){
            cout<<real;
            cout<<((imaginary > 0) ? "+i" : "-i")<<abs(imaginary);
        }
       Complex operator-(){
            return Complex(-real, -imaginary);
        }
        Complex operator+(Complex Cmx){
            Complex num=*this;
            num.real+=Cmx.real;
            num.imaginary+=Cmx.imaginary;
            return num;
        }
        Complex operator*(Complex Cmx) {
            Complex num;
            num.real = (real * Cmx.real - imaginary * Cmx.imaginary);
            num.imaginary = (real * Cmx.imaginary + imaginary * Cmx.real);
            return num; 
        }
        Complex operator/(Complex Cmx){
            Complex num=*this;
            num.real/=Cmx.real;
            num.imaginary/=Cmx.imaginary;
            return num;
        }
        Complex operator~(){
            return Complex(real, -imaginary);
        }
        bool operator==(Complex Cmx){
            if(real==Cmx.real && imaginary==Cmx.imaginary)return 1;
            else return 0;
        }
        Complex operator=(Complex Cmx){
            real=Cmx.real;
            imaginary=Cmx.imaginary;
            return *this;
        }
        bool operator!=(Complex Cmx){
            if(real==Cmx.real && imaginary==Cmx.imaginary)return 0;
            else return 1;
        }
        Complex operator-(Complex Cmx){
            Complex num=*this;
            num.real-=Cmx.real;
            num.imaginary-=Cmx.imaginary;
            return num;
        }
        float operator!(){
            return sqrt(real*real+imaginary*imaginary);
        }
        Complex operator++(){
            Complex num = *this;
            real++;
            return num;
        }
        Complex operator++(int) {
            Complex num = *this;
            imaginary++;
            return num;
        }
        Complex operator--(){
            imaginary--;
            return *this;   
        }
};


int main(){

    return 0;
}