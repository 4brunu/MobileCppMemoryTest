# MobileCppMemoryTest

This project show's an error while using djinni.
I think it's a memory management error.

##How to run the project?
To simulate the problem open [MobileCppMemoryTestiOS.xcodeproj](https://github.com/4brunu/MobileCppMemoryTest/tree/master/ios_project/MobileCppMemoryTestiOS/MobileCppMemoryTestiOS.xcodeproj) on iOS or open the Android project [here](https://github.com/4brunu/MobileCppMemoryTest/tree/master/android_project/MobileCppMemoryTestAndroid) and run the app.


##iOS error
The error is EXC_BAD_ACCESS in this [line](https://github.com/4brunu/MobileCppMemoryTest/blob/master/src/main/cpp/ModelFatherImpl.cpp#L45).

##Android Error
```
A/libc: Fatal signal 11 (SIGSEGV), code 1, fault addr 0x69006f in tid 4730 (ypicode.com/...)

      [ 10-27 16:42:26.461  1184: 1184 W/         ]
      debuggerd: handling request: pid=4702 uid=10067 gid=10067 tid=4730
```

## Workaround

One workarround is to put [this on iOS](https://github.com/4brunu/MobileCppMemoryTest/blob/master/ios_project/MobileCppMemoryTestiOS/MobileCppMemoryTestiOS/ViewController.swift#L13) or [this on Android](https://github.com/4brunu/MobileCppMemoryTest/blob/master/android_project/MobileCppMemoryTestAndroid/app/src/main/java/com/company/mobilecppmemorytestandroid/MainActivity.java#L19) variables as global variables, but I want to understand why this is happening.
