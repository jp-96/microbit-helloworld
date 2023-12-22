#include "pxt.h"

namespace helloworld {
    
    //%
    void showAsync() {
        // MicroBitDisplay クラス - https://lancaster-university.github.io/microbit-docs/ubit/display/
        uBit.display.stopAnimation();
        uBit.display.scrollAsync("Hello World!");
    }

}