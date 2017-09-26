#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //아두이노에서 시리얼 신호를 받아온다.
    serial.listDevices(); //시리얼 디바이스 콘솔창에 출력
    serial.setup(0, 9600); //시리얼 포트와 보드레이트를 셋팅한다.
    
}

//--------------------------------------------------------------
void ofApp::update(){
    unsigned char sensorTmp;
    if(serial.available()){
        sensorTmp = serial.readByte();
        if(sensorTmp == '3'){
            cout << "GET!" << endl;
        }
    }
    serial.flush();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
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
