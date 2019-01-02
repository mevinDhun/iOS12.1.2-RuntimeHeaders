/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebEvent : NSObject {
    NSString * _characters;
    NSString * _charactersIgnoringModifiers;
    float  _deltaX;
    float  _deltaY;
    float  _gestureRotation;
    float  _gestureScale;
    NSString * _inputManagerHint;
    bool  _isGesture;
    unsigned short  _keyCode;
    bool  _keyRepeating;
    unsigned long long  _keyboardFlags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationInWindow;
    unsigned int  _modifierFlags;
    bool  _tabKey;
    double  _timestamp;
    unsigned int  _touchCount;
    NSArray * _touchIdentifiers;
    NSArray * _touchLocations;
    NSArray * _touchPhases;
    int  _type;
    bool  _wasHandled;
}

@property (nonatomic, readonly, retain) NSString *characters;
@property (nonatomic, readonly, retain) NSString *charactersIgnoringModifiers;
@property (nonatomic, readonly) float deltaX;
@property (nonatomic, readonly) float deltaY;
@property (nonatomic, readonly) float gestureRotation;
@property (nonatomic, readonly) float gestureScale;
@property (nonatomic, readonly, retain) NSString *inputManagerHint;
@property (nonatomic, readonly) bool isGesture;
@property (nonatomic, readonly) unsigned short keyCode;
@property (getter=isKeyRepeating, nonatomic, readonly) bool keyRepeating;
@property (nonatomic, readonly) unsigned long long keyboardFlags;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } locationInWindow;
@property (nonatomic, readonly) unsigned int modifierFlags;
@property (getter=isTabKey, nonatomic, readonly) bool tabKey;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) unsigned int touchCount;
@property (nonatomic, readonly, retain) NSArray *touchIdentifiers;
@property (nonatomic, readonly, retain) NSArray *touchLocations;
@property (nonatomic, readonly, retain) NSArray *touchPhases;
@property (nonatomic, readonly) int type;
@property (nonatomic) bool wasHandled;

- (id)_eventDescription;
- (id)_modiferFlagsDescription;
- (id)_touchIdentifiersDescription;
- (id)_touchLocationsDescription:(id)arg1;
- (id)_touchPhaseDescription:(int)arg1;
- (id)_touchPhasesDescription;
- (id)_typeDescription;
- (id)characters;
- (id)charactersIgnoringModifiers;
- (void)dealloc;
- (float)deltaX;
- (float)deltaY;
- (id)description;
- (float)gestureRotation;
- (float)gestureScale;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(bool)arg6 withFlags:(unsigned long long)arg7 keyCode:(unsigned short)arg8 isTabKey:(bool)arg9 characterSet:(int)arg10;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(bool)arg6 withFlags:(unsigned long long)arg7 withInputManagerHint:(id)arg8 keyCode:(unsigned short)arg9 isTabKey:(bool)arg10;
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(struct CGPoint { double x1; double x2; })arg2 deltaX:(float)arg3 deltaY:(float)arg4;
- (id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint { double x1; double x2; })arg3 modifiers:(unsigned int)arg4 touchCount:(unsigned int)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(bool)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11;
- (id)inputManagerHint;
- (bool)isGesture;
- (bool)isKeyRepeating;
- (bool)isTabKey;
- (unsigned short)keyCode;
- (unsigned long long)keyboardFlags;
- (struct CGPoint { double x1; double x2; })locationInWindow;
- (unsigned int)modifierFlags;
- (void)setWasHandled:(bool)arg1;
- (double)timestamp;
- (unsigned int)touchCount;
- (id)touchIdentifiers;
- (id)touchLocations;
- (id)touchPhases;
- (int)type;
- (bool)wasHandled;

@end
