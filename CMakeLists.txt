cmake_minimum_required(VERSION 3.29)
project(Libreria_estandar_de_C)

set(CMAKE_CXX_STANDARD 14)

include_directories(eje1)
include_directories(eje2)
include_directories(eje3)

add_executable(Libreria_estandar_de_C
    eje1/1a.c
    eje1/1a.h
    eje1/1b.c
    eje1/1b.h
    eje2/2a.c
    eje2/2a.h
    eje2/2b.c
    eje2/2b.h
    eje3/3a.c
    eje3/3a.h
    eje3/3b.c
    eje3/3b.h
    utils.c
    utils.h
    main.c
        main.c)
