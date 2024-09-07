#ifndef PROJECT_API_H
#define PROJECT_API_H

#pragma once

class API {

public:

    static bool wallFront();
    static bool wallRight();
    static bool wallLeft();

    static void moveForward(int distance = 1);
    static void turnRight();
    static void turnLeft();
};

#endif //PROJECT_API_H
