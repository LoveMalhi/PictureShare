//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur

#import <Foundation/Foundation.h>

/*!
 Represents the registration of a cancellation observer with a cancellation token.
 Can be used to unregister the observer at a later time.
 */
@interface BFCancellationTokenRegistration : NSObject

/*!
 Removes the cancellation observer registered with the token
 and releases all resources associated with this registration.
 */
- (void)dispose;

@end
