#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    gui.setup();
    gui.add(baseNodeControl.set("baseNode Pan y Tilt", ofVec3f(1,0,0), ofVec3f(-5), ofVec3f(5)));
    gui.add(childNodeControl.set("child Node Pan y Tilt", ofVec3f(0,0,3), ofVec3f(-5), ofVec3f(5)));
    gui.add(length.set("length", 500, 1, 4000));
    ofEnableDepthTest();
    baseNode.setPosition(0,0,0);
    childNode.setParent(baseNode);
    childNode.setPosition(200, 0, 200);
    grandChildNode.setParent(childNode);
    grandChildNode.setPosition(0,50,0);
    
    ofSetWindowTitle("lines_experiment");
   // syphon.setName("lines_experiment");
//    ofSetVerticalSync(true);
//    ofSetFrameRate(60);


}

//--------------------------------------------------------------
void ofApp::update(){
    baseNode.panDeg(baseNodeControl->x);
    baseNode.tiltDeg(baseNodeControl->y);
    baseNode.rollDeg(baseNodeControl->z);
    childNode.panDeg(childNodeControl->x);
    childNode.tiltDeg(childNodeControl->y);
    childNode.rollDeg(childNodeControl->z);

    line.addVertex(grandChildNode.getGlobalPosition());
    if(line.size() > length){
        line.getVertices().erase(line.getVertices().begin());
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    cam.begin();

    //baseNode.draw();
    //childNode.draw();
    //grandChildNode.draw();
    line.draw();
    cam.end();
    ofDisableDepthTest();
    //syphon.publishScreen();
    ofPushMatrix();
    gui.draw();
    ofPopMatrix();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case 'c':
            line.clear();
            break;
        case 'r':

            break;
        default:
            break;
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
