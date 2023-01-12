# slock - simple screen locker

_My build of slock - the simple screen locker utility for X._

## Changes

+ Message patch applied
+ WM\_CLASS support added
+ Color scheme changed

## Dependencies

+ libX11-devel
+ libXrandr-devel
+ libXinerama-devel

## Installation

+ Edit `config.mk` to match your local setup (slock is installed into the /usr/local namespace by default).

+ Edit the `config.def.h` file to change the colors, the font size and the message.

+ Enter the following command to build and install slock (with sufficient privileges):

> `make clean install`


## Running slock

+ Simply invoke the 'slock' command. To get out of it, enter your password.
