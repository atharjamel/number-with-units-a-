#include<istream>
#include<string>
 using namespace  std;
namespace ariel {
    class NumberWithUnits
    {
    
    double number;
    string type;
    public:
        NumberWithUnits(double num,string tp){
            this->number=num;
            this->type=tp;
        }
   
        static void read_units(ifstream& file);
        friend NumberWithUnits operator+(const NumberWithUnits& a,const NumberWithUnits& b);
        friend NumberWithUnits operator+=( NumberWithUnits& a,const NumberWithUnits& b);
        friend NumberWithUnits operator+(const NumberWithUnits& a);
        friend NumberWithUnits operator-(const NumberWithUnits& a,const NumberWithUnits& b);
        friend NumberWithUnits operator-(const NumberWithUnits& a);
        friend NumberWithUnits operator-=( NumberWithUnits& a,const NumberWithUnits& b);
        friend NumberWithUnits operator++( NumberWithUnits& a);
        friend NumberWithUnits operator++( NumberWithUnits& a,int c);
        friend NumberWithUnits operator--( NumberWithUnits& a);
        friend NumberWithUnits operator--( NumberWithUnits& a,int c);
        friend NumberWithUnits operator*( NumberWithUnits& a , double c);
        friend NumberWithUnits operator*(double c , NumberWithUnits& a);
        friend ostream& operator<<(ostream& os , const NumberWithUnits& a);
        friend istream& operator>>(istream& input ,NumberWithUnits& a);
 
        friend bool operator<(const NumberWithUnits& a , const NumberWithUnits& b);
        friend bool operator<=(const NumberWithUnits& a , const NumberWithUnits& b);
        friend bool operator>(const NumberWithUnits& a , const NumberWithUnits& b);
        friend bool operator>=(const NumberWithUnits& a , const NumberWithUnits& b);
        friend bool operator==(const NumberWithUnits& a , const NumberWithUnits& b);
        friend bool operator!=(const NumberWithUnits& a , const NumberWithUnits& b);
        



    };


    };
  