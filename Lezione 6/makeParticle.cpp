#include <iostream>
#include <particle.h>

int main()
{
    Particle* particle1 = new Particle();
    particle1->setType("muon");
    particle1->setMass(105.568);
    
    std::cout << "Particle1 is a " << particle1->getType()
              << " and has mass: " << particle1->getMass()
              << std::endl;

    return 0;
}