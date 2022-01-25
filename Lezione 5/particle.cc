#include <particle.h>

//========================================================
Particle::Particle(void)
{

}

//========================================================
void Particle::setType(std::string type)
{
    type_ = type ;
}

//========================================================
void Particle::setMass(double mass)
{
    // The namespace Particle before setMass is important
    mass_ = mass ;
}

//========================================================
std::string Particle::getType(void)
{
    return type_ ;
}

//========================================================
double Particle::getMass(void)
{
    return mass_ ;
}
