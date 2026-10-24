################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice3/MainProduit.cpp \
../exercice3/Produit.cpp \
../exercice3/ProduitAlimentaire.cpp \
../exercice3/ProduitElectronique.cpp 

CPP_DEPS += \
./exercice3/MainProduit.d \
./exercice3/Produit.d \
./exercice3/ProduitAlimentaire.d \
./exercice3/ProduitElectronique.d 

OBJS += \
./exercice3/MainProduit.o \
./exercice3/Produit.o \
./exercice3/ProduitAlimentaire.o \
./exercice3/ProduitElectronique.o 


# Each subdirectory must supply rules for building sources it contributes
exercice3/%.o: ../exercice3/%.cpp exercice3/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice3

clean-exercice3:
	-$(RM) ./exercice3/MainProduit.d ./exercice3/MainProduit.o ./exercice3/Produit.d ./exercice3/Produit.o ./exercice3/ProduitAlimentaire.d ./exercice3/ProduitAlimentaire.o ./exercice3/ProduitElectronique.d ./exercice3/ProduitElectronique.o

.PHONY: clean-exercice3

