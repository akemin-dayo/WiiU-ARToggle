# WiiU-ARToggle

WiiU-ARToggle is a simple app that toggles the Homebrew Channel on a Wii U between the 16:9 and 4:3 aspect ratios.

This app is useful for quickly switching the Homebrew Channel to a 16:9 aspect ratio when launched via the Wii U ("vWii") System Menu.

It is also useful for switching the Homebrew Channel *back* to a 4:3 aspect ratio for some homebrew (such as many retro console emulators) that display optimally in a 4:3 aspect ratio.

Note that WiiU-ARToggle does not work on normal Wiis (it simply has no effect when run).

Requires devkitPPC and devkitPro to compile.

As with all my Wii projects, the Makefile here has been modified with the following commands:

* `make package` will compile the project, create an HBC-compliant app folder, and create a ZIP file out of it for release.

* `make release` does the same thing, but runs `make clean` before doing anything.

Binaries can be found [here](https://github.com/angelXwind/WiiU-ARToggle/releases/).