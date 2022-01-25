#include <iostream>
#include <particle.h>

int main()
{
    Particle * particle1 = new Particle() ;
    /*
    The new operator allocates memory to contain the variables
    that represent the internal state of a particle object
    (here, mass_ and type_). Once the allocation is successful
    (internally done with a malloc), the new operator returns
    a pointer pointing to the first byte of the allocated memory,
    which will be treated in a dynamic way.
    */
    particle1->setType("muon" ) ;
    particle1->setMass(105.568) ;

    std::cout << "Particle1 is a " << particle1->getType()
              << " and has mass: " << particle1->getMass()
              << std::endl ;
    
    return 0 ;

}