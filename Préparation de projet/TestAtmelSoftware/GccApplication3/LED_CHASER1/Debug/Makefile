################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../src/ \
../src/ASF/ \
../src/ASF/common/ \
../src/ASF/common/applications/ \
../src/ASF/common/applications/led_chaser/ \
../src/ASF/common/applications/led_chaser/atxmega128a1_stk600-rc100x/ \
../src/ASF/common/boards/ \
../src/ASF/common/services/ \
../src/ASF/common/services/clock/ \
../src/ASF/common/services/clock/xmega/ \
../src/ASF/common/services/gpio/ \
../src/ASF/common/services/gpio/xmega_gpio/ \
../src/ASF/common/services/ioport/ \
../src/ASF/common/services/ioport/xmega/ \
../src/ASF/common/utils/ \
../src/ASF/common/utils/interrupt/ \
../src/ASF/common/utils/make/ \
../src/ASF/xmega/ \
../src/ASF/xmega/boards/ \
../src/ASF/xmega/boards/stk600/ \
../src/ASF/xmega/boards/stk600/rc100x/ \
../src/ASF/xmega/drivers/ \
../src/ASF/xmega/drivers/cpu/ \
../src/ASF/xmega/utils/ \
../src/ASF/xmega/utils/assembler/ \
../src/ASF/xmega/utils/bit_handling/ \
../src/ASF/xmega/utils/preprocessor/ \
../src/config/


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../src/ASF/common/services/clock/xmega/sysclk.c \
../src/ASF/common/services/ioport/xmega/ioport_compat.c \
../src/ASF/xmega/boards/stk600/rc100x/init.c \
../src/led_example.c


PREPROCESSING_SRCS +=  \
../src/ASF/xmega/drivers/cpu/ccp.s


ASM_SRCS += 


OBJS +=  \
src/ASF/common/services/clock/xmega/sysclk.o \
src/ASF/common/services/ioport/xmega/ioport_compat.o \
src/ASF/xmega/boards/stk600/rc100x/init.o \
src/ASF/xmega/drivers/cpu/ccp.o \
src/led_example.o

OBJS_AS_ARGS +=  \
src/ASF/common/services/clock/xmega/sysclk.o \
src/ASF/common/services/ioport/xmega/ioport_compat.o \
src/ASF/xmega/boards/stk600/rc100x/init.o \
src/ASF/xmega/drivers/cpu/ccp.o \
src/led_example.o

C_DEPS +=  \
src/ASF/common/services/clock/xmega/sysclk.d \
src/ASF/common/services/ioport/xmega/ioport_compat.d \
src/ASF/xmega/boards/stk600/rc100x/init.d \
src/ASF/xmega/drivers/cpu/ccp.d \
src/led_example.d

C_DEPS_AS_ARGS +=  \
src/ASF/common/services/clock/xmega/sysclk.d \
src/ASF/common/services/ioport/xmega/ioport_compat.d \
src/ASF/xmega/boards/stk600/rc100x/init.d \
src/ASF/xmega/drivers/cpu/ccp.d \
src/led_example.d

OUTPUT_FILE_PATH +=LED_CHASER1.elf

OUTPUT_FILE_PATH_AS_ARGS +=LED_CHASER1.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

# AVR32/GNU C Compiler









src/ASF/common/services/clock/xmega/%.o: ../src/ASF/common/services/clock/xmega/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -DDEBUG -DIOPORT_XMEGA_COMPAT -DBOARD=STK600_RC100X  -I"../common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I"../src/ASF/xmega/utils" -I"../src/config" -I"../src/ASF/xmega/utils/preprocessor" -I"../src/ASF/common/utils" -I"../src" -I"../src/ASF/common/services/clock" -I"../src/ASF/xmega/boards/stk600/rc100x" -I"../src/ASF/common/services/gpio" -I"../src/ASF/common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I"../src/ASF/xmega/boards" -I"../src/ASF/common/boards" -I"../src/ASF/xmega/drivers/cpu" -I"../src/ASF/common/services/ioport"  -O1 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g3 -Wall -mmcu=atxmega128a1 -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

src/ASF/common/services/ioport/xmega/%.o: ../src/ASF/common/services/ioport/xmega/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -DDEBUG -DIOPORT_XMEGA_COMPAT -DBOARD=STK600_RC100X  -I"../common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I"../src/ASF/xmega/utils" -I"../src/config" -I"../src/ASF/xmega/utils/preprocessor" -I"../src/ASF/common/utils" -I"../src" -I"../src/ASF/common/services/clock" -I"../src/ASF/xmega/boards/stk600/rc100x" -I"../src/ASF/common/services/gpio" -I"../src/ASF/common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I"../src/ASF/xmega/boards" -I"../src/ASF/common/boards" -I"../src/ASF/xmega/drivers/cpu" -I"../src/ASF/common/services/ioport"  -O1 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g3 -Wall -mmcu=atxmega128a1 -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

src/ASF/xmega/boards/stk600/rc100x/%.o: ../src/ASF/xmega/boards/stk600/rc100x/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -DDEBUG -DIOPORT_XMEGA_COMPAT -DBOARD=STK600_RC100X  -I"../common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I"../src/ASF/xmega/utils" -I"../src/config" -I"../src/ASF/xmega/utils/preprocessor" -I"../src/ASF/common/utils" -I"../src" -I"../src/ASF/common/services/clock" -I"../src/ASF/xmega/boards/stk600/rc100x" -I"../src/ASF/common/services/gpio" -I"../src/ASF/common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I"../src/ASF/xmega/boards" -I"../src/ASF/common/boards" -I"../src/ASF/xmega/drivers/cpu" -I"../src/ASF/common/services/ioport"  -O1 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g3 -Wall -mmcu=atxmega128a1 -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

src/%.o: ../src/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -DDEBUG -DIOPORT_XMEGA_COMPAT -DBOARD=STK600_RC100X  -I"../common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I"../src/ASF/xmega/utils" -I"../src/config" -I"../src/ASF/xmega/utils/preprocessor" -I"../src/ASF/common/utils" -I"../src" -I"../src/ASF/common/services/clock" -I"../src/ASF/xmega/boards/stk600/rc100x" -I"../src/ASF/common/services/gpio" -I"../src/ASF/common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I"../src/ASF/xmega/boards" -I"../src/ASF/common/boards" -I"../src/ASF/xmega/drivers/cpu" -I"../src/ASF/common/services/ioport"  -O1 -fdata-sections -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g3 -Wall -mmcu=atxmega128a1 -c -std=gnu99 -fno-strict-aliasing -Wstrict-prototypes -Wmissing-prototypes -Werror-implicit-function-declaration -Wpointer-arith -mrelax -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler
src/ASF/xmega/drivers/cpu/ccp.o: ../src/ASF/xmega/drivers/cpu/ccp.s
	@echo Building file: $<
	@echo Invoking: AVR32/GNU Assembler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -Wa,-gdwarf2 -x assembler-with-cpp -c -mmcu=atxmega128a1 -mrelax -DBOARD=STK600_RC100X -DIOPORT_XMEGA_COMPAT -I "../common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I "../src/ASF/xmega/utils" -I "../src/config" -I "../src/ASF/xmega/utils/preprocessor" -I "../src/ASF/common/utils" -I "../src" -I "../src/ASF/common/services/clock" -I "../src/ASF/xmega/boards/stk600/rc100x" -I "../src/ASF/common/services/gpio" -I "../src/ASF/common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I "../src/ASF/xmega/boards" -I "../src/ASF/common/boards" -I "../src/ASF/xmega/drivers/cpu" -I "../src/ASF/common/services/ioport"  -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -mrelax -Wa,-g   -o "$@" "$<" 
	@echo Finished building: $<
	


src/ASF/xmega/drivers/cpu/%.o: ../src/ASF/xmega/drivers/cpu/%.s
	@echo Building file: $<
	@echo Invoking: AVR32/GNU Assembler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -Wa,-gdwarf2 -x assembler-with-cpp -c -mmcu=atxmega128a1 -mrelax -DBOARD=STK600_RC100X -DIOPORT_XMEGA_COMPAT -I "../common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I "../src/ASF/xmega/utils" -I "../src/config" -I "../src/ASF/xmega/utils/preprocessor" -I "../src/ASF/common/utils" -I "../src" -I "../src/ASF/common/services/clock" -I "../src/ASF/xmega/boards/stk600/rc100x" -I "../src/ASF/common/services/gpio" -I "../src/ASF/common/applications/led_chaser/atxmega128a1_stk600-rc100x" -I "../src/ASF/xmega/boards" -I "../src/ASF/common/boards" -I "../src/ASF/xmega/drivers/cpu" -I "../src/ASF/common/services/ioport"  -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -mrelax -Wa,-g   -o "$@" "$<" 
	@echo Finished building: $<
	




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="LED_CHASER1.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mrelax -mmcu=atxmega128a1 -Wl,--relax -Wl,--section-start=.BOOT=0x20000  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "LED_CHASER1.elf" "LED_CHASER1.hex"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "LED_CHASER1.elf" "LED_CHASER1.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "LED_CHASER1.elf" > "LED_CHASER1.lss"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "LED_CHASER1.elf" "LED_CHASER1.srec"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-size.exe" "LED_CHASER1.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "LED_CHASER1.elf" "LED_CHASER1.a" "LED_CHASER1.hex" "LED_CHASER1.lss" "LED_CHASER1.eep" "LED_CHASER1.map" "LED_CHASER1.srec" "LED_CHASER1.usersignatures"
	