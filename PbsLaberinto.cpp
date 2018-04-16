/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newsimpletest.cpp
 * Author: b74429
 *
 * Created on 16 de abril de 2018, 07:56 AM
 */

#include <stdlib.h>
#include <iostream>
#include <Laberinto.h>

/*
 * Simple C++ Test Suite
 */

void testLaberinto(int cantidadVrts, double probabilidadAdy) {
    Laberinto laberinto(10,0.3);
    int totalAdy = laberinto.obtTotAdy();
    int totalVrts = laberinto.obtTotVrt();
    int maxAdy = totalVrts*(totalVrts-1);
    if(totalVrts != cantidadVrts) 
        std::cout << "Falló el constructor estándar" << std::endl;
    if(totalAdy > maxAdy)
        std::cout << "Falló el constructor estándar" << std::endl;

}

void test2() {
    std::cout << "newsimpletest test 2" << std::endl;
    std::cout << "%TEST_FAILED% time=0 testname=test2 (newsimpletest) message=error message sample" << std::endl;
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (newsimpletest)" << std::endl;
    test1();
    std::cout << "%TEST_FINISHED% time=0 test1 (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% test2 (newsimpletest)\n" << std::endl;
    test2();
    std::cout << "%TEST_FINISHED% time=0 test2 (newsimpletest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

