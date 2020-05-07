#ifndef _DOWNLOAD_H_
#define _DOWNLOAD_H_

#define AMS_SIG_URL     "https://github.com/eXhumer/patches/releases/latest/download/sigpatches.zip"
#define APP_URL         "https://github.com/eXhumer/sigpatch-updater/releases/latest/download/sigpatch-updater.nro"
#define TEMP_FILE       "/switch/sigpatch-updater/temp"

#define ON              1
#define OFF             0


#include <stdbool.h>

//
bool downloadFile(const char *url, const char *output, int api);

#endif