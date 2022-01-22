#include <iostream>
#include <vector>
using namespace std;

int suma(vector<int> v) ; // prototype of function
int sumb(vector<int> &v) ;

//=====================================================
int main()
{
    vector<int> v;
    for(int i = 0; i < 100; i++) {v.push_back(i) ;}
    int sa = suma(v) ;
    cout << "v[10] = " << v[10] << endl ;
    int sb = sumb(v) ;
    cout << "v[10] = " << v[10] << endl ;
    cout << "The sums are: sa = " << sa << ", sb = " << sb << endl ;
}
//=====================================================

int suma(vector<int> v)
{
    int s_ = 0; // convention: use _ for private variables names
    for (int i = 0; i < 100; i++) {s_ += v[i] ;}
    v[10] = 1234 ; //does not change v[10] in the main function
    return s_;
}

int sumb(vector<int> &v)
{
    int s = 0;
    for (int i = 0; i < 100; i++) {s += v[i] ;}
    v[10] = 1234 ;
    return s;
} // no copies are involved, we use aliases here, memory efficient