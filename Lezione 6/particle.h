#ifndef _particle_H_
#define _particle_H_

#include <iostream>

class Particle
{
    public:
                Particle(void            ) ;
               ~Particle(void            ) ;


        void    setType (std::string type) ;
        void    setMass (double      mass) ;

        std::string getType (void        ) ;
        double      getMass (void        ) ;

        void        dump    (void        ){;}
        // In this way, we tell the user that we will implement
        // the dump method to printout properties of a particle
        // at a given time


    private:
        std::string type_ ;
        double      mass_ ;
} ;

#endif