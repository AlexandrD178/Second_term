#pragma once

class Rollable {
public:
    virtual unsigned roll() = 0;
    virtual ~Rollable() = default;
};