//
//  Ball.cpp
//  oops
//
//  Created by usuario on 12-04-20.
//

#include "Ball.hpp"

Ball::Ball(){
    
}

void Ball::setup(float _x, float _y, float _z, int _dim, ofColor _color, int _sphereResolution){
    x = _x;
    y = _y;
    z = _z;
    dim = _dim;
    sphereResolution = _sphereResolution;
    
    //x = ofRandom(0, ofGetWidth());
    //y = ofRandom(0,ofGetHeight());
   
    x = ofGetMouseX();
    y = ofGetMouseY();
    z = 0;
    
    speedX = ofRandom(-1,1);
    speedY = ofRandom(-1,1);
    speedZ = ofRandom(-1,1);
        
    ofSetSphereResolution(_sphereResolution);
    color.set(_color);
}

void Ball::update(){
    if(x<0){
        x=0;
        speedX *= -1;
    } else if(x>ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if(y<0){
        y=0;
        speedY *= -1;
    }else if(y>ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }
    
    if(z<-ofGetHeight()){
        z=-ofGetHeight();
        speedZ *= -1;
    }else if(z>ofGetHeight()){
        z = ofGetHeight();
        speedZ *= -1;
    }
    
    x+=speedX;
    y+=speedY;
    //z+=speedZ;
}

void Ball::draw(){
    ofSetColor(color);
    ofDrawSphere(x, y, z, dim);
}
