//
//  PaintingWrapper.cpp
//  
//
//  Created by Ken Liu on 11/17/15.
//
//

#include "PaintingWrapper.h"

PaintingWrapper::PaintingWrapper(painting* p):ptr(p){
    
}

PaintingWrapper::~PaintingWrapper(){
    delete ptr;
}

painting&  PaintingWrapper::operator*(){
    return *ptr;
}

painting*  PaintingWrapper::operator->(){
    return ptr;
}