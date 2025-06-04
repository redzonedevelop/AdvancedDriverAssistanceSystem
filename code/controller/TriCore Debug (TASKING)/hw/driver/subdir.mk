################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../hw/driver/ASCLIN_UART.c" \
"../hw/driver/GPIO_LED_Button.c" \
"../hw/driver/MULTICAN.c" \
"../hw/driver/led.c" \
"../hw/driver/motor.c" \
"../hw/driver/ultrasonic.c" 

COMPILED_SRCS += \
"hw/driver/ASCLIN_UART.src" \
"hw/driver/GPIO_LED_Button.src" \
"hw/driver/MULTICAN.src" \
"hw/driver/led.src" \
"hw/driver/motor.src" \
"hw/driver/ultrasonic.src" 

C_DEPS += \
"./hw/driver/ASCLIN_UART.d" \
"./hw/driver/GPIO_LED_Button.d" \
"./hw/driver/MULTICAN.d" \
"./hw/driver/led.d" \
"./hw/driver/motor.d" \
"./hw/driver/ultrasonic.d" 

OBJS += \
"hw/driver/ASCLIN_UART.o" \
"hw/driver/GPIO_LED_Button.o" \
"hw/driver/MULTICAN.o" \
"hw/driver/led.o" \
"hw/driver/motor.o" \
"hw/driver/ultrasonic.o" 


# Each subdirectory must supply rules for building sources it contributes
"hw/driver/ASCLIN_UART.src":"../hw/driver/ASCLIN_UART.c" "hw/driver/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/Desktop/AdvancedDriverAssistanceSystem/code/controller/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"hw/driver/ASCLIN_UART.o":"hw/driver/ASCLIN_UART.src" "hw/driver/subdir.mk"
	astc -I"C:\Users\USER\Desktop\AdvancedDriverAssistanceSystem\code\controller\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"hw/driver/GPIO_LED_Button.src":"../hw/driver/GPIO_LED_Button.c" "hw/driver/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/Desktop/AdvancedDriverAssistanceSystem/code/controller/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"hw/driver/GPIO_LED_Button.o":"hw/driver/GPIO_LED_Button.src" "hw/driver/subdir.mk"
	astc -I"C:\Users\USER\Desktop\AdvancedDriverAssistanceSystem\code\controller\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"hw/driver/MULTICAN.src":"../hw/driver/MULTICAN.c" "hw/driver/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/Desktop/AdvancedDriverAssistanceSystem/code/controller/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"hw/driver/MULTICAN.o":"hw/driver/MULTICAN.src" "hw/driver/subdir.mk"
	astc -I"C:\Users\USER\Desktop\AdvancedDriverAssistanceSystem\code\controller\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"hw/driver/led.src":"../hw/driver/led.c" "hw/driver/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/Desktop/AdvancedDriverAssistanceSystem/code/controller/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"hw/driver/led.o":"hw/driver/led.src" "hw/driver/subdir.mk"
	astc -I"C:\Users\USER\Desktop\AdvancedDriverAssistanceSystem\code\controller\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"hw/driver/motor.src":"../hw/driver/motor.c" "hw/driver/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/Desktop/AdvancedDriverAssistanceSystem/code/controller/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"hw/driver/motor.o":"hw/driver/motor.src" "hw/driver/subdir.mk"
	astc -I"C:\Users\USER\Desktop\AdvancedDriverAssistanceSystem\code\controller\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"hw/driver/ultrasonic.src":"../hw/driver/ultrasonic.c" "hw/driver/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/Desktop/AdvancedDriverAssistanceSystem/code/controller/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"hw/driver/ultrasonic.o":"hw/driver/ultrasonic.src" "hw/driver/subdir.mk"
	astc -I"C:\Users\USER\Desktop\AdvancedDriverAssistanceSystem\code\controller\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-hw-2f-driver

clean-hw-2f-driver:
	-$(RM) ./hw/driver/ASCLIN_UART.d ./hw/driver/ASCLIN_UART.o ./hw/driver/ASCLIN_UART.src ./hw/driver/GPIO_LED_Button.d ./hw/driver/GPIO_LED_Button.o ./hw/driver/GPIO_LED_Button.src ./hw/driver/MULTICAN.d ./hw/driver/MULTICAN.o ./hw/driver/MULTICAN.src ./hw/driver/led.d ./hw/driver/led.o ./hw/driver/led.src ./hw/driver/motor.d ./hw/driver/motor.o ./hw/driver/motor.src ./hw/driver/ultrasonic.d ./hw/driver/ultrasonic.o ./hw/driver/ultrasonic.src

.PHONY: clean-hw-2f-driver

