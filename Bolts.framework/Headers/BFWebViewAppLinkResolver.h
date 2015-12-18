//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur

#import <Foundation/Foundation.h>

#import <Bolts/BFAppLinkResolving.h>

/*!
 A reference implementation for an App Link resolver that uses a hidden UIWebView
 to parse the HTML containing App Link metadata.
 */
@interface BFWebViewAppLinkResolver : NSObject <BFAppLinkResolving>

/*!
 Gets the instance of a BFWebViewAppLinkResolver.
 */
+ (instancetype)sharedInstance;

@end
