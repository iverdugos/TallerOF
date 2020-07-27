#pragma once

#include "ofMain.h"
#include "ofxGui.h"
//#include "ofxSyphon.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    ofxPanel gui;
    ofParameter<int> modeSelektor;
    ofParameter<int> yPos;
    ofParameter<int> end;
    ofParameter<float> waves;
    ofParameter<int> radius;
    ofParameter<int> amplitude;
    ofParameter<int> xPos;
    ofParameter<int> zPos;
    ofParameter<float> multiplier;
    ofParameter<float> uiRotation;
    //ofxSyphonServer syphon;
    ofEasyCam cam;
    int rotation;
    
    


    
    
    
    
		
};
