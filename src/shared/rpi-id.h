#pragma once

/***
  This file is part of systemd.

  Copyright NevisQ
        Nikita Tokarchuk
        Stelios Katsanevakis
***/

#define RPI_SERIAL_FILE_PATH "/proc/device-tree/serial-number"

int get_raspberrypi_serial(const char *root, char **ret);