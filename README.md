# AppBleed

AppBleed is a Proof of Concept iOS app that can be used to display the currently installed apps on a device without being restricted by the Sandbox.

## Getting Started

### Prerequisites

- Xcode 8 or up
- An iOS device running iOS 10.x
- An Apple Developer account (free or paid)

### Installing

- Open the project in Xcode
- Select a Code Signing Identity
- Build and Run on your iOS Device
- Enjoy

## How does it work?
By using the Launch Services private API implemented in MobileCoreServices.framework, we can retrieve the list of the currently installed apps on the device, where they are located in the filesystem, their extensions (VPN, widgets, ...) and other nice stuff as well.

AppBleed makes use of the PBLMobileCoreServicesHelper class. This class provides a singleton object (a *helper*) that we can use to query basic stuff from Launch Services (*More advanced implementation was not required for this PoC*).

PBLMobileCoreServicesHelper includes the required private headers from the MobileCoreServices framework. We also dynamically open the dylib using standard functions provided by the Operating System.

Dynamic linking is a common and simple way to get past the App Store Review. Combined with a proper code obfuscation, and if you make an app that retrieves orders from a Command & Control server, you can submit your app to the App Store and when approved, activate the malicious code and retrieve the data from your users' devices.

**This does not require a jailbreak or some kind of particular exploitation, but can be considered as a threat to user privacy.**

## /me wants a fix!
Please install iOS 11 as it fixes the issue.

## Authors

- **Pierre Blazquez** - @pierre_blzqz - http://www.pierreblazquez.com/ - *Developer*
- **Efrain Ayllon Roa** - @EA_Roa - *Tester*

## License

If you want to contact me, feel free to reach me on Twitter or on my website.
If you want to include parts of this code (it *must* be for educational purposes), please include this GitHub page in your credits.
Otherwise the Do What the Fuck You Want to Public License applies to this project.

DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
Version 2, December 2004

Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>

Everyone is permitted to copy and distribute verbatim or modified
copies of this license document, and changing it is allowed as long
as the name is changed.

DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

0. You just DO WHAT THE FUCK YOU WANT TO.

## Acknowledgments

- Apple for fixing AppBleed (Vulnerability submitted to Radar in Februrary 2017)
- Efrain for his tests
