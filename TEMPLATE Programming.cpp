Topic(s): 
template class

// ex-1: without function template
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout<< add(3, 4) << endl;
    
    cout << add (4.5, 3.2) << endl;

    return 0;
}


// ex-2: with function template
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout<< add<int>(3, 4) << endl;
    
    cout << add<double>(4.5, 3.2) << endl;

    return 0;
}


// ex-3: without template class
#include <iostream>
using namespace std;

// declaration file - Rectangle.h 
class Rectangle {
    private:
        int lenght;
        int width;
    public:
        Rectangle();
        Rectangle(int, int);
        void setLenght(int l);
        void setWidth(int w);
        int getLength();
        int getWidth();
        void print();
        int getArea();
};

// definition file - Rectangle.cpp 
Rectangle::Rectangle() {
    lenght = 1;
    width = 1;
}
Rectangle::Rectangle(int l, int w) {
    lenght = l;
    width = w;
}
void Rectangle::setLenght(int l) {
    lenght = l;
}
void Rectangle::setWidth(int w) {
    width = w; 
}
// write codes for all getter methods

void Rectangle::print() {
    cout << "lenght: " << lenght << ", width: " << width << endl;
}
int Rectangle::getArea() {
    return (lenght * width);     // also ok
}

// driver file - main.cpp  

int main() {
    // create object 1 
    Rectangle r1(4, 5);
    
    // print object 1's info 
    r1.print();
    cout<<"Area: " << r1.getArea() << endl;
    

    return 0;
}

// ex-4: with template class
#include <iostream>
using namespace std;

// declaration file - Rectangle.h 
template <class T>
class Rectangle {
    private:
        T lenght;
        T width;
    public:
        Rectangle();
        Rectangle(T, T);
        void setLenght(T);
        void setWidth(T);
        T getLength();
        T getWidth();
        void print();
        T getArea();
};

// definition file - Rectangle.cpp 
template <class T>
Rectangle<T>::Rectangle() {
    lenght = 1;
    width = 1;
}
template <class T>
Rectangle<T>::Rectangle(T l, T w) {
    lenght = l;
    width = w;
}
template <class T>
void Rectangle<T>::setLenght(T l) {
    lenght = l;
}
template <class T>
void Rectangle<T>::setWidth(T w) {
    width = w; 
}
// write codes for all getter methods

template <class T>
void Rectangle<T>::print() {
    cout << "lenght: " << lenght << ", width: " << width << endl;
}
template <class T>
T Rectangle<T>::getArea() {
    return (lenght * width);
}

// driver file - main.cpp  

int main() {
    // create object 1 
    Rectangle<double> r1(4.2, 5.3);
    
    // print object 1's info 
    r1.print();
    cout<<"Area: " << r1.getArea() << endl;
    
    // create object 2 
    Rectangle<int> r2(4, 5);
    
    // print object 2's info 
    r2.print();
    cout<<"Area: " << r2.getArea() << endl;
    
    return 0;
}