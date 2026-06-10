# libirecovery
This is no other fork, but one that will turn your TI-84 Plus CE into the Apple Device Whisperer.

## Why?
No idea. I've been looking for ways to do cool stuff ever since I got into the [TI-84 Plus CE C/C++ toolchain](https://ce-programming.github.io/toolchain/), and it's been really fun seeing how far I can push it.

## Features:
- Detects a variety of iDevices ranging from iPhone 2G to iPhone 14 series (theoretically could go further, but USB-C doesn't play nicely with the calculator).
- Supports the same info grabbing as upstream libirecovery
- Dedicated AppVar sender which is light on memory as it sends in chunks
- Event driven device polling

## You'll need a mini USB B to female USB A adapter to connect your device, one like [this](https://www.amazon.com/SaiTech-Mini-USB-OTG-Digital/dp/B00VWTD7CQ/ref=sr_1_2?crid=2GQZPLW4FLH3Q&dib=eyJ2IjoiMSJ9.PfT23My3DiAryb6m3_Q8ocgtGg6VGPj-8eF-_enl9eM2ZKlALyiBKVJNV08861JaZdo8eYPk3JpRLkAqlYewiXrC3RG2-vBWPfEMnd1HUd_dGDY8U0-lF0j205tdx27U_4BSGt3eyQ5ZA53JL87QOudT8qJyGIqHxry6RDvpvIKQNxtgpae9wA1Pyjf1nTs2X3DGS-lyjBvJZbozz_OWLCFyM7jzOqfv8fAHHTS4Scto4Zzsh35Ju0L3gzIm5GMgabhOBzl7kFzhxrlpaYmKQY5u5GdOu0qmOzt5gbqjxfA.bZVwWP7AVMZKYCH05CpWK-B4EtWVAzk9saUN3CXauhs&dib_tag=se&keywords=mini%2Busb%2Bb%2Bto%2Busb%2Ba%2Bfemale&qid=1781059057&s=electronics&sprefix=mini%2Busb%2Bb%2Bto%2Busb%2Ba%2Bfema%2Celectronics%2C151&sr=1-2&th=1).

## How to Build
1. Grab yourself the [toolchain](https://ce-programming.github.io/toolchain/)
2. Clone this repository: `git clone https://www.github.com/XboxOneSogie720/libirecovery.git`
3. copy the source files into your project
4. Use them

## Credits
- [Apple Inc.](https://www.apple.com/) for their amazing devices
- [libimobiledevice](https://libimobiledevice.org/) for the implementation.
- [TI-84 Plus CE Toolchain Team](https://ce-programming.github.io/toolchain/)
- [Embedded sscanf()](https://41j.com/blog/2015/01/standalone-sscanf-implementation-esp8266/)
