################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice2/Compte.cpp \
../exercice2/CompteEpargne.cpp \
../exercice2/MainCompte.cpp 

CPP_DEPS += \
./exercice2/Compte.d \
./exercice2/CompteEpargne.d \
./exercice2/MainCompte.d 

OBJS += \
./exercice2/Compte.o \
./exercice2/CompteEpargne.o \
./exercice2/MainCompte.o 


# Each subdirectory must supply rules for building sources it contributes
exercice2/%.o: ../exercice2/%.cpp exercice2/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice2

clean-exercice2:
	-$(RM) ./exercice2/Compte.d ./exercice2/Compte.o ./exercice2/CompteEpargne.d ./exercice2/CompteEpargne.o ./exercice2/MainCompte.d ./exercice2/MainCompte.o

.PHONY: clean-exercice2

