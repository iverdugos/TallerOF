#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
 
    ofSetLineWidth(1);

    ofSetWindowTitle("circleLoops");
    //syphon.setName("circleLoops");


    gui.setup();
    gui.add(uiAmount.set("amount", 1,1,30));
    gui.add(uiPower.set("power", ofVec3f(0), ofVec3f(0), ofVec3f(3.0)));
    gui.add(uiRadius.set("radius", 0, 0, 60.0));
    gui.add(uiPosition.set("position", ofVec3f(0), ofVec3f(-ofGetWidth(), -ofGetHeight(), -ofGetWidth()), ofVec3f(ofGetWidth(),ofGetHeight(), ofGetWidth())));
    
    gui.add(drawCircle.set("draw circle", true));
    gui.add(circleFill.set("circle fill", false));
    gui.add(circleRadius.set("circle radius", 30, 0, 500));
    gui.add(circleResolution.set("circle resolution", 15, 1, 40));
    gui.add(drawSphere.set("draw sphere", false));
    gui.add(sphereFill.set("sphere fill", true));
    gui.add(sphereRadius.set("sphere radius", 0, 0, 500));
    gui.add(sphereResolution.set("sphere resolution", 15, 1, 30));
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    

    ofPushMatrix();

    cam.begin();
    ofTranslate(uiPosition->x, uiPosition->y, uiPosition->z);
    float radius = uiRadius;
    for(int i = 0; i < uiAmount; i++){
        float noisex = ofNoise((ofGetElapsedTimef() + i)* uiPower->x);
        float noisey = ofNoise((ofGetElapsedTimef() + i)* uiPower->y);
        float noisez = ofNoise((ofGetElapsedTimef() + i)* uiPower->z);
        
        float x = ofGetWidth()/2 * noisex;
        float y = ofGetHeight()/2 * noisey;
        float z = ofGetHeight()/2 * noisez;


        ofSetCircleResolution(circleResolution);
        ofSetColor(255);
        
        if(circleFill){
            ofFill();
        } else {
            ofNoFill();
        }

        if(drawCircle){
            ofDrawCircle(x, y, z, radius+circleRadius);
        }
        radius +=i;
        

        
        ofEnableDepthTest();
        
        ofSetSphereResolution(sphereResolution);
        ofSetColor(255);
        if(sphereFill)
            ofFill();
        else{
            ofNoFill();
            
        }
        
        if(drawSphere){
            ofDrawSphere(x,y,z,radius+sphereRadius);
            radius+=i;
        }
        ofDisableDepthTest();

    }

    
    cam.end();

    ofPopMatrix();

    
    //syphon.publishScreen();
    
    if (bHide) {
        gui.draw();
    }
}

//--------------------------------------------------------------
void ofApp::exit(){

    
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case 'm':
            bHide = !bHide;
            break;
        case 'c':
            //bHide = !bHide;
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
