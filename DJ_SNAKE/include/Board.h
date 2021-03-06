#include "Objects.h"
#pragma once

class Board {

    Prefabs _matrix[GAME_WIDTH][GAME_HEIGHT];

    std::map<Prefabs, const wchar_t> _translator = {
        {SNAKE_BODY, L'\u2588' },
        {BORDER_HORIZONTAL, L'\u2550'},
        {BORDER_VERTICAL, L'\u2551'},
        {BLANK, L'\u00A0'},
        {UNKNOWN, L'?'},
        {APPLE, L'\u2666'},
        {CARRIAGE_RETURN, L'\u000D'},
        {LINE_FEED, L'\u000A'}
    };

public:

    Board();

    int GetSetBoard(int x, int y, Prefabs object);

    Prefabs GetSetBoard(int x, int y);

#pragma region Board Management

    int PrintBoard();

    int ClearBoard(bool _print = false);

#pragma endregion
};
