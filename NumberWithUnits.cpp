#include "NumberWithUnits.hpp"
using namespace std;

#include<iostream>
#include<string>
#include<fstream>


namespace ariel {
    void NumberWithUnits ::read_units(ifstream& units_file){}

NumberWithUnits operator+( const NumberWithUnits& a,const NumberWithUnits& b){
return NumberWithUnits(a.number,a.type);
}

 NumberWithUnits operator+=( NumberWithUnits& a,const NumberWithUnits& b){

     return NumberWithUnits(a.number,a.type); 
 } 
 NumberWithUnits operator+(const NumberWithUnits& a){
     return NumberWithUnits(a.number,a.type); 
 } 
 NumberWithUnits operator-( const NumberWithUnits& a,const NumberWithUnits& b){

     return NumberWithUnits(b.number,b.type); 
 }
 NumberWithUnits operator-=( NumberWithUnits& a,const NumberWithUnits& b){

     return NumberWithUnits(a.number,b.type); 
 } 
 NumberWithUnits operator-(const NumberWithUnits& a){

     return NumberWithUnits(-a.number,a.type); 
 } 

 // fe ashi naqs lazm arj3
  NumberWithUnits operator++(NumberWithUnits& a){
      return NumberWithUnits(++a.number,a.type);
  }
  NumberWithUnits operator++(NumberWithUnits& a,int c){
      return NumberWithUnits(a.number++,a.type);
  }
  NumberWithUnits operator--( NumberWithUnits& a){
      return NumberWithUnits(--a.number,a.type);
  }
   NumberWithUnits operator--( NumberWithUnits& a,int c){
      return NumberWithUnits(a.number--,a.type);
  }
 bool operator<(const NumberWithUnits& a , const NumberWithUnits& b){
  return true;   
 }
  bool operator<=(const NumberWithUnits& a , const NumberWithUnits& b){
  return true;   
 }
 bool operator>(const NumberWithUnits& a , const NumberWithUnits& b){
  return true;   
 }
 bool operator>=(const NumberWithUnits& a , const NumberWithUnits& b){
  return true;   
 }
  bool operator==(const NumberWithUnits& a , const NumberWithUnits& b){
  return true;   
 }
  bool operator!=(const NumberWithUnits& a , const NumberWithUnits& b){
  return true;
  }   
  ostream& operator<<(ostream& os , const NumberWithUnits& a){
     return os<<'1'<<a.type<<'='<<a.number<<endl;
    }
    
 istream& operator>>(istream& input ,NumberWithUnits& a){
     return input >> a.number >> a.type;
}
 NumberWithUnits operator*( NumberWithUnits& a , double c){
 return NumberWithUnits (a.number,a.type);

}

NumberWithUnits operator*( double c ,NumberWithUnits& a){
 return NumberWithUnits (a.number,a.type);

}


}