//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur

#import <UIKit/UIKit.h>

#import <ParseUI/ParseUIConstants.h>

PFUI_ASSUME_NONNULL_BEGIN

typedef void(^PFImageViewImageResultBlock)(UIImage *PFUI_NULLABLE_S image,  NSError *PFUI_NULLABLE_S error);

@class BFTask;
@class PFFile;

/*!
 An image view that downloads and displays remote image stored on Parse's server.
 */
@interface PFImageView : UIImageView

/*!
 @abstract The remote file on Parse's server that stores the image.

 @warning Note that the download does not start until <loadInBackground:> is called.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong) PFFile *file;

/*!
 @abstract Initiate downloading of the remote image.

 @discussion Once the download completes, the remote image will be displayed.

 @returns The task, that encapsulates the work being done.
 */
- (BFTask *)loadInBackground;

/*!
 @abstract Initiate downloading of the remote image.

 @discussion Once the download completes, the remote image will be displayed.

 @param completion the completion block.
 */
- (void)loadInBackground:(PFUI_NULLABLE PFImageViewImageResultBlock)completion;

/*!
 @abstract Initiate downloading of the remote image.
 
 @discussion Once the download completes, the remote image will be displayed.
 
 @param completion the completion block.
 @param progressBlock called with the download progress as the image is being downloaded. 
 Will be called with a value of 100 before the completion block is called.
 */
- (void)loadInBackground:(PFUI_NULLABLE PFImageViewImageResultBlock)completion
           progressBlock:(PFUI_NULLABLE void (^)(int percentDone))progressBlock;

@end

PFUI_ASSUME_NONNULL_END
