cmake_minimum_required(VERSION 3.25)
project(LorentzTransformation)

set(CMAKE_CXX_STANDARD 20)

add_executable(LorentzTransformation main.cpp include/Event.h src/Event.cpp include/ObserverEvent.h src/ObserverEvent.cpp include/TransformedEvent.h src/TransformedEvent.cpp)
