################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../hw/driver/led.c" 

COMPILED_SRCS += \
"hw/driver/led.src" 

C_DEPS += \
"./hw/driver/led.d" 

OBJS += \
"hw/driver/led.o" 


# Each subdirectory must supply rules for building sources it contributes
"hw/driver/led.src":"../hw/driver/led.c" "hw/driver/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/AURIX-v1.10.6-workspace/test/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"hw/driver/led.o":"hw/driver/led.src" "hw/driver/subdir.mk"
	astc -I"C:\Users\USER\AURIX-v1.10.6-workspace\test\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-hw-2f-driver

clean-hw-2f-driver:
	-$(RM) ./hw/driver/led.d ./hw/driver/led.o ./hw/driver/led.src

.PHONY: clean-hw-2f-driver

