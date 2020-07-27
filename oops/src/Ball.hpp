//
//  Ball.hpp
//  oops
//
//  Created by usuario on 12-04-20.
//

#ifndef Ball_hpp
#define Ball_hpp



#include "ofMain.h"

class Ball {
public:
    void setup(float _x, float _y,float _z, int _dim, ofColor _color, int _sphereResolution);
    void update();
    void draw();
    
    float x;
    float y;
    float z;
    float speedX;
    float speedY;
    float speedZ;
    int dim;
    int sphereResolution;
    ofColor color;

    Ball();
    
    
private:
    
    
    
};

#endif /* Ball_hpp */
