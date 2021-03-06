//
// Created by riv on 10.09.16.
//

#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include "CTorus.h"
#include "names.h"



class CGameBoard {
public:
    CGameBoard();

    std::vector<CTorus> threeToruses;
    std::vector<IBacterium*> configuredCreatures;
    int now;
    long length;
    long height;

public:
    CGameBoard(long len, long heig);

    void configBacterium(std::vector<long>& properties);

    void configSell(std::vector<long> properties);

    void prepareTorus();

    void changeMode();

    void countCell_bacterium(long index, int random_increase);
    void countCell_bacterium(long box, long small_hei_index,long small_len_index, int random_increase);

    void set_not_init(long index);
    void set_not_init(long box, long small_hei_index,long small_len_index);

    void printTorus();

    bool isCounted(long box, long small_hei_index,long small_len_index);
};

