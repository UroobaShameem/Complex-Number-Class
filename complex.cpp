#include<iostream>
using namespace std;
class complex      //declearing class name
{
    public:
    int real;     //declearing variables
    int imag;
    
    complex()    //null constructor
    {
        real=5;
        imag=3;
    }

    complex(int r,int i)  //parametric constructor
    {
        real=r;
        imag=i;
    }

    complex(const complex& copied)  //copy constructor
    {
        real= copied.real;
        imag= copied.imag;
    }

    void add(complex no1, complex no2) //addition
    {
        real= no1.real + no2.real;
        imag= no1.imag + no2.imag;
    }

    void sub(complex no1, complex no2) //subtraction
    {
        real= no1.real - no2.real;
        imag= no1.imag - no2.imag;
    }

    void mul(complex no1, complex no2) //multiplication
    {
        real= no1.real * no2.real;
        imag= no1.imag * no2.imag;
    }


    void display()  //display function
    {
        cout<<real<<"+("<<imag<<")i"<<endl;
    }


};
int main()
{
    complex a; //envoking null constructor
    
    complex b(5,3) ; //envoking parametarized constructor
    cout<<"Values from parametrized constructor\n";
    b.display();
    
    complex c(-8,1); //taking new values in parametrized constructor
    complex d(c); //envoking copy constructor
    cout<<"Values from copy constructor\n";
    d.display();

    complex tadd; //addition
    tadd.add(b,c);
    cout<<"Addition: ";
    tadd.display();

    complex tsub; //subtraction
    tsub.sub(b,c);
    cout<<"Subtraction: ";
    tsub.display();

    complex tmul; //multiplication
    tmul.mul(b,c);
    cout<<"Multiplication: ";
    tmul.display();
    
    
    return 0;
}