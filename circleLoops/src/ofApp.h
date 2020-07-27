#pragma once

#include "ofMain.h"
#include "ofxGui.h"
//#include "ofxSyphon.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    void exit();

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
    ofParameter<int> uiAmount;
    ofParameter<ofVec3f> uiPower;
    ofParameter<float> uiRadius;
    ofParameter<ofVec3f> uiPosition;
    ofParameter<bool> drawCircle;
    ofParameter<bool> circleFill;
    ofParameter<bool> drawSphere;
    ofParameter<bool> sphereFill;
    ofParameter<int> circleRadius;
    ofParameter<int> circleResolution;
    ofParameter<int> sphereRadius;
    ofParameter<int> sphereResolution;
    
    //ofxSyphonServer syphon;

    ofEasyCam cam;
    bool bHide = false;
};
