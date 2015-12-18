//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur

#import <Availability.h>
#import <TargetConditionals.h>

#ifndef ParseUI_ParseUIConstants_h
#define ParseUI_ParseUIConstants_h

///--------------------------------------
/// @name Deprecated Macros
///--------------------------------------

#ifndef PARSE_UI_DEPRECATED
#  ifdef __deprecated_msg
#    define PARSE_UI_DEPRECATED(_MSG) (deprecated(_MSG))
#  else
#    ifdef __deprecated
#      define PARSE_UI_DEPRECATED(_MSG) (deprecated)
#    else
#      define PARSE_UI_DEPRECATED(_MSG)
#    endif
#  endif
#endif

///--------------------------------------
/// @name Nullability Support
///--------------------------------------

#if __has_feature(nullability)
#  define PFUI_NULLABLE nullable
#  define PFUI_NULLABLE_S __nullable
#  define PFUI_NULL_UNSPECIFIED null_unspecified
#  define PFUI_NULLABLE_PROPERTY nullable,
#else
#  define PFUI_NULLABLE
#  define PFUI_NULLABLE_S
#  define PFUI_NULL_UNSPECIFIED
#  define PFUI_NULLABLE_PROPERTY
#endif

#if __has_feature(assume_nonnull)
#  ifdef NS_ASSUME_NONNULL_BEGIN
#    define PFUI_ASSUME_NONNULL_BEGIN NS_ASSUME_NONNULL_BEGIN
#  else
#    define PFUI_ASSUME_NONNULL_BEGIN _Pragma("clang assume_nonnull begin")
#  endif
#  ifdef NS_ASSUME_NONNULL_END
#    define PFUI_ASSUME_NONNULL_END NS_ASSUME_NONNULL_END
#  else
#    define PFUI_ASSUME_NONNULL_END _Pragma("clang assume_nonnull end")
#  endif
#else
#  define PFUI_ASSUME_NONNULL_BEGIN
#  define PFUI_ASSUME_NONNULL_END
#endif

#endif
