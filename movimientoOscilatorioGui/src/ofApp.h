#pragma once

#include "ofMain.h"
//#include "ofxSyphon.h"
#include "ofxGui.h"

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
    
    //ofxSyphonServer syphon;
    ofxPanel gui;
    ofParameter<int> posX;
    ofParameter<int> posY;
    ofParameter<int> uiAmount;
    ofParameter<int> uiOnda;
    ofParameter<float> uiMulti;
    ofParameter<int> uiResolution;
    ofParameter<int> uiRadius;
    ofParameter<float> uiR;
    ofParameter<float> uiG;
    ofParameter<float> uiB;
    ofParameter<bool> uiFill;
    
    
		
};
