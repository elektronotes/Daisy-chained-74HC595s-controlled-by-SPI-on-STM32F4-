set GNUARM_PATH=D:\APPLICATIONS\_DEVELOPMENT\_LANG\GNUARM\GNU Tools ARM Embedded\4.9 2014q4\bin
set OPENOCD_PATH=D:\APPLICATIONS\_DEVELOPMENT\_LANG\GNUARM\OpenOCD\openocd-0.8.0\bin-x64
set PATH=%GNUARM_PATH%;%OPENOCD_PATH%;%PATH%
arm-none-eabi-objcopy -O binary Release/*.elf upload.bin
openocd -f board/stm32f4discovery.cfg -c "init; reset halt; flash write_image erase upload.bin 0x08000000; reset run; shutdown"