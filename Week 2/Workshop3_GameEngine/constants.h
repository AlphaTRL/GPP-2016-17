#ifndef _CONSTANTS_H            // prevent multiple definitions if this 
#define _CONSTANTS_H            // ..file is included in more than one place
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

// Useful macros

// Safely delete pointer referenced item
#define SAFE_DELETE(ptr)       { if (ptr) { delete (ptr); (ptr)=NULL; } }
// Safely release pointer referenced item
#define SAFE_RELEASE(ptr)      { if(ptr) { (ptr)->Release(); (ptr)=NULL; } }
// Safely delete pointer referenced array
#define SAFE_DELETE_ARRAY(ptr) { if(ptr) { delete [](ptr); (ptr)=NULL; } }

//Constants

// window
const char CLASS_NAME[] = "Spacewar";
const char GAME_TITLE[] = "Game Engine Part 1";
const bool FULLSCREEN = false;              // windowed or fullscreen
const UINT  GAME_WIDTH = 900;              // width of game in pixels
const UINT  GAME_HEIGHT = 650;              // height of game in pixels

// game
const double PI = 3.14159265;
const float FRAME_RATE = 200.0f;
const float MIN_FRAME_RATE = 10.0f;				// the target frame rate (frames/sec)
const float MIN_FRAME_TIME = 1.0f / FRAME_RATE;	// minimum desired time for 1 frame
const float MAX_FRAME_TIME = 1.0f / MIN_FRAME_RATE;// maximum time used in calculations

// key mappings
// In this game simple constants are used for key mappings. If variables were used
// it would be possible to save and restore key mappings from a data file.
const BYTE ESC_KEY = VK_ESCAPE;         // escape key
const BYTE SPACE_BAR = VK_SPACE;		// space bar

#endif
