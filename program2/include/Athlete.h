#ifndef ATHLETE_H
#define ATHLETE_H


class Athlete {
public:
    Athlete();
    Athlete(int height, int weight, char gender);
    int getHeight();
    void setHeight(int height);
    int getWeight();
    void setWeight(int weight);
    char getGender();
    void setGender(char gender);

private:
    int m_height;
    int m_weight;
    char m_gender;
};

#endif // ATHLETE_H
