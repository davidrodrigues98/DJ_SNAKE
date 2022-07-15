#include "DJ_SNAKE.h"

#pragma region Configuration definition.

//Main rules.
#define GAME_WIDTH 20
#define GAME_HEIGHT 20
#define STARTING_LENGTH 5
#define STARTING_POINT_X 10
#define STARTING_POINT_Y 10
#define GAME_SPEED_S 0.1
#define DELTA_TIME_MS 10
#define COMPENSATION_TICKS 100

#pragma endregion


#define DBOUT( s )            \
{                             \
   std::ostringstream os_;    \
   os_ << s;                   \
   OutputDebugString( os_.str().c_str() );  \
}
#define N 1