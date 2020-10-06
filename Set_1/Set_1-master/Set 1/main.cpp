#include <iostream>
#include "account.h"
#include "color.h"
#include "Image.h"
#include "point.h"
#include "Customer.h"
#include "Box.h"
#include "IPAddress.h"
#include<math.h>
using namespace std;
//Account
Account::Account() :
    m_accNumber(0), m_accName(""), m_balance(0) {

}
Account::Account(int id, std::string name, double bal) :
    m_accNumber(id), m_accName(name), m_balance(bal) {

}
Account::Account(const Account& ref) :
    m_accNumber(ref.m_accNumber), m_accName(ref.m_accName),
    m_balance(ref.m_balance) {

}
void Account::credit(double amount) {
    m_balance += amount;
}
void Account::debit(double amount) {
    //min balance check
    m_balance -= amount;
}

double Account::getBalance() const {
    return m_balance;
}
void Account::display() {
    std::cout << m_accNumber << "," << m_accName << ","
              << m_balance << "\n";
}
//End of Account
//Color
Color::Color() :
    m_r(0), m_g(0), m_b(0) {

}
Color::Color(int red, int green, int blue) :
    m_r(red), m_g(green), m_b(blue) {

}
Color::Color(string color) {
    cout<<"Enter the desired color: ";
    cin>>color;
    cout<<color<<endl;
}
Color::Color(color_t x) {
    switch(x) {
    case red:
        cout<<"Red";
        break;
    case blue:
        cout<<"Blue";
        break;
    case green:
        cout<<"Green";
        break;
    case yellow:
        cout<<"Yellow";
        break;
    case black:
        cout<<"Black";
        break;
    default:
        cout<<"Undefined Color";
        break;
    }
}
void Color::invert() {
    m_r=255-m_r;
    m_g=255-m_g;
    m_b=255-m_b;
    cout<<"The Color has been inverted "<<endl;

}
void Color::display() {
    cout<<"The Color composition is as follows: "<<endl;
    std::cout << "Red: "<<m_r << ", Green: " << m_g << ",Blue: " << m_b <<endl;
}
//End of Color
//Image
Image::Image() :
    m_x(0), m_y(0), m_width(0), m_height(0) {

}
Image::Image(int xx, int yy, int ww, int hh) :
    m_x(xx), m_y(yy), m_width(ww), m_height(hh) {

}
Image::Image(const Image& ref) :
    m_x(ref.m_x), m_y(ref.m_y),m_width(ref.m_width), m_height(ref.m_height) {

}
void Image::move(int Quad, int pos1, int pos2) {
    if(Quad==1) {
        m_x=pos1;
        m_y=pos2;
        std::cout<< "Image has been moved to first quadrant and now the position is" << m_x <<","<< m_y ;
    } else if(Quad==2) {
        m_x=pos1;
        m_y=pos2;
        std::cout<< "Image has been moved to second quadrant and now the position is" << m_x<<"," << m_y ;
    }
    if(Quad==3) {
        m_x=pos1;
        m_y=pos2;
        std::cout<< "Image has been moved to third quadrant and now the position is" << m_x <<"," << m_y ;
    }
    if(Quad==4) {
        m_x=pos1;
        m_y=pos2;
        std::cout<< "Image has been moved to forth quadrant and now the position is" << m_x<< "," << m_y ;
    }

}
void Image::scale(int wwww, int hhhh) {
    std::cout << wwww << hhhh<<endl;
}
int Image::resize(int num1, int num2) {
    m_x=m_x+num1;
    m_y=m_y+num2;
    std::cout<< m_x <<"," << m_y<<endl;
}
void Image::display() {
    std::cout << m_x << "," << m_y << "," << m_width << ","<< m_height<<"\n";
}
//End of Image
//Point
Point::Point():
    m_x(0), m_y(0) {
}
Point::Point(int a, int b):
    m_x(a),m_y(b) {
}
Point::Point(const Point& ref) :
    m_x(ref.m_x), m_y(ref.m_y) {
}
void Point::distanceFromOrigin(int a,int b) {
    int d =sqrt((a^2) + (b^2));
    std::cout << "distance from Origin is" << d << "\n";
}
void Point::quadrant(Quadrant x) {
    switch(x) {
    case q1:
        cout<<"First Quadrant";
        break;
    case q2:
        cout<<"Second Quadrant";
        break;
    case q3:
        cout<<"Third Quadrant";
        break;
    default:
        cout<<"Fourth Quadrant";
        break;
    }

}

void Point::isOrigin(int a,int b) {
    if(a==0 && b==0)
        std::cout << "Point is on the Origin";
}

void Point::isOnXAxis(int a,int b) {
    if(b==0)
        std::cout << "Point lies on X axis";
}

void Point::isOnYAxis(int a,int b) {
    if(a==0)
        std::cout << "Point lies on Y axis";
}

void Point::display() {
    std::cout << m_x << "," << m_y << "\n";
}
//End of Point
//Customer
Customer::Customer() :
    m_custId(0), m_phone(0), m_custName(0), m_balance(0) {

}
Customer::Customer(int ph, std::string name, int custid, double bal) :
    m_phone(ph), m_custName(name), m_custId(custid), m_balance(bal) {

}
Customer::Customer(int ph, std::string name, int id) :
    m_phone(ph), m_custName(name), m_custId(id) {

}
Customer::Customer(const Customer& ref) :
    m_custId(ref.m_custId), m_phone(ref.m_phone), m_type(ref.m_type), m_custName(ref.m_custName), m_balance(ref.m_balance) {
}
void Customer::credit(AccountType t) {
    switch(t) {
    case Savings:
        cout<<"Credit money to Savings Account..."<<endl;
    case Current:
        cout<<"Credit money to Current Account..."<<endl;
    }
}
void Customer::makeCall() {
    cout<<"Calling on phone number : "<<m_phone<<" ..."<<endl;
}
double Customer::getBalance() const {
    return m_balance;
}
void Customer::display() {
    std::cout << "Customer ID is: "<<m_custId<<", Account Type: "<<m_type<<", Customer Name: "<<m_custName<<", Balance: " << m_balance <<endl;
}
//End of customer
//Box
Box::Box() :
    m_length(0), m_breadth(0), m_height(0) {

}
Box::Box(int l, int b, int h) :
    m_length(l),m_breadth(b), m_height(h) {

}
Box::Box(int ll) :
    m_length(ll) {
}
Box::Box(const Box& ref) :
    m_length(ref.m_length),m_breadth(ref.m_breadth), m_height(ref.m_height) {

}

void Box::length(int l) {
    m_length=l;
    std::cout<<"Length is: "<<m_length<<endl;
}

void Box::breadth(int b) {
    m_breadth=b;
    std::cout<<"Breadth is: "<<m_breadth<<endl;
}

void Box::height(int h) {
    m_height=h;
    std::cout<<"height is: "<<m_height<<endl;
}

void volume(int l, int b, int h) {
    int vol=l*b*h;
    std::cout<<"Volume is: "<<vol<<endl;
}

void Box::display() {
    std::cout << m_length << "," << m_breadth << ","<< m_height<<"\n";
}
//End of Box
//IPAddress
IPAddress::IPAddress():
    ipval("127.0.0.1") {
}
IPAddress::IPAddress(int w, int x, int y, int z) :
    ipval(to_string(w)+"."+to_string(x)+"."+to_string(y)+"."+to_string(z)) {

}
bool isLoopBack(int w, int x, int y, int z) {
    string temp_ip = to_string(w)+"."+to_string(x)+"."+to_string(y)+"."+to_string(z);
    if (temp_ip == "127.0.0.1") {
        cout<<"Loopback IP"<<endl;
        return true;
    } else {
        cout<<"Not Loopback IP"<<endl;
        return false;
    }
}

int getIPClass(int w, int x, int y, int z) {
    int ip_num;
    int i = 0;
    string temp_str;
    string t_ip = to_string(w)+"."+to_string(x)+"."+to_string(y)+"."+to_string(z);
    while (t_ip[i]!='.') {
        temp_str = temp_str + t_ip[i];
        i++;
    }
    ip_num = stoi(temp_str);
    enum IPClass cls;
    if (ip_num>=1 && ip_num<=127) {
        cls = IPClass::A;
        cout<<"IP Class::"<<char(cls)<<endl;
    } else if (ip_num>=128 && ip_num<=191) {
        cls = IPClass::B;
        cout<<"IP Class::"<<char(cls)<<endl;
    } else if (ip_num>=192 && ip_num<=223) {
        cls = IPClass::C;
        cout<<"IP Class::"<<char(cls)<<endl;
    } else if (ip_num>=224 && ip_num<=239) {
        cls = IPClass::D;
        cout<<"IP Class::"<<char(cls)<<endl;
    }
    return 0;
}
//End of IPAddress
class CANFrame {};

int main() {
    IPAddress ipl;
    IPAddress();
    getIPClass(238,0,0,1);

    Color t(5,5,5);
    t.invert();
    t.display();
    Image i(5,5,20,20);
    i.move(2,5,6);
    i.resize(2,2);
    i.display();
    return 0;
}


