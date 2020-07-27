#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    rotation = 0;
    
    gui.setup();
    gui.add(modeSelektor.set("modo", 3, 1, 4));
    gui.add(yPos.set("Y posición", -203, -ofGetHeight()/2, ofGetHeight()/2));
    gui.add(xPos.set("X posición", 0, 0, ofGetWidth()));
    gui.add(zPos.set("Z posición", 209, 0, ofGetWidth()));
    gui.add(end.set("fin", 365, 0, 720));
    gui.add(waves.set("ondas", 0.2,0.00, 1));
    gui.add(radius.set("radio", 2, 0, 70));
    gui.add(amplitude.set("amplitud",240 ,0 , 800));
    gui.add(multiplier.set("multiplier",0.02,0,2));
    gui.add(uiRotation.set("rotation speed", 0.5, 0, 1));
    

}

//--------------------------------------------------------------
void ofApp::update(){
    rotation++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    ofSetSphereResolution(50);
    ofFill();
    cam.begin();
    ofRotateYDeg(rotation*uiRotation);
    
    float time = ofGetElapsedTimef()*multiplier;
    
    
    for(int i =0; i< end; i++){
        ofSetColor(255);
        
        
        if(modeSelektor==1){
            ofDrawSphere(xPos+amplitude*sin(i*waves+time), yPos+i ,0 ,radius);
        } else if(modeSelektor==2){
            ofDrawSphere(xPos+amplitude*sin(i*waves+time), yPos+i, 0, radius*sin(0.005+time));
        } else if(modeSelektor==3){
            ofDrawSphere(xPos+amplitude*sin(i*waves+time), yPos+i, 200*sin(i*waves*time), radius);
        } else {
            //ofDrawSphere(0,0,0,20);
            ofDrawSphere(
                xPos+amplitude*sin(i*waves*time),
                        yPos+amplitude*cos(i*waves*time), zPos+amplitude*tan(i*waves*time), radius);
        }
    
    }
    cam.end();
    //syphon.publishScreen();
    
    gui.draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
