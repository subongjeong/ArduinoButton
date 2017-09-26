#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //아두이노에서 시리얼 신호를 받아온다.
    serial.listDevices(); //시리얼 디바이스 콘솔창에 출력
    serial.setup(0, 9600); //시리얼 포트와 보드레이트를 셋팅한다.
    
    //비디오를 셋팅한다.
    //video.load("fingers.mov"); //파일 로드하기
    //video.setLoopState(OF_LOOP_NONE); // 루프 셋팅하기 OF_LOOP_NONE, OF_LOOP_NORMAL 등이 있음
}

//--------------------------------------------------------------
void ofApp::update(){
    unsigned char sensorTmp; //임시로 캐릭터 변수(char)를 하나 만들어 주고
    //unsigned char tmp[20] = {}; //값 손실에 대한 설명
    
    if(serial.available()){ //시리얼에 값이 들어왔다면 if문을 실행한다.
      //  serial.readBytes(tmp, 20);
     //    cout << tmp << endl;
        sensorTmp = serial.readByte(); //시리얼 값을 하나 받아서 sensorTmp 변수에 넣어 준다.
        cout << sensorTmp << endl;
        if(sensorTmp == 'a'){ //값에 따라
        //    cout << "GET!" << endl; //콘솔에 출력한다.
            //video.play();
        }
    }
    serial.flush();
    //video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255, 255);
    //video.draw(0,0,800,600); //비디오를 그린다. 좌표 (0,0)에 width 100, height 80
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
