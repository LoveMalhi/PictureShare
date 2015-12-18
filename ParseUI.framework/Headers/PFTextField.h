//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur

#import <UIKit/UIKit.h>

#import <ParseUI/ParseUIConstants.h>

PFUI_ASSUME_NONNULL_BEGIN

/*!
 `PFTextFieldSeparatorStyle` bitmask specifies the style of the separators,
 that should be used for a given `PFTextField`.

 @see PFTextField
 */
typedef NS_OPTIONS(uint8_t, PFTextFieldSeparatorStyle){
    /*! No separators are visible. */
    PFTextFieldSeparatorStyleNone = 0,
    /*! Separator on top of the text field. */
    PFTextFieldSeparatorStyleTop = 1 << 0,
    /*! Separator at the bottom of the text field. */
    PFTextFieldSeparatorStyleBottom = 1 << 1
};

/*!
 `PFTextField` class serves as a stylable subclass of `UITextField`.
 It includes styles that are specific to `ParseUI` framework and allows advanced customization.
 */
@interface PFTextField : UITextField

/*!
 @abstract Separator style bitmask that should be applied to this textfield.

 @discussion Default: <PFTextFieldSeparatorStyleNone>

 @see PFTextFieldSeparatorStyle
 */
@property (nonatomic, assign) PFTextFieldSeparatorStyle separatorStyle;

/*!
 @abstract Color that should be used for the separators, if they are visible.

 @discussion Default: `227,227,227,1.0`.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong) UIColor *separatorColor UI_APPEARANCE_SELECTOR;

/*!
 This method is a convenience initializer that sets both `frame` and `separatorStyle` for an instance of `PFTextField.`

 @param frame          The frame rectangle for the view, measured in points.
 @param separatorStyle Initial separator style to use.

 @return An initialized instance of `PFTextField` or `nil` if it couldn't be created.
 */
- (instancetype)initWithFrame:(CGRect)frame separatorStyle:(PFTextFieldSeparatorStyle)separatorStyle;

@end

PFUI_ASSUME_NONNULL_END
