#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    gui.setup();
    gui.add(uiRotation1.set("rotation speed 1", 1, -5, 5));
    gui.add(uiShapeColor1.set("shape 1 color", ofColor(255,63,0,50)));
    gui.add(uiShapeColor2.set("shape 2 color", ofColor(255,0,255,29)));
    gui.add(uiShapeColor3.set("shape 3 color", ofColor(255,147,0,40)));
    gui.add(uiColorBg1.set("background color 1", ofColor(45,0,27)));
    gui.add(uiColorBg2.set("background color 2", ofColor(0)));
    gui.add(uiSyphon.set("syphon send", false));
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    ofEnableDepthTest();
    ofBackgroundGradient(uiColorBg1, uiColorBg2);
    ofPushMatrix();
    ofSetColor(uiShapeColor1);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofNoFill();
    ofSetLineWidth(2);
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    for(int i = 0;i<30;i++){
        ofRotateDeg(ofGetElapsedTimef()*uiRotation1);
        ofScale(0.9);
        ofDrawRectangle(0, 0, 500, 500);
    }
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(uiShapeColor2);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofNoFill();
    ofSetLineWidth(2);
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    for(int i = 0;i<30;i++){
        ofRotateDeg(ofGetElapsedTimef()*uiRotation1*0.5);
        ofScale(0.9);
        ofDrawRectangle(0, 0, 500, 500);
    }
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(uiShapeColor3);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofNoFill();
    ofSetLineWidth(2);
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    for(int i = 0;i<30;i++){
        ofRotateDeg(ofGetElapsedTimef()*uiRotation1*0.33);
        ofScale(0.9);
        ofDrawRectangle(0, 0, 500, 500);
    }
    ofPopMatrix();
    ofDisableDepthTest();
    ofFill();
    if(uiSyphon){
       // syphon.publishScreen();
    }
    if(bHide){
    gui.draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key=='m'||key=='M'){
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
