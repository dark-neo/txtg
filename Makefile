
##
# Copyright (c) 2014, dark_neo
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# 3. Neither the name of the copyright holder nor the names of its contributors
#    may be used to endorse or promote products derived from this software
#    without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
##

# C development
# NOTE: USE ALWAYS `cc` FOR COMPILER COMMAND. CROSS-COMPILER.
#	(for example, between Linux and *BSD systems)

#################################################
# 		C RULES				#
#						#
# CC 		== C compiler			#
# CFLAGS	== C compiler flags		#
# LDFLAGS	== C libraries path		#
# SRCS		== always .c			#
#################################################

PROJECT_NAME	= Text Game (NOT REAL NAME)
CC		= cc
CFLAGS		= -std=c11 -Wall -O3 -g -I$(INCLUDES)
INCLUDES	= .
LDFLAGS		=
SRCS		= main.c item.c charac.c
OBJS		= $(SRCS:.c=.o)
DELCOM		= rm -f
EXEC		= txtg
VERSION		= 0.0.0
PREFIX		= /usr/local		# UNIX installation dir

default: help

help:
	@echo
	@echo "	$(PROJECT_NAME)"
	@echo
	@echo " dark_neo"
	@echo " Copyright (c) 2014. All rights reserved."
	@echo
	@echo
	@echo " -- BUILD OPTIONS --"
	@echo
	@echo " help:		show this text and finish"
	@echo " all: 		build source code"
	@echo " depends:	build dependencies"
	@echo " clean:		delete object files"
	@echo " distclean:	delete object and executable files"
	@echo

all: depends $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS) $(LDFLAGS)
	@echo
	@echo
	@echo "Program version: $(VERSION)"
	@echo

# Generic Makefile part.
# It can be used to build any executable just by changing the definitions
# above (mainly, C(XX)FALGS, L(XX)FLAGS, SRCS, OBJS, DELCOM and EXEC variables)
# and deleting dependencies appended to the file from 'make depend'.

# This is a suffix replacement rule for building .o's from .c's.
# It uses automatic variables:
#	$<: the name of the prerequisite of the rule (a .c file)
#	$@: the name of the target of the rule (a .o file)
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(DELCOM) $(OBJS)

distclean: clean
	$(DELCOM) $(EXEC)

depends: $(SRCS)
	$(CC) $(CFLAGS) -E -M $(SRCS) > depends

