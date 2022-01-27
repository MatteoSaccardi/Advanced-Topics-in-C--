#ifndef _particleD_H_
#define _particleD_H_

#include <iostream>

using namespace std;

#define D(s) cout << __LINE__ << "] [" \
                  << __PRETTY_FUNCTION__ << "] " \
                  << s << endl;

class Particle
{
    public:
                Particle(void            ) ;
               ~Particle(void            ) ;


        void    setType (std::string type) {type_ = type ;}
        void    setMass (double      mass) {mass_ = mass ;}

        std::string getType (void        ) {return type_ ;}
        double      getMass (void        ) {return mass_ ;}

        void        dump    (void        ){;}


    private:
        std::string type_ ;
        double      mass_ ;
} ;

#endif