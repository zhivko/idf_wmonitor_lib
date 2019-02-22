#pragma once

#include <stddef.h>
#include <stdint.h>
#include <esp_partition.h>

typedef int (*idf_wmonitor_coredump_read_f)(const void *data, size_t size, void *user_data);

#ifdef __cplusplus
extern "C" {
#endif

uint32_t idf_wmonitor_coredump_size(void);
void idf_wmonitor_coredump_read(idf_wmonitor_coredump_read_f fn, void *user_data);
void idf_wmonitor_coredump_erase(void);

uint32_t idf_wmonitor_coredump_size_from_partition(const esp_partition_t *p);
esp_partition_t *coredump_partition(void);

#ifdef __cplusplus
}
#endif
