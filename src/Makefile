# Arduino environment.
ARD_REV = 22
ARD_HOME = /Applications/Arduino.app/Contents/Java
AVR_HOME = $(ARD_HOME)/hardware/tools/avr
ARD_BIN = $(AVR_HOME)/bin
AVRDUDE = $(ARD_BIN)/avrdude
AVRDUDE_CONF = $(AVR_HOME)/etc/avrdude.conf

# Board Settings
BOARD = uno
PORT = /dev/tty.usbserial-A601EYUU
PROGRAMMER = arduino

# Serial Monitor
MON_CMD = screen
MON_SPEED = 9600

# Libraries
AVR_C_LIB = $(ARD_HOME)/hardware/tools/avr/avr/include/
INC_DIRS = ./inc
LIBS =
#LIB_DIRS = $(addprefix $(ARD_HOME)/libraries/, $(LIBS))

include ../Makefile.master

# vim:ft=make