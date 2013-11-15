//
//  ofxCameraMove.h
//  emptyExample
//
//  Created by strimbob on 14/08/2013.
//
//

#pragma once

#include "ofMain.h"
#include "ofxXmlSettings.h"
#include "ofxTweener.h"

#define numberSaveFiles 3 // this is problem want to make is so a can set the array in code can you help!!???




class ofxCameraMove {
	
public:
    ofxCameraMove();
    ~ofxCameraMove();
	void setup(ofEasyCam *_cam);
    void update();    
    void tweenNow(int cameraNumber,float time);
    void cutNow(int cameraNumber);
    void getNumberOfCamFormXML();
    void keyPressed(ofKeyEventArgs &args);
    vector<string> loadString(string path);
    float start;
    float end;
private:
    ofEasyCam camArray[numberSaveFiles];
    vector<ofEasyCam *> target;
	ofEasyCam *cam;
    ofVec3f startPos;
    ofQuaternion startQuat;
    ofQuaternion targetQuat;
    ofQuaternion whater;
    ofQuaternion targetQu;
    ofVec3f targetPos;
    float pre;
};

