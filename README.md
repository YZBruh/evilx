# evilx Android Device Bricker (!!!)

## REJECTION
I do not accept responsibility or responsibilities. The user or user is responsible for any serious damage that may occur!

## Explanation
evilx makes android devices hard bricks. It is quite dangerous (as I said, I am not responsible. I just did it with a moment of enthusiasm). for evilx to work, it must work with root access. Example: running on a rooted terminal. It's like placing it in zip files... Use your imagination :). Just `./evilx` command is enough!

## How to build
#### Requirements
 - Linux (64-bit or 32-bit) OR Android system (32-bit or 64-bit).
 - If you are using Linux, the toolchain.

NOTE: You need to change the architecture of the vehicle chain according to your architecture. In other words, you cannot use evilx, which you compiled with the aarch64 compiler, on a 32-bit android device.

### Compiling in Linux
 1. Get compatible toolchain and setup environment (Please read note! On top)
 2. Install packages
```
Ubuntu/Debian based:
sudo apt-get install uuid uuid-dev zlib1g-dev liblz-dev liblzo2-2 liblzo2-dev lzop git u-boot-tools mtd-utils android-sdk-libsparse-utils flex make libssl-dev gcc-multilib libgnutls28-dev libdw-dev dwarves bc clang libelf-dev build-essential libncurses5

Arch etc. based:
sudo yay -S uuid uuid-dev zlib1g-dev liblz-dev liblzo2-2 liblzo2-dev lzop git u-boot-tools mtd-utils android-sdk-libsparse-utils flex make libssl-dev gcc-multilib libgnutls28-dev libdw-dev dwarves bc clang libelf-dev build-essential libncurses5
```
 3. Clone this repo
```
git clone https://github.com/YZBruh/evilx -b 1.0.0
```
 4. Start compilation
```
make CC := <compiler> LD := <compiler>
```

### Compiling on Android
 1. Install [Termux](https://f-droid.org/tr/packages/com.termux)
 2. Setup Termux packages
```
pkg update && pkg upgrade -y && pkg install clang lld coreutils
```
 3. Start compilation [NOTE]
- NOTE: Whatever the architecture of the android device you are using, a structure suitable for that architecture will be built.

```
make
```
### Help

```
make help-evilx
```

### More info...
```--------- evilx help ---------

 Commands;
    make                 ==> Build evilx
    make clean           ==> Clear files (Builded binaries are not deleted)
    make clean-all       ==> Clear files (Builded binaries are deleted)
    make install-termux  ==> If you are using termux, it installs the compiled evilx into
                             termux. So it allows you to use it like a normal command.
    make help-evilx      ==> Display help message
```
