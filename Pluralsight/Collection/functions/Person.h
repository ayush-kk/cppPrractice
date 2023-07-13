#include<string>

using namespace std;

class Person{
    string firstname;
    string lastname;
    int arbitarynumber;
    
public:
    Person(string first,string last,int arbitary);
    ~Person();

    string GetName() const;
    int GetNumber() const {return arbitarynumber;}
    void SetNumber(int number) {
        arbitarynumber =number;
    }
};