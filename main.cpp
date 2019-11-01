#include <iostream>
#ifndef CPPDEMO_LIST_H
#include "utils/list.h"
#define CPPDEMO_LIST_H
#endif
#ifndef _LIBCPP_FSTREAM
#include <fstream>
#include <zconf.h>
#include <vector>
#include <netinet/in.h>
#include <list>

#define _LIBCPP_FSTREAM
#endif
#define PI 3.14
#ifndef A
#define A 2
#endif
typedef sockaddr_in SA;

SA server_addre;

const int MaxSize = 1024;
const char* FileName  = "Makefile";

int main(int argc, char ** argv) {

    if (argc > 1){
        std::cout << argv[1] <<std::endl;
    }

    Link<int> *l = new Link<int>;
    std::list<int> *list = new std::list<int>;
    time_t beginTime = std::time(0);
    for (int i = 0; i < 100000000; ++i) {
        Node<int> *n = new Node<int>;
        n->data = &i;
//        l->addNode(n);
        l->append(n);
//        list->push_back(i);

    }

    time_t endTime = std::time(0);
    std::cout << l->Size() << std::endl;
    std::cout << endTime - beginTime <<std::endl;
//    std::cout << PI * A * A << std::endl;
//
//    std::fstream out;
//
//    out.open(FileName, std::ios::in);
//
//    char buff[MaxSize];
//    std::string str;
//
//    if (!out.is_open()){
//        std::cout << "文件打开失败!" << std::endl;
//    }
//
//    do {
//        out.getline(buff, MaxSize);
//        std::cout << buff << std::endl;
//        str +=buff;
//    } while (!out.eof());
//
//    std::cout << str << std::endl;
//    //取得文件路径
//    getcwd(buff,MaxSize);
//
//    std::vector<std::string> files;
//
//    std::cout << buff << std::endl;

    return 0;
}