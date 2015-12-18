//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur

#import <UIKit/UIKit.h>

#import <ParseUI/ParseUIConstants.h>
#import <ParseUI/PFQueryTableViewController.h>

PFUI_ASSUME_NONNULL_BEGIN

/*!
 `PFProductTableViewController` displays in-app purchase products stored on Parse.
 In addition to setting up in-app purchases in iTunes Connect, the app developer needs
 to register product information on Parse, in the Product class.
 */
@interface PFProductTableViewController : PFQueryTableViewController

/*!
 @abstract Initializes a product table view controller.

 @param style The UITableViewStyle for the table

 @returns An initialized `PFProductTableViewController` object or `nil` if the object couldn't be created.
 */
- (instancetype)initWithStyle:(UITableViewStyle)style NS_DESIGNATED_INITIALIZER;

@end

PFUI_ASSUME_NONNULL_END
