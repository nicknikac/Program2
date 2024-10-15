#ifndef TENNIS_H
#define TENNIS_H

#include "Athlete.h"

class Tennis : public Athlete {
public:
    Tennis();
    Tennis(int serveSpeed, bool serveAndVolley);
    int getServeSpeed();
    void setServeSpeed(int serveSpeed);
    bool getServeAndVolley();
    void setServeAndVolley(bool serveAndVolley);

private:
    int m_serveSpeed;
    bool m_serveAndVolley;
};

#endif // TENNIS_H
