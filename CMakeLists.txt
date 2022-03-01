cmake_minimum_required(VERSION 3.20)
project(SapiSales C)

set(CMAKE_C_STANDARD 11)

add_executable(
        SapiSales
        sapi_sales/src/main.c


        shared/headers/errors.h
        shared/headers/messages.h

        shared/src/messages.c
        shared/src/errors.c

        shared/headers/useful.h
        sapi_sales/headers/manager/lab2.h
        sapi_sales/headers/manager/lab_manager.h
        sapi_sales/headers/models/product.h
        sapi_sales/headers/models/user.h

        sapi_sales/src/manager/lab2.c
        sapi_sales/src/manager/lab_manager.c
        sapi_sales/src/models/product.c
        sapi_sales/src/models/user.c)
include_directories(
        sapi_sales/headers/manager
        sapi_sales/headers/models

        shared/headers
)