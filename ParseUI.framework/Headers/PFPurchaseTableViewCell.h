//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur

#import <UIKit/UIKit.h>

#import <ParseUI/ParseUIConstants.h>
#import <ParseUI/PFTableViewCell.h>

PFUI_ASSUME_NONNULL_BEGIN

/*!
 An enum that represents states of the PFPurchaseTableViewCell.
 @see PFPurchaseTableViewCell
 */
typedef NS_ENUM(uint8_t, PFPurchaseTableViewCellState) {
    /*! Normal state of the cell. */
    PFPurchaseTableViewCellStateNormal = 0,
    /*! Downloading state of the cell. */
    PFPurchaseTableViewCellStateDownloading,
    /*! State of the cell, when the product was downloaded. */
    PFPurchaseTableViewCellStateDownloaded
};

/*!
 `PFPurchaseTableViewCell` is a subclass <PFTableViewCell> that is used to show
 products in a <PFProductTableViewController>.

 @see PFProductTableViewController
 */
@interface PFPurchaseTableViewCell : PFTableViewCell

/*!
 @abstract State of the cell.
 @see PFPurchaseTableViewCellState
 */
@property (nonatomic, assign) PFPurchaseTableViewCellState state;

/*!
 @abstract Label where price of the product is displayed.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong, readonly) UILabel *priceLabel;

/*!
 @abstract Progress view that is shown, when the product is downloading.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong, readonly) UIProgressView *progressView;

@end

PFUI_ASSUME_NONNULL_END
