#include <iostream>
#include <string>

using namespace std;

class doIt
{
    public:
        doIt() {;}
       ~doIt() {;}

    void riempi (void)
    {
        cout << __LINE__ << endl;
        aString_ = "A" ;
    }
    void stampa (void)
    {
       cout << __LINE__ << endl;
       cout << "String " << aString_ << endl;
    }

    private:
        string aString_ ;

    
} ;

int main ()
{
    //doIt * p;
    doIt* p = new doIt();
    
    p->riempi();
    p->stampa();
}