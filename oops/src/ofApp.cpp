#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
    gui.setup();
    gui.add(ballColor.set("ballColor", ofColor(255)));
    gui.add(randomSize.set("randomSize", true));
    gui.add(ballSize.set("ballsize", 5, 0, 100));
    gui.add(sphereRes.set("sphere res", 2, 2, 50));
    light.setPosition(30, 0, 1500);
    ofEnableSmoothing();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<groupOfBalls.size(); i++){
        groupOfBalls[i].update();
        
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableLighting();
    ofEnableDepthTest();
    light.enable();
    //cam.begin();
    
   for(int i=0; i<groupOfBalls.size(); i++){
        groupOfBalls[i].draw();
   }
    
    //cam.end();
    light.disable();
    ofDisableDepthTest();
    ofDisableLighting();
    //syphon.publishScreen();
    
    if(bHide){
        gui.draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'c' || key == 'C'){
    groupOfBalls.clear();
    }
    
    if(key == 'm' || key == 'M'){
        bHide = !bHide;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

    Ball tempBall;                            // create the ball object
    if(randomSize){
        tempBall.setup(x,y,0, ofRandom(1,ballSize), ballColor, sphereRes);
    }else{
        tempBall.setup(x,y,0, ballSize, ballColor, sphereRes);
    }   // setup its initial state
    groupOfBalls.push_back(tempBall);
    // add it to the vector
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    
    
    for (int i =0; i < groupOfBalls.size(); i++) {
        float distance = ofDist(x,y, groupOfBalls[i].x, groupOfBalls[i].y); // a method oF gives us to check the distance between two coordinates
        
        if (distance < groupOfBalls[i].dim) {
            groupOfBalls.erase(groupOfBalls.begin()+i); // we need to use an iterator/ reference to the vector position we want to delete
        }
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
