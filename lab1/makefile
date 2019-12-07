all:start.s
	arm-none-eabi-gcc -O0 -g -c start.s
	arm-none-eabi-ld start.o -Tmap.lds -o start.elf
	arm-none-eabi-objcopy -O binary -S start.elf start.bin
	arm-none-eabi-objdump -D start.elf >start.dis