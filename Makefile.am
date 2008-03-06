lib_LTLIBRARIES = libNuFound.la
libNuFound_la_SOURCES = \
	src/cvtutf.c src/behavior.m src/objc-runtime.m src/common.m src/realpath.m src/load.m \
	src/NSObject.m src/NSObjectAllocation.m src/NSObjCRuntime.m src/NSVMPage.m \
	src/NSDebug.m src/NSException.m src/NSAutoreleasePool.m src/NSEnumerator.m \
	src/NSUtilities.m src/NSHashMap.m src/NSRange.m src/NSGeometry.m \
	src/NSZone.m src/NSDefaultZone.m src/NSAllocDebugZone.m src/StackZone.m \
	src/NSArray.m src/NSConcreteArray.m src/NSDictionary.m src/NSConcreteDictionary.m \
	src/NSConcreteMutableDictionary.m \
	src/NSData.m src/NSConcreteData.m src/NSSet.m src/NSConcreteSet.m \
	src/NSValue.m src/NSConcreteValue.m src/NSNumber.m src/NSConcreteNumber.m \
	src/NSString.m src/NSConcreteString.m src/NSString+StringEncoding.m \
	src/NSPathUtilities.m src/NSConcreteUTF16String.m \
	src/NSConcreteMutableString.m \
	src/NSCoder.m src/NSArchiver.m src/NSSerialization.m \
	src/NSCharacterSet.m src/NSConcreteCharacterSet.m \
	src/NSMethodSignature.m src/NSInvocation.m \
	src/NSNotification.m src/NSNotificationQueue.m src/NSNotificationCenter.m \
	src/NSDate.m src/NSConcreteDate.m \
	src/NSScanner.m src/NSConcreteScanner.m \
	src/NSCalendarDate.m src/NSCalendarDateScannerHandler.m src/NSCalendarDateScanf.m \
	src/NSTimeZone.m src/NSConcreteTimeZone.m src/NSConcreteTimeZoneDetail.m \
	src/NSProcessInfo.m src/NSUserDefaults.m src/NSBundle.m \
	src/NSThread.m src/PrivateThreadData.m src/NSLock.m src/NSDistributedLock.m \
	src/NSRunLoop.m src/NSTimer.m \
	src/FormatScanner.m src/PrintfFormatScanner.m \
	src/DefaultScannerHandler.m src/PrintfScannerHandler.m \
	src/NSPosixFileDescriptor.m src/NSFileHandle.m src/NSConcreteFileHandle.m \
	src/NSMappedData.m src/NSAccount.m src/NSFileManager.m \
	src/NSHost.m src/NSTask.m src/NSPipe.m src/UnixSignalHandler.m \
	src/NSFormatter.m src/NSNumberFormatter.m src/NSDateFormatter.m \
	src/PropertyListParser.m src/NSProxy.m \
	src/NSConcreteUnixTask.m src/NSConcreteWindowsTask.m \
	src/NSFrameInvocation.m src/NSObjectInvocation.m \
	src/NSPort.m src/NSPortNameServer.m src/NSPortMessage.m src/NSUndoManager.m \
	src/NSSocketPort.m src/NSMessagePort.m src/NSConnection.m src/NSPortCoder.m \
	src/NSNull.m src/NSClassDescription.m \
	src/EncodingFormatExceptions.m src/FoundationException.m \
	src/GeneralExceptions.m \
	src/StringExceptions.m src/NSValueExceptions.m src/NSCoderExceptions.m \
	src/NSInvocationExceptions.m src/NSFileHandleExceptions.m 

AM_CFLAGS = -g -I Foundation 
AM_OBJCFLAGS = -g -I Foundation -fconstant-string-class=NSConstantString

libNuFound_la_LDFLAGS = -shared -g
