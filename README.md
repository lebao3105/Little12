# Little12

Simulate your older iPhone as an iPhone X by enabling iPhone X fluid gestures.

Builds available [here](https://lebao3105.github.io/repo).

## Compatibility

It should work on iOS 14-15 and later devices.

Some codes are removed as SpringBoard don't need them anymore, but that's for iOS 15.

## Features

* iPhone X fluid gestures.
* iPhone X and iPad status bar.
* iPhone X CC Grabber, Keyboard, and Homebar
* iPhone Device Model Spoofing (to iPhone12,1 -> regular iPhone 11)
* iPad Dock, App Switcher and Multitasking Features
* FaceID Padlock
* Reduce Home Scren Rows
* Rounded screen corners ~~and app switcher~~
* Percentage in Battery Icon
* Bottom Inset
* iPhone X Coversheet Shortcuts 
* iPhone 11 Camera UI [Beta]
* Lightweight with no battery drain.*

## Build

Install [Theos](https://github.com/theos/theos) and git.

Clone the GitHub repository with `git clone https://github.com/lebao3105/Little12.git`.

Run `make package` and it will compile the deb in ./packages/ directory.

### Code formatting

Install clang-format first.

Then run:

```bash
$ clang-format -i --style=file:.clang-format --files=.clang-format-files
```

Never run this on Logos files!

The code format options were taken [here.](https://github.com/paulsfds/objective-c-style-guide/blob/master/.clang-format)

## Info
Little12 is a fork of [Little11 by ryannair05](https://github.com/ryannair05/Little11).

Developers are free to modify and use the Little11 source in their work in accordance with the GNU General Public License.

Little12 is only partially open source, with it being fully open sourced later in time.

## Credits
* Ryan Nair | [Little11 and Little 12](https://github.com/ryannair05)
* VitaTaf | [HomeGesture](https://github.com/VitaTaf/HomeGesture)
* Andrew Wiik | [LittleX](https://github.com/andrewwiik/LittleX)
* duraidabdul | [Neptune](https://github.com/duraidabdul/Neptune)
* SniperGER |  [ProudLock2](https://github.com/SniperGER/ProudLock2) 
 

*All tweaks drain battery life, which is something that can not be avoided; however, Little12 drains less battery compared to similar tweaks.
