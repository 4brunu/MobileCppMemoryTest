# MobileCppMemoryTest

I'm having an error, that I think it's related to memory management.

To simulate the problem open [MobileCppMemoryTestiOS.xcodeproj](https://github.com/4brunu/MobileCppMemoryTest/tree/master/ios_project/MobileCppMemoryTestiOS/MobileCppMemoryTestiOS.xcodeproj) and run.

##iOS error
The error is EXC_BAD_ACCESS in this [line](https://github.com/4brunu/MobileCppMemoryTest/blob/master/src/main/ModelSonImpl.cpp#L53).

##Android Error
```
A/libc: Fatal signal 11 (SIGSEGV), code 1, fault addr 0x69006f in tid 4730 (ypicode.com/...)

      [ 10-27 16:42:26.461  1184: 1184 W/         ]
      debuggerd: handling request: pid=4702 uid=10067 gid=10067 tid=4730
```

### Workaround

One workarround is to put [this](https://github.com/4brunu/MobileCppMemoryTest/blob/master/ios_project/MobileCppMemoryTestiOS/MobileCppMemoryTestiOS/ViewController.swift#L21) and [this](https://github.com/4brunu/MobileCppMemoryTest/blob/master/src/main/ModelFatherImpl.cpp#L32) variables as global variables, but I want to understand why this is happening.
