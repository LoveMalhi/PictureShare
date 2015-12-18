//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur

#import <UIKit/UIKit.h>

#import <ParseUI/ParseUIConstants.h>

PFUI_ASSUME_NONNULL_BEGIN

@class PFImageView;
@class PFObject;

/*!
 The `PFCollectionViewCell` class represents a collection view cell which can
 download and display remote images stored on Parse as well as has a default simple text label.
 */
@interface PFCollectionViewCell : UICollectionViewCell

/*!
 @abstract A simple lazy-loaded label for the collection view cell.
 */
@property (nonatomic, strong, readonly) UILabel *textLabel;

/*!
 @abstract The lazy-loaded imageView of the collection view cell.

 @see PFImageView
 */
@property (nonatomic, strong, readonly) PFImageView *imageView;

/*!
 @abstract This method should update all the relevant information inside a subclass of `PFCollectionViewCell`.

 @discussion This method is automatically called by <PFQueryCollectionViewController> whenever the cell
 should display new information. By default this method does nothing.

 @param object An instance of `PFObject` to update from.
 */
- (void)updateFromObject:(PFUI_NULLABLE PFObject *)object;

@end

PFUI_ASSUME_NONNULL_END
