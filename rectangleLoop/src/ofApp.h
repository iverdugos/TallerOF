#pragma once

#include "ofMain.h"
#include "ofxGui.h"
//#include "ofxSyphonServer.h"

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
    ofParameter<float> uiRotation1;
    ofParameter<ofColor> uiShapeColor1;
    ofParameter<ofColor> uiShapeColor2;
    ofParameter<ofColor> uiShapeColor3;
    ofParameter<ofColor> uiColorBg1;
    ofParameter<ofColor> uiColorBg2;
    ofParameter<bool> uiSyphon;
    bool bHide = false;
    
    //ofxSyphonServer syphon;
};
