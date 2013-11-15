#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    
    saveCam.setup(&cam);

}

//--------------------------------------------------------------
void testApp::update(){
    saveCam.update();
}

//--------------------------------------------------------------
void testApp::draw(){

    cam.begin();
    ofRect(20, 20, 20, 20);
    cam.end();
    
    ofDrawBitmapString("press x,c,v to tween between cameras\npress 1,2,3 to save cam positon to xml\n you need xml folder\n", 300,300);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	
    
    
    if(key == 'x'){
        saveCam.tweenNow(0, 2);
    }
    if(key == 'c'){
        saveCam.tweenNow(1, 4);
    }
    if(key == 'v'){
        saveCam.tweenNow(2, 5);
    }
    
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
	
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
	
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
	
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
	
}