//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur

#import <UIKit/UIKit.h>

#import <ParseUI/ParseUIConstants.h>
#import <ParseUI/PFImageView.h>

PFUI_ASSUME_NONNULL_BEGIN

/*!
 The `PFTableViewCell` class represents a table view cell which can download and display remote images stored on Parse.

 When used in a <PFQueryTableViewController> - downloading and displaying of the remote images
 are automatically managed by the <PFQueryTableViewController>.
 */
@interface PFTableViewCell : UITableViewCell

/*!
 @abstract The imageView of the table view cell.

 @see PFImageView
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong, readonly) PFImageView *imageView;

@end

PFUI_ASSUME_NONNULL_END
