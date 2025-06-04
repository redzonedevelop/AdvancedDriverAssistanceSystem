################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../bsp/bsp.c" 

COMPILED_SRCS += \
"bsp/bsp.src" 

C_DEPS += \
"./bsp/bsp.d" 

OBJS += \
"bsp/bsp.o" 


# Each subdirectory must supply rules for building sources it contributes
"bsp/bsp.src":"../bsp/bsp.c" "bsp/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/Desktop/AdvancedDriverAssistanceSystem/code/controller/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"bsp/bsp.o":"bsp/bsp.src" "bsp/subdir.mk"
	astc -I"C:\Users\USER\Desktop\AdvancedDriverAssistanceSystem\code\controller\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-bsp

clean-bsp:
	-$(RM) ./bsp/bsp.d ./bsp/bsp.o ./bsp/bsp.src

.PHONY: clean-bsp

