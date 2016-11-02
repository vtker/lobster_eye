#ifndef ORGAN_H
#define ORGAN_H


class Light ;


// 所有计算元件的基类

class Organ
{
public:
    Organ();
    ~Organ();



public:
    virtual bool Cross(const Light & )=0 ;

};

#endif // ORGAN_H
