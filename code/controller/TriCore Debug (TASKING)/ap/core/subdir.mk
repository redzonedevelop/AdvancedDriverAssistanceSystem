################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../ap/core/ACC.c" \
"../ap/core/LKAS.c" \
"../ap/core/ert_main.c" \
"../ap/core/scheduler.c" 

COMPILED_SRCS += \
"ap/core/ACC.src" \
"ap/core/LKAS.src" \
"ap/core/ert_main.src" \
"ap/core/scheduler.src" 

C_DEPS += \
"./ap/core/ACC.d" \
"./ap/core/LKAS.d" \
"./ap/core/ert_main.d" \
"./ap/core/scheduler.d" 

OBJS += \
"ap/core/ACC.o" \
"ap/core/LKAS.o" \
"ap/core/ert_main.o" \
"ap/core/scheduler.o" 


# Each subdirectory must supply rules for building sources it contributes
"ap/core/ACC.src":"../ap/core/ACC.c" "ap/core/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd -DIFX_GTM=1 "-fC:/Users/USER/Downloads/AdvancedDriverAssistanceSystem/code/template/tc275/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"ap/core/ACC.o":"ap/core/ACC.src" "ap/core/subdir.mk"
	astc -I"C:\Users\USER\Downloads\AdvancedDriverAssistanceSystem\code\template\tc275\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"ap/core/LKAS.src":"../ap/core/LKAS.c" "ap/core/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd -DIFX_GTM=1 "-fC:/Users/USER/Downloads/AdvancedDriverAssistanceSystem/code/template/tc275/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"ap/core/LKAS.o":"ap/core/LKAS.src" "ap/core/subdir.mk"
	astc -I"C:\Users\USER\Downloads\AdvancedDriverAssistanceSystem\code\template\tc275\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"ap/core/ert_main.src":"../ap/core/ert_main.c" "ap/core/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd -DIFX_GTM=1 "-fC:/Users/USER/Downloads/AdvancedDriverAssistanceSystem/code/template/tc275/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"ap/core/ert_main.o":"ap/core/ert_main.src" "ap/core/subdir.mk"
	astc -I"C:\Users\USER\Downloads\AdvancedDriverAssistanceSystem\code\template\tc275\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"ap/core/scheduler.src":"../ap/core/scheduler.c" "ap/core/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd -DIFX_GTM=1 "-fC:/Users/USER/Downloads/AdvancedDriverAssistanceSystem/code/template/tc275/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"ap/core/scheduler.o":"ap/core/scheduler.src" "ap/core/subdir.mk"
	astc -I"C:\Users\USER\Downloads\AdvancedDriverAssistanceSystem\code\template\tc275\bsp" -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-ap-2f-core

clean-ap-2f-core:
	-$(RM) ./ap/core/ACC.d ./ap/core/ACC.o ./ap/core/ACC.src ./ap/core/LKAS.d ./ap/core/LKAS.o ./ap/core/LKAS.src ./ap/core/ert_main.d ./ap/core/ert_main.o ./ap/core/ert_main.src ./ap/core/scheduler.d ./ap/core/scheduler.o ./ap/core/scheduler.src

.PHONY: clean-ap-2f-core

