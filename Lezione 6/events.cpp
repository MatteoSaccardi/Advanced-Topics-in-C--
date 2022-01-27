#include <Event.h>

int main()
{
    Event::vPart_ particles;
    for (int nE = 0; nE < rand()%10; ++nE)
    {
        D("----------- Event ", nE) ;
        Event * event = new Event(nE) ;
        int nPTot = event->make() ;
    }
}

int Event::make(void)
{
    int eM = rand()%10+1 ;
    for (int nP = 0; nP < eM; ++nP)
    {
        int pT = rand()%100;
        string type = "pion";
        if (pT >= 33 && pT < 66) type = "muon" ;
        else if (pT >= 66) type = "proton" ;
        particles_.push_back(new Particle(type));
        particles_.back()->setMomentum() ;
    }

    return particles_.size();

}

void Particle::setMomentum(void)
{
    momentum_[0] = sqrt(rand()%100) ;
    momentum_[1] = sqrt(rand()%100) ;
    momentum_[2] = sqrt(rand()%100) ;
}

void Event::trace(int p)
{
    stringstream ss;
    ss << "Tracing particle " << p
       << " of event " << eventNumber_
       << " (a "
       << particles_[p]->getType()
       << ")" ;
    D(ss.str(),"") ;
}