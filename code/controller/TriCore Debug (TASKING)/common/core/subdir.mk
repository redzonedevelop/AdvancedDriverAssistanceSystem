################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../common/core/qbuffer.c" 

COMPILED_SRCS += \
"common/core/qbuffer.src" 

C_DEPS += \
"./common/core/qbuffer.d" 

OBJS += \
"common/core/qbuffer.o" 


# Each subdirectory must supply rules for building sources it contributes
"common/core/qbuffer.src":"../common/core/qbuffer.c" "common/core/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/Desktop/AdvancedDriverAssistanceSystem/code/controller/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"common/core/qbuffer.o":"common/core/qbuffer.src" "common/core/subdir.mk"
	astc -I"C:\Users\USER\Desktop\AdvancedDriverAssistanceSystem\code\controller\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-common-2f-core

clean-common-2f-core:
	-$(RM) ./common/core/qbuffer.d ./common/core/qbuffer.o ./common/core/qbuffer.src

.PHONY: clean-common-2f-core

