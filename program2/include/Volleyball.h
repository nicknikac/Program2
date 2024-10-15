#ifndef VOLLEYBALL_H
#define VOLLEYBALL_H

#include "Athlete.h"
#include <string>
using namespace std;

class VolleyBall : public Athlete {
public:
    VolleyBall();
    VolleyBall(string position, float reactionTime);
    string getPosition();
    void setPosition(string position);
    float getReactionTime();
    void setReactionTime(float reactionTime);

private:
    string m_position;
    float m_reactionTime;
};

#endif // VOLLEYBALL_H
