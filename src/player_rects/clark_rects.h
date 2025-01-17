#ifndef __CLARK_RECTS_H__
#define __CLARK_RECTS_H__

#include <SDL2/SDL.h>
#include "i_player_rects.h"

class ClarkRects: public IPlayerRects {

    const int sprite_compensation = 30;
    /// @brief animates the sprite when player its just standing
    SDL_Rect torsoStandRect[4];
    SDL_Rect legsStandRect[1];
    //SDL_Rect torsoRunningRect[4];
    SDL_Rect legsRunningRect[6];

    SDL_Rect torso_position_rect;

public:
    ClarkRects();

    /// Stand
    SDL_Rect* getTorsoStandRect();
    SDL_Rect* getLegsStandRect();
    SDL_Rect* getTorsoRunningRect();

    /// Running
    SDL_Rect* getLegsRunningRect();


    /// Standing
    int getTorsoMaxStandingIndex();
    int getLegsMaxStandingIndex();
    int getTorsoMaxRunningIndex();

    /// Running
    int getLegsMaxRunningIndex();

    /// Positions
    SDL_Rect getTorsoPositionRect(SDL_Rect src);
};

#endif //__CLARK_RECTS_H__