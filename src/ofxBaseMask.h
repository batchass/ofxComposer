//
//  ofxBaseMask.h
//  ofxComposer-example
//
//  Created by Patricio González Vivo on 5/13/12.
//  Copyright (c) 2012 PatricioGonzalezVivo.com. All rights reserved.
//

#pragma once

#include "ofxXmlSettings.h"
#include "ofxPingPong.h"


class ofxBaseMask : public ofPolyline {
public:
    ofxBaseMask();
    
    bool            loadXmlSettings(ofxXmlSettings &_XML);
    bool            saveXmlSettings(ofxXmlSettings &_XML);
    
    ofxPingPong     maskFbo;
    ofShader        maskShader;
    
    float           maskOpacity;
    int             selectedMaskCorner;
};