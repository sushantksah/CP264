################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../main.c \
../mychar.c \
../mychar_ptest.c \
../powersum.c 

C_DEPS += \
./main.d \
./mychar.d \
./mychar_ptest.d \
./powersum.d 

OBJS += \
./main.o \
./mychar.o \
./mychar_ptest.o \
./powersum.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./main.d ./main.o ./mychar.d ./mychar.o ./mychar_ptest.d ./mychar_ptest.o ./powersum.d ./powersum.o

.PHONY: clean--2e-

