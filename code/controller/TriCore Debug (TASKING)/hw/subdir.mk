################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../hw/hw.c" 

COMPILED_SRCS += \
"hw/hw.src" 

C_DEPS += \
"./hw/hw.d" 

OBJS += \
"hw/hw.o" 


# Each subdirectory must supply rules for building sources it contributes
"hw/hw.src":"../hw/hw.c" "hw/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd -DIFX_GTM=1 "-fC:/Users/USER/Downloads/AdvancedDriverAssistanceSystem/code/template/tc275/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"hw/hw.o":"hw/hw.src" "hw/subdir.mk"
	astc -I"C:\Users\USER\Downloads\AdvancedDriverAssistanceSystem\code\template\tc275\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-hw

clean-hw:
	-$(RM) ./hw/hw.d ./hw/hw.o ./hw/hw.src

.PHONY: clean-hw

