#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(gradientMode.set("modo", 1, 1,3));
    gui.add(color1.set("color A", ofColor::black));
    gui.add(color2.set("color B", ofColor::white));
    

}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if (gradientMode==1) {
      ofBackgroundGradient(color1,color2,OF_GRADIENT_CIRCULAR);
    }
    if (gradientMode==2) {
        
      ofBackgroundGradient(color1,color2,OF_GRADIENT_LINEAR);
    }
    if (gradientMode==3) {
        ofBackgroundGradient(color1,color2,OF_GRADIENT_BAR);
    }
    
    ofxGuiSetBackgroundColor(color3);
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
