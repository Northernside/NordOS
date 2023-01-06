export CXXFLAGS =
export ASMFLAGS =
export CXX = g++
export ASM = nasm

export TARGET = i686-elf
export TARGET_ASM = nasm
export TARGET_ASMFLAGS =
export TARGET_CXX = $(TARGET)-$(CXX)
export TARGET_LD = $(TARGET)-$(CXX)

export BUILD_DIR = $(abspath build)