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
        sapi_sales/src/models/user.c sapi_sales/src/manager/lab3.c sapi_sales/headers/manager/lab3.h sapi_sales/src/models/user_array.c sapi_sales/headers/models/user_array.h sapi_sales/src/models/product_array.c sapi_sales/headers/models/product_array.h sapi_sales/src/models/product_stack.c sapi_sales/headers/models/product_stack.h sapi_sales/src/manager/lab4.c sapi_sales/headers/manager/lab4.h sapi_sales/src/manager/lab5.c sapi_sales/headers/manager/lab5.h sapi_sales/src/models/queue/user_queue.c sapi_sales/headers/models/queue/user_queue.h)
include_directories(
        sapi_sales/headers/manager
        sapi_sales/headers/models

        shared/headers
)