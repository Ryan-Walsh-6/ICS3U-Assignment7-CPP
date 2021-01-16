// Copyright (c) 2021 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on January 15 2021
// this program concatenates two lists

#include <iostream>
#include <string>
#include <iomanip>
#include <list>
#include <array>

// template <int rows, int cols>[rows][cols]
std::list<std::string> concatenating_the_list(std::list<std::string> list_input,
                                        std::list<std::string> list_input_2) {
    // concatenating two lists
    std::list<std::string> mergedlist;

    mergedlist = list_input;

    for (std::string input_element : list_input_2) {
        mergedlist.push_back(input_element);
    }

    return mergedlist;
}


int main() {
    // this program concatenates two lists
    std::list<std::string> list_input;
    std::list<std::string> list_input_2;
    std::string element_from_user = "";
    std::list<std::string> concatenated_list;



    // input
    std::cout << "Please enter 1 element at a time. Enter STOP at the end."
    << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the elements for your first list." << std::endl;
    std::cout << "Enter an element:";
    std::cin >> element_from_user;
    list_input.push_back(element_from_user);
    while (element_from_user != "STOP") {
        std::cout << "Enter an element:";
        std::cin >> element_from_user;
        list_input.push_back(element_from_user);
    }

    list_input.pop_back();
    std::cout << "" << std::endl;

    std::cout << "Enter the elements for your second list." << std::endl;
    std::cout << "Enter an element:";
    std::cin >> element_from_user;
    list_input_2.push_back(element_from_user);
    while (element_from_user != "STOP") {
        std::cout << "Enter an element:";
        std::cin >> element_from_user;
        list_input_2.push_back(element_from_user);
    }

    list_input_2.pop_back();
    std::cout << "" << std::endl;

    concatenated_list = concatenating_the_list(list_input, list_input_2);

    std::cout << "The concatenated list is:" << std::endl;
    std::cout << "" << std::endl;
    std::string fmt ="[";
    for (std::string counter : concatenated_list) {
        std::cout << fmt << counter << "";
        fmt = ", ";
    }
    std::cout << "]";
}
