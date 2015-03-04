################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/RPG.cpp \
../src/gmain.cpp \
../src/sdlsetup.cpp \
../src/userInput.cpp 

OBJS += \
./src/RPG.o \
./src/gmain.o \
./src/sdlsetup.o \
./src/userInput.o 

CPP_DEPS += \
./src/RPG.d \
./src/gmain.d \
./src/sdlsetup.d \
./src/userInput.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


