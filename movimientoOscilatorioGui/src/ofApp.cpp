#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);
    gui.setup();
    gui.add(posX.set("Posición Horizontal", ofGetWidth()/2, 0, ofGetWidth()));
    gui.add(posY.set("Inicio", 200, -300, ofGetHeight()));
    gui.add(uiAmount.set("Fin", 400, 1, 3000));
    gui.add(uiRadius.set("Radio", 50, 0, ofGetWidth()-50));
    gui.add(uiOnda.set("Amplitud de onda", 100, 0, ofGetWidth()));
    gui.add(uiMulti.set("Modulacion de onda", 0.025, 0.0, 1.0));
    gui.add(uiResolution.set("Resolución figuras", 40, 1, 40));
    gui.add(uiR.set("Componente color R", 0.012, 0.0, 1.0));
    gui.add(uiG.set("Componente color G", 0.012, 0.0, 1.0));
    gui.add(uiB.set("Componente color B", 0.012, 0.0, 1.0));
    gui.add(uiFill.set("Relleno", false));
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofSetBackgroundColor(0);
    ofSetCircleResolution(uiResolution);
    for(int i=posY;i<uiAmount;i++){
        if(uiFill == false){
            ofNoFill();
        } else if(uiFill == true){
            ofFill();
        }
        ofSetColor(127+127*sin(i*uiR+ofGetElapsedTimef()), 127+127*sin(i*uiG+ofGetElapsedTimef()),127+127*sin(i*uiB+ofGetElapsedTimef()));
        
        ofDrawCircle(posX+uiOnda*sin(i*0.02+ofGetElapsedTimef()), 50+i, 50+uiRadius*sin(i*uiMulti+ofGetElapsedTimef()));
    }
    ofFill();
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
