//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur

#import <UIKit/UIKit.h>

#import <ParseUI/ParseUIConstants.h>

PFUI_ASSUME_NONNULL_BEGIN

/*!
 `PFSignUpFields` bitmask specifies the sign up elements which are enabled in the view.

 @see PFSignUpViewController
 @see PFSignUpView
 */
typedef NS_OPTIONS(NSInteger, PFSignUpFields) {
    /*! Username and password fields. */
    PFSignUpFieldsUsernameAndPassword = 0,
    /*! Email field. */
    PFSignUpFieldsEmail = 1 << 0,
    /*! This field can be used for something else. */
    PFSignUpFieldsAdditional = 1 << 1,
    /*! Sign Up Button */
    PFSignUpFieldsSignUpButton = 1 << 2,
    /*! Dismiss Button */
    PFSignUpFieldsDismissButton = 1 << 3,
    /*! Default value. Combines Username, Password, Email, Sign Up and Dismiss Buttons. */
    PFSignUpFieldsDefault = (PFSignUpFieldsUsernameAndPassword |
                             PFSignUpFieldsEmail |
                             PFSignUpFieldsSignUpButton |
                             PFSignUpFieldsDismissButton)
};

@class PFTextField;

/*!
 The `PFSignUpView` class provides a standard sign up interface for authenticating a <PFUser>.
 */
@interface PFSignUpView : UIScrollView

///--------------------------------------
/// @name Creating SignUp View
///--------------------------------------

/*!
 @abstract Initializes the view with the specified sign up elements.

 @param fields A bitmask specifying the sign up elements which are enabled in the view

 @returns An initialized `PFSignUpView` object or `nil` if the object couldn't be created.

 @see PFSignUpFields
 */
- (instancetype)initWithFields:(PFSignUpFields)fields;

/*!
 @abstract The view controller that will present this view.

 @discussion Used to lay out elements correctly when the presenting view controller has translucent elements.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, weak) UIViewController *presentingViewController;

///--------------------------------------
/// @name Customizing the Logo
///--------------------------------------

/*!
 @abstract The logo. By default, it is the Parse logo.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong) UIView *logo;

///--------------------------------------
/// @name Configure Username Behaviour
///--------------------------------------

/*!
 @abstract If email should be used to log in, instead of username

 @discussion By default, this is set to `NO`.
 */
@property (nonatomic, assign) BOOL emailAsUsername;

///--------------------------------------
/// @name Sign Up Elements
///--------------------------------------

/*!
 @abstract The bitmask which specifies the enabled sign up elements in the view
 */
@property (nonatomic, assign, readonly) PFSignUpFields fields;

/*!
 @abstract The username text field.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong, readonly) PFTextField *usernameField;

/*!
 @abstract The password text field.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong, readonly) PFTextField *passwordField;

/*!
 @abstract The email text field. It is `nil` if the element is not enabled.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong, readonly) PFTextField *emailField;

/*!
 @abstract The additional text field. It is `nil` if the element is not enabled.

 @discussion This field is intended to be customized.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong, readonly) PFTextField *additionalField;

/*!
 @abstract The sign up button. It is `nil` if the element is not enabled.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong, readonly) UIButton *signUpButton;

/*!
 @abstract The dismiss button. It is `nil` if the element is not enabled.
 */
@property (PFUI_NULLABLE_PROPERTY nonatomic, strong, readonly) UIButton *dismissButton;

@end

PFUI_ASSUME_NONNULL_END
