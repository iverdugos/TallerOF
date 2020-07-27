#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofSetBackgroundAuto(false);
    ofBackground(255);
    gui.setup();
    //gui.add(uiPosition.set("light position",ofVec3f(0,0,0), ofVec3f(-300,-300,-300), ofVec3f(300,300,300)));
    gui.add(distance.set("distancia", 60, 0, 500));
    
    gui.add(alpha.set("alpha", 20,0,255));
    //gui.add(lineWidth.set("ancho de linea", 1.0, 0.0, 3.0));
    gui.add(color.set("color", ofColor(0)));

    
    ofSetWindowTitle("lines_experiment");
    //syphon.setName("lines_experiment");
    ofSetVerticalSync(true);
    ofSetFrameRate(60);


}

//--------------------------------------------------------------
void ofApp::update(){
    //light.setPosition(0, 0, 300);

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    //glClearColor(0.0, 0.0, 0.0, 0.0);
    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    //ofEnableLighting();
    //ofEnableDepthTest();
    //light.enable();
    
    //ofSetLineWidth(1);
    ofEnableSmoothing();
    //ofEnableDepthTest();
    
    int time = ofGetElapsedTimef();
    //ofEnableAlphaBlending();

    


    
    for (auto line : lines) {
        ofSetColor(ofColor(color),alpha);
        //ofSetLineWidth(1);
        ofDrawLine(line.a, line.b);
    }
    ofDisableSmoothing();
    
    
    //light.disable();
    //ofDisableDepthTest();
    //ofDisableLighting();
    
    
    //syphon.publishScreen();

    //ofDisableDepthTest();
    if(bHide){
        gui.draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case 'c':
            lines.clear();
            drawnPoints.clear();
            //ofBackground(0);
            break;
        case 'm':
            bHide = !bHide;
            break;
        default:
            break;
    }
    if(key=='s'){
        ofImage screenShot;
        screenShot.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
    screenShot.saveImage("captura"+ofToString(imageCount)+".png");
        imageCount++;
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

    for (auto point : drawnPoints){
        ofPoint mouse;
        mouse.set(x,y);
        float dist = (mouse - point).length();
        if (dist < distance){
            Line lineTemp;
            lineTemp.a = mouse;
            lineTemp.b = point;
            lines.push_back(lineTemp);
        }
    }
    drawnPoints.push_back(ofPoint(x,y));
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
