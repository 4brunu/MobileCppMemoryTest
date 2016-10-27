# MobileCppMemoryTest

I'm having an error, that I think it's related to memory management.

To simulate the problem open [MobileCppMemoryTestiOS.xcodeproj](https://github.com/4brunu/MobileCppMemoryTest/tree/master/ios_project/MobileCppMemoryTestiOS/MobileCppMemoryTestiOS.xcodeproj) and run.

### Description

The error is EXC_BAD_ACCESS in this [line](https://github.com/4brunu/MobileCppMemoryTest/blob/master/src/main/ModelSonImpl.cpp#L53).

One workarround is to put [this](https://github.com/4brunu/MobileCppMemoryTest/blob/master/ios_project/MobileCppMemoryTestiOS/MobileCppMemoryTestiOS/ViewController.swift#L21) and [this](https://github.com/4brunu/MobileCppMemoryTest/blob/master/src/main/ModelFatherImpl.cpp#L32) variables as global variables, but I want to understand why this is happening.
