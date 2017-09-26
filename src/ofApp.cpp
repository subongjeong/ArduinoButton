#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //아두이노에서 시리얼 신호를 받아온다.
    serial.listDevices(); //시리얼 디바이스 콘솔창에 출력
    serial.setup(0, 9600); //시리얼 포트와 보드레이트를 셋팅한다.
    
}

//--------------------------------------------------------------
void ofApp::update(){
    unsigned char sensorTmp; //임시로 캐릭터 변수(char)를 하나 만들어 주고
    if(serial.available()){ //시리얼에 값이 들어왔다면 if문을 실행한다.
        sensorTmp = serial.readByte(); //시리얼 값을 하나 받아서 sensorTmp 변수에 넣어 준다.
        if(sensorTmp == '3'){ //값이 3(캐릭터) 이라면
            cout << "GET!" << endl; //콘솔에 출력한다.
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
