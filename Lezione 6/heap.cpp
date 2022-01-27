#include <iostream>
#include <particle.h>

void simulate (void);
void manipulate(Particle*);

int main()
{
    simulate();
    return 0;
}

void simulate(void)
{
    Particle * particle1 = new Particle() ;

    manipulate(particle1);

    std::cout << "Particle1 is a " << particle1->getType()
              << " and has mass: " << particle1->getMass()
              << std::endl;

}

void manipulate(Particle* p)
{
    p->setType("muon");
    p->setMass(105.568);
}