#ifndef _Event_H_
#define _Event_H_

#include <cstdlib>
#include <helpers.h>
#include <iostream>
#include <math.h>
#include <sstream>
#include <vector>

using namespace std;

class Particle
{
    public:
                Particle    (string type) ;
               ~Particle    (void       ) ;
        void    setMomentum (void       ) ;
        string  getType     (void       ) ;
        double* getMomentum (void       ) ;
    
    private:
        string  type_                     ;
        double  momentum_[3]              ;
} ;

class Event
{
    public:
        typedef   vector<Particle *> vPart_ ;
                
                  Event       (int ) ;
                 ~Event       (void) ;
        int       make        (void) ;
        void      trace       (int ) ;
        Particle* getParticle (int ) ;
        vPart_    getParticles(void) ;

    private:
        vPart_ particles_ ;
        int eventNumber_ ;
} ;

#endif