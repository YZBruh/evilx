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

# get arch
ARCH := $(shell uname -m)

# Determine CC and LD by architecture
ifeq ($(ARCH), aarch64)
    CC := gcc
    LD := gcc
else ifeq ($(ARCH), armv8l)
    CC := gcc
    LD := gcc
else ifeq ($(ARCH), armv7l)
    CC := gcc
    LD := gcc
else
    $(info NOTE: The device is not 64-bit or 32-bit! A special vehicle chain is required. When compiling, you must use the CC := <compiler> and LD := <compiler> Octet)
endif
