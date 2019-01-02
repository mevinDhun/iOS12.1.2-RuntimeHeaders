/* Generated by EzioChiu.
 */

@protocol XCTWaiterDelegate <NSObject>

@required

- (void)nestedWaiter:(XCTWaiter *)arg1 wasInterruptedByTimedOutWaiter:(XCTWaiter *)arg2;
- (void)waiter:(XCTWaiter *)arg1 didFulfillInvertedExpectation:(XCTestExpectation *)arg2;
- (void)waiter:(XCTWaiter *)arg1 didTimeoutWithUnfulfilledExpectations:(NSArray *)arg2;
- (void)waiter:(XCTWaiter *)arg1 fulfillmentDidViolateOrderingConstraintsForExpectation:(XCTestExpectation *)arg2 requiredExpectation:(XCTestExpectation *)arg3;

@end
