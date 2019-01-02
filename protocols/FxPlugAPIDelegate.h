/* Generated by EzioChiu.
 */

@protocol FxPlugAPIDelegate

@required

- (void)abortAndWait;
- (void)beginOperationWithChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
- (void*)beginTimingOperation:(struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; })arg1 forChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg2;
- (struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)channelWithID:(int)arg1;
- (double)convertFromFigTime:(const struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; }*)arg1;
- (struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; })convertToFigTime:(double)arg1;
- (NSString *)displayName;
- (void)endOperationWithChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
- (void)endTimingOperation:(void*)arg1;
- (union { double x1; struct { /* ? */ } *x2; })figTimeToFxTime:(const struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; }*)arg1 withConversionData:(void*)arg2;
- (struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; })fxTimeToFigTime:(union { double x1; struct { /* ? */ } *x2; })arg1 withConversionData:(void*)arg2;
- (void)markForDynamicParameterUsage;
- (struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)parameterAtIndex:(unsigned int)arg1;
- (unsigned int)parameterCount;
- (void)postChannelChange:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1 flagsOnly:(bool)arg2;
- (void)preChannelChange:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1 flagsOnly:(bool)arg2;
- (void)removeParameter:(unsigned int)arg1;
- (struct OZChannelFolder { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *> > {} *x15; unsigned int x16; unsigned int x17; }*)rootChannel;
- (void)updateInspector;
- (bool)usesRationalTime;

@end
