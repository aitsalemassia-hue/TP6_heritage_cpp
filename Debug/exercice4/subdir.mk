################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice4/Contractuel.cpp \
../exercice4/Employe.cpp \
../exercice4/Permanent.cpp 

CPP_DEPS += \
./exercice4/Contractuel.d \
./exercice4/Employe.d \
./exercice4/Permanent.d 

OBJS += \
./exercice4/Contractuel.o \
./exercice4/Employe.o \
./exercice4/Permanent.o 


# Each subdirectory must supply rules for building sources it contributes
exercice4/%.o: ../exercice4/%.cpp exercice4/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice4

clean-exercice4:
	-$(RM) ./exercice4/Contractuel.d ./exercice4/Contractuel.o ./exercice4/Employe.d ./exercice4/Employe.o ./exercice4/Permanent.d ./exercice4/Permanent.o

.PHONY: clean-exercice4

