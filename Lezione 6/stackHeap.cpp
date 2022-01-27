#include <iostream>
#include <particleD.h>

void simulate (void) ;
void manipulate(Particle &);
void manipulate(Particle *);

int main()
{
    simulate();
    return 0;
}

void simulate (void)
{
    D("") ; Particle * particleH = new Particle();
    D("") ; Particle   particleS;

    manipulate(particleH);
    manipulate(particleS);

    std::cout << "ParticleH1 is a " << particleH->getType()
              << " and has mass: " << particleH->getMass()
              << std::endl;
    std::cout << "ParticleS is a " << particleS.getType()
              << " and has mass: " << particleS.getMass()
              << std::endl;

    D(""); particleH->dump();
    D(""); particleS.dump();
    D("");
    delete particleH ;
    D("");
}

void manipulate(Particle & p)
{
    p.setType("muon") ;
    p.setMass(105.569);
}

void manipulate(Particle* p)
{
    p->setType("pion") ;
    p->setMass(139.57) ;
}