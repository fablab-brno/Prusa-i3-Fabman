@echo off
echo Fabman JSON firmware flash script
esptool.exe --chip esp32 --baud 921600 --port COM8 write_flash -z 0xe000 boot_app0.bin 0x1000 bootloader_qio_80m.bin 0x10000 JSON_fw.bin 0x8000 JSON_fw.partitions.bin
pause
