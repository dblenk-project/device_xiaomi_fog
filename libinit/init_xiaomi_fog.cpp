/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t fog_global_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "fog",
    .model = "Redmi 10C",
    .build_fingerprint = "Redmi/fog_global/fog:12/SKQ1.211103.001/V13.0.5.0.SGEMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t fog_global2_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "fog",
    .model = "Redmi 10 Power",
    .build_fingerprint = "Redmi/fog_global/fog:12/SKQ1.211103.001/V13.0.5.0.SGEMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t fog_in_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "fog",
    .model = "Redmi 10",
    .build_fingerprint = "Redmi/fog_global/fog:12/SKQ1.211103.001/V13.0.5.0.SGEMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t rain_global_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "rain",
    .model = "Redmi 10C",
    .build_fingerprint = "Redmi/rain_global/fog:12/SKQ1.211103.001/V13.0.5.0.SGEMIXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t wind_global_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "wind",
    .model = "Redmi 10C",
    .build_fingerprint = "Redmi/wind_global/fog:12/SKQ1.211103.001/V13.0.5.0.SGEMIXM:user/release-keys",

    .nfc = false,
};

static const std::vector<variant_info_t> variants = {
    fog_global_info,
    fog_global2_info,
    fog_in_info,
    rain_global_info,
    wind_global_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
