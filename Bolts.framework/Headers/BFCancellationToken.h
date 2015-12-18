//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur

#import <Foundation/Foundation.h>

#import <Bolts/BFCancellationTokenRegistration.h>

/*!
 A block that will be called when a token is cancelled.
 */
typedef void(^BFCancellationBlock)();

/*!
 The consumer view of a CancellationToken.
 Propagates notification that operations should be canceled.
 A BFCancellationToken has methods to inspect whether the token has been cancelled.
 */
@interface BFCancellationToken : NSObject

/*!
 Whether cancellation has been requested for this token source.
 */
@property (nonatomic, assign, readonly, getter=isCancellationRequested) BOOL cancellationRequested;

/*!
 Register a block to be notified when the token is cancelled.
 If the token is already cancelled the delegate will be notified immediately.
 */
- (BFCancellationTokenRegistration *)registerCancellationObserverWithBlock:(BFCancellationBlock)block;

@end
