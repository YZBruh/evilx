include src/system.mk

# By YZBruh

# Copyright 2024 evilx

# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at

#     http://www.apache.org/licenses/LICENSE-2.0

# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# I do not accept responsibility or responsibilities. The user or user is responsible for any serious damage that may occur!

# speficy
VERSION = 1.1.0
LEVEL = 110
SOURCE_DIR := src
TARGET := evilx

# code list
OBJS= $(SOURCE_DIR)/evilx.o
SRCS := $(SOURCE_DIR)/evilx.c

# gcc flags
CFLAGS := -O3 -g -Wall -Wno-unused-parameter -Wall -Wextra -static
LDFLAGS :=
LDLIBS := -lm

# display
all: 
	@printf " ---------- Building evilx ---------- \n"; \
	printf "Version: $(VERSION)\n"; \
	printf "Version level: $(LEVEL)\n"; \
	printf " \n"; \
	printf " ------------------------------------- \n"; \
	printf " \n"; \
	printf "Starting build... Please waith.\n"; \
	sleep 2; \
	printf "Make running with silent mode...\n"; \
	make -s evilx; \

# build progress
.PHONY: $(TARGET)
$(TARGET): $(OBJS)
	$(LD) -o $@ $(LDFLAGS) $(OBJS) $(LIBS)
	@mkdir -p out; \
	mv evilx out/; \
	printf " \n"; \
	printf " ------------------------------------- \n"; \
	printf " \n"; \
	printf "Cleaning unnecessary compiled files...\n"; \
	printf " \n"; \
	make clean; \

# cleaner functions
.PHONY: clean
clean:
	@printf "[PROGRESS] Cleaning directory...\n"; \
	sleep 2; \
	rm -rf $(OBJS); \
	printf "[OK]\n";

.PHONY: clean-all
clean-all:
	@printf "[PROGRESS] Cleaning directory...\n"; \
	sleep 2; \
	rm -rf $(OBJS) out; \
	printf "[OK]\n";

# helper function
.PHONY: help-evilx
help-evilx:
	@printf " --------- evilx help ---------\n"; \
	printf " \n"; \
	printf " Commands;\n"; \
	printf "    make                 ==> Build evilx\n"; \
	printf "    make clean           ==> Clear files (Builded binaries are not deleted)\n"; \
	printf "    make clean-all       ==> Clear files (Builded binaries are deleted)\n"; \
	printf "    make install-termux  ==> If you are using termux, it installs the compiled evilx into termux. So it allows you to use it like a normal command.\n"; \
	printf "    make help-evilx      ==> Display help message\n"; \
	printf " \n";

.PHONY: install-termux
install-termux:
	@arch=$$(uname -m); \
	if [ "$$arch" = "aarch64" ]; then \
		printf " ------------------------------------- \n"; \
		printf "           evilx installer           \n"; \
		printf " ------------------------------------- \n"; \
		cp out/evilx /data/data/com.termux/files/usr/bin/evilx; \
		chmod 777 /data/data/com.termux/files/usr/bin/evilx; \
		printf " \n"; \
		printf "Success.\n"; \
		printf " \n"; \
	elif [ "$$arch" = "armv7l" ]; then \
		printf " ------------------------------------- \n"; \
		printf "           evilx installer           \n"; \
		printf " ------------------------------------- \n"; \
		cp out/evilx /data/data/com.termux/files/usr/bin/evilx; \
		chmod 777 /data/data/com.termux/files/usr/bin/evilx; \
		printf " \n"; \
		printf "Success.\n"; \
		printf " \n"; \
	else \
		printf "This function is only available on Termux Android devices using aarch64 (64-bit) and armv7l (32-bit)\n"; \
	fi
