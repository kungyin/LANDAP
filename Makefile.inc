
CC = $(CROSS)-gcc
RM = rm
CFLAGS = -g -Wall $(CFLAGS_OPT)
LDFLAGS = $(LDFLAGS_OPT)
#LDFLAGS = $(LDFLAGS_OPT) -static
LD = $(CROSS)-gcc
AR = $(CROSS)-ar
ECHO = echo
MAKE = make

INCLUDE_DIRNAME = include
SRC_DIRNAME = src
BUILD_DIRNAME = build

DDP_NAME = ddp
DDP_DIRNAME = engine
DDPLIB_NAME = lib$(DDP_NAME)
DDPLIB_FILENAME = $(DDPLIB_NAME).a

PLATFORM_NAME = ddp_platform
PLATFORM_DIRNAME = vclient
PLATFORMLIB_NAME = lib$(PLATFORM_NAME)
PLATFORMLIB_FILENAME = $(PLATFORMLIB_NAME).a

LAUNCH_SH = ddp.sh

PLATFORM = vclient
