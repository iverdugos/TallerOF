#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    gui.setup();
    gui.add(uiShapeColorA.set("shape color", ofColor(0)));
    gui.add(uiShapeColorB.set("shape border color", ofColor(255)));
    gui.add(uiAmount.set("amount", 1, 0, 30));
    gui.add(uiSpeed.set("speed", -30,-100,100));
    gui.add(uiFill.set("fill", true));
    
    gui.add(uiBgColorA.set("background color A", ofColor(80)));
    gui.add(uiBgColorB.set("background color B", ofColor(0)));
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackgroundGradient(uiBgColorA, uiBgColorB, OF_GRADIENT_CIRCULAR);
    easyCam.begin();
    for(int i = -uiAmount; i < uiAmount; i++){
        for(int j = -uiAmount; j < uiAmount; j++){
            ofPushMatrix();
            ofTranslate(i*90, j*90);
            ofRotateDeg(ofGetElapsedTimef()*uiSpeed);
            ofSetRectMode(OF_RECTMODE_CENTER);
            if(!uiFill){
                ofNoFill();
            } else if(uiFill){
                ofFill();
            }
            ofSetColor(uiShapeColorA);
            ofDrawBox(0, 0, 0, 30, 90, 30);
            ofDrawBox(0, 0, 0, 90, 30, 30);
            ofDrawBox(0, 0, 0, 30, 30, 90);
            
            ofNoFill();
            ofSetColor(uiShapeColorB);
            ofDrawBox(0, 0, 0, 30, 90, 30);
            ofDrawBox(0, 0, 0, 90, 30, 30);
            ofDrawBox(0, 0, 0, 30, 30, 90);
            ofPopMatrix();
        }
    }
    easyCam.end();
    if(bHide){
        gui.draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
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
