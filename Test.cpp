#include "doctest.h"
#include"NumberWithUnits.hpp"
#include<string>
using namespace std;
using namespace ariel;

TEST_CASE(" FOR COMPARISON OPERATOR !"){
    NumberWithUnits a (1,"ton");
    NumberWithUnits b (2,"ton");
    NumberWithUnits c (3,"ton");
    CHECK((a>b)==false);
    CHECK((b>a)==true);
    CHECK((a>c)==false);
    CHECK((b>c)==false);
    CHECK((b<c)==true);
    CHECK((a>=c)==false);
    CHECK((a>=b)==false);
    CHECK((b>=c)==false);
    CHECK((b<=c)==true);
    CHECK((a<=c)==true);
    CHECK((a==c)==false);
    CHECK((a==b)==false);
    CHECK((b==c)==false);
    CHECK((a!=c)==true);
    CHECK((a!=b)==true);
}
TEST_CASE("operator + , -,*"){
    NumberWithUnits a{40,"kg"};
     NumberWithUnits b{10,"kg"};
     CHECK ((a+b)==NumberWithUnits{50,"kg"});
     CHECK ((a-b)==NumberWithUnits{30,"kg"});
     CHECK ((b-a)==NumberWithUnits{-30,"kg"});
     CHECK ((+a)==NumberWithUnits{40,"kg"});
     CHECK ((+b)==NumberWithUnits{10,"kg"});
     CHECK ((-a)==NumberWithUnits{-40,"kg"});
     CHECK ((-b)==NumberWithUnits{-10,"kg"});
     CHECK ((a*3)==NumberWithUnits{120,"kg"});
     CHECK ((3*a)==NumberWithUnits{120,"kg"});
     CHECK ((b*2)==NumberWithUnits{20,"kg"});
     CHECK ((2*b)==NumberWithUnits{20,"kg"});

}
TEST_CASE("Example DEMO!"){
    NumberWithUnits a{2,"km"};
    NumberWithUnits b{300,"m"};
    CHECK((a+b)==NumberWithUnits{2.3,"km"});
    CHECK((b+a)==NumberWithUnits{2300,"m"});
    CHECK((b-a)==NumberWithUnits{-1700,"m"});
    CHECK((a-b)==NumberWithUnits{1.7,"km"});
}
