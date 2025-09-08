#include "ofMain.h"
#include "ofApp.h"

//#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")

//========================================================================
int main( ){
//	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

    ofGLWindowSettings settings;
    settings.setSize(1024,768);
    settings.windowMode = OF_WINDOW;
    
    shared_ptr<ofAppBaseWindow> window = ofCreateWindow(settings);
    
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(window, make_shared<ofApp>());
    ofRunMainLoop();

}
