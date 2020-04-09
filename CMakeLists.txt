cmake_minimum_required(VERSION 3.14)
project(BileteCTP)

set(CMAKE_CXX_STANDARD 14)

add_executable(BileteCTP application.cpp Repo.h Bilet.cpp Bilet.h Statie.cpp Statie.h RepoFile.h User.cpp User.h Exception.h Tests.cpp Tests.h Graph.h SHA256.cpp SHA256.h Graph.cpp UI.h UI.cpp)