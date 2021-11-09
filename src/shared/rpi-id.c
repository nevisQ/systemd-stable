/***
  This file is part of systemd and nevisCura OS.

  Copyright nevisQ GmbH
        Nikita Tokarchuk
        Stelios Katsanevakis
***/

#include "fileio.h"
#include "string-util.h"
#include "path-util.h"

#include "rpi-id.h"

int get_raspberrypi_serial(const char *root, char **ret) {

        const char *rpi_serial_file;
        int r;

        rpi_serial_file = prefix_roota(root, RPI_SERIAL_FILE_PATH);
        r = read_one_line_file(rpi_serial_file, ret);
        if (r < 0)
                return log_warning_errno(r, "Failed to read raspberry pi serial, ignoring: %m");

        return strlen(*ret);
}