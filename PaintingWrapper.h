//
//  PaintingWrapper.h
//  
//
//  Created by Ken Liu on 11/17/15.
//
//

#ifndef ____PaintingWrapper__
#define ____PaintingWrapper__

#include <stdio.h>

#endif /* defined(____PaintingWrapper__) */

class PaintingWrapper
{
public:
    PaintingWrapper(painting* p);
    ~PaintingWrapper();
    painting& operator*();
    painting* operator->();
private:
    painting *ptr;
};