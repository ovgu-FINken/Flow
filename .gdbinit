target extended-remote /dev/cu.usbmodemBFC18DC1
monitor swdp_scan
attach 1
monitor vector_catch disable hard
set mem inaccessible-by-default off
set print pretty
