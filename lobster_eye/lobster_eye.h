#ifndef LOBSTER_EYE_H
#define LOBSTER_EYE_H

#include "organ.h"

class Lobster_Eye: public Organ{
public:
    Lobster_Eye();
    ~Lobster_Eye();




public:
    /// 判断元件与光线是否相交
    virtual bool Cross(const Light & );


};


#endif // LOBSTER_EYE_H

