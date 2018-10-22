cmake_minimum_required(VERSION 3.4.1)

set(can_use_assembler TRUE)
enable_language(ASM)

add_definitions(-DANDROID -DOC_ARM_ASM)

add_library( multiply-lib STATIC
             src/main/cpp/multiply.s )

add_library( native-lib
             SHARED
             src/main/cpp/native-lib.cpp )

find_library( log-lib
              log )

target_link_libraries( native-lib
                       multiply-lib
                       ${log-lib} )