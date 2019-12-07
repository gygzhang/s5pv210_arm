all:
	arm-none-eabi-gcc -g -c s5pv210_led_c.c
	arm-none-eabi-gcc -g -c start.s
	arm-none-eabi-ld -Tmap.lds s5pv210_led_c.o start.o -o start.elf
	arm-none-eabi-objcopy -O binary -S start.elf s5pv210_led_c.bin
	arm-none-eabi-objdump -D s5pv210_led_c.elf > s5pv210_led_c.dis