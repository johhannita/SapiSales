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
        sapi_sales/src/models/user.c sapi_sales/src/manager/lab3.c sapi_sales/headers/manager/lab3.h sapi_sales/src/models/array/user_array.c sapi_sales/headers/models/array/user_array.h sapi_sales/src/models/array/product_array.c sapi_sales/headers/models/array/product_array.h sapi_sales/src/models/stack/product_stack.c sapi_sales/headers/models/stack/product_stack.h sapi_sales/src/manager/lab4.c sapi_sales/headers/manager/lab4.h sapi_sales/src/manager/lab5.c sapi_sales/headers/manager/lab5.h sapi_sales/src/models/queue/user_queue.c sapi_sales/headers/models/queue/user_queue.h sapi_sales/src/models/list/user_list.c sapi_sales/headers/models/list/user_list.h sapi_sales/src/manager/lab7.c sapi_sales/headers/manager/lab7.h sapi_sales/src/manager/lab8.c sapi_sales/headers/manager/lab8.h sapi_sales/src/models/binary_search_tree/users_bst.c sapi_sales/headers/models/binary_search_tree/users_bst.h)
include_directories(
        sapi_sales/headers/manager
        sapi_sales/headers/models

        shared/headers
)