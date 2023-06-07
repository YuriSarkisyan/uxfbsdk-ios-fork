#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8 (swiftlang-5.8.0.124.2 clang-1403.0.22.11.100)
#ifndef UXFEEDBACKSDK_SWIFT_H
#define UXFEEDBACKSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="UXFeedbackSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)





@interface UIAlertController (SWIFT_EXTENSION(UXFeedbackSDK))
- (void)dismissViewControllerAnimated:(BOOL)flag completion:(void (^ _Nullable)(void))completion;
@end


@class NSString;

@interface UIColor (SWIFT_EXTENSION(UXFeedbackSDK))
/// The shorthand three-digit hexadecimal representation of color.
/// #RGB defines to the color #RRGGBB.
/// \param hex3 Three-digit hexadecimal value.
///
/// \param alpha 0.0 - 1.0. The default is 1.0.
///
- (nonnull instancetype)initWithHex3:(uint16_t)hex3 alpha:(CGFloat)alpha;
/// The shorthand four-digit hexadecimal representation of color with alpha.
/// #RGBA defines to the color #RRGGBBAA.
/// \param hex4 Four-digit hexadecimal value.
///
- (nonnull instancetype)initWithHex4:(uint16_t)hex4;
/// The six-digit hexadecimal representation of color of the form #RRGGBB.
/// \param hex6 Six-digit hexadecimal value.
///
- (nonnull instancetype)initWithHex6:(uint32_t)hex6 alpha:(CGFloat)alpha;
/// The six-digit hexadecimal representation of color with alpha of the form #RRGGBBAA.
/// \param hex8 Eight-digit hexadecimal value.
///
- (nonnull instancetype)initWithHex8:(uint32_t)hex8;
/// The rgba string representation of color with alpha of the form #RRGGBBAA/#RRGGBB, throws error.
/// \param rgba String value.
///
- (nullable instancetype)initWithRgba_throws:(NSString * _Nonnull)rgba error:(NSError * _Nullable * _Nullable)error;
/// The rgba string representation of color with alpha of the form #RRGGBBAA/#RRGGBB, fails to default color.
/// \param rgba String value.
///
- (nonnull instancetype)init:(NSString * _Nonnull)rgba defaultColor:(UIColor * _Nonnull)defaultColor;
/// Hex string of a UIColor instance, throws error.
/// \param includeAlpha Whether the alpha should be included.
///
- (NSString * _Nullable)hexStringThrows:(BOOL)includeAlpha error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Hex string of a UIColor instance, fails to empty string.
/// \param includeAlpha Whether the alpha should be included.
///
- (NSString * _Nonnull)hexString:(BOOL)includeAlpha SWIFT_WARN_UNUSED_RESULT;
@end

















/// Класс настроек SDK. Для создания экземпляра настроек по умолчанию необходимо вызвать метод <code>init()</code>
SWIFT_CLASS("_TtC13UXFeedbackSDK12UXFBSettings")
@interface UXFBSettings : NSObject
/// Глобальный таймер задержки показа кампании
@property (nonatomic) NSInteger globalDelayTimer;
/// Признак закрытия в однократный свайп вниз, если false - форма не закрывается, а сворачивается
@property (nonatomic) BOOL closeOnSwipe;
/// Включение режима дебага для получения логов
@property (nonatomic) BOOL debugEnabled;
/// Вывод содержимого полей пройденной кампании в метод <code>UXFeedbackCampaignDelegate</code>
@property (nonatomic) BOOL fieldsEventEnabled;
/// Интервал между повторными попытками запросов к серверу
@property (nonatomic) double retryTimeout;
/// Количество повторных попыток запросов к серверу
@property (nonatomic) NSInteger retryCount;
/// Таймаут подключения к серверу
@property (nonatomic) double socketTimeout;
/// Блокировка основного окна приложения
@property (nonatomic) BOOL slideInUiBlocked;
/// Цвет фона под формой slidein-кампании
@property (nonatomic, copy) NSString * _Nullable slideInUiBlackoutColor;
/// Цвет фона под формой popup-кампании
@property (nonatomic, copy) NSString * _Nullable popupUiBlackoutColor;
/// URL сервера в преобразованном формате, <em>Не plain-text!</em>
@property (nonatomic, copy) NSString * _Nullable endpoint;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIFont;

/// Класс темы SDK. Для создания экземпляра настроек по умолчанию необходимо вызвать метод <code>init()</code>.  <em>ВАЖНО</em>: все цвета задаются в формате HEX с решеткой в начале, например #ABC123
SWIFT_CLASS("_TtC13UXFeedbackSDK9UXFBTheme")
@interface UXFBTheme : NSObject
/// Цвет текста счетчика страниц, плейсхолдеров, чекбоксов и радиокнопок в нормальном состоянии
@property (nonatomic, strong) UIColor * _Nonnull text03Color;
/// Цвет бордера инпутов в нормальном состоянии
@property (nonatomic, strong) UIColor * _Nonnull inputBorderColor;
/// Цвет иконки кнопки закрытия, полоски NPS/рейтинга, обводки чекбокса и радиокнопки в нормальном состоянии
@property (nonatomic, strong) UIColor * _Nonnull iconColor;
/// Цвет кнопки в состоянии highlighted
@property (nonatomic, strong) UIColor * _Nonnull btnBgColorActive;
/// Радиус скругления кнопки
@property (nonatomic) CGFloat btnBorderRadius;
/// Цвет бордера инпута в состонии ошибки
@property (nonatomic, strong) UIColor * _Nonnull errorColorSecondary;
/// Цвет подписи текста ошибки к блоку, цвет NPS/рейтинга в состонии ошибки
@property (nonatomic, strong) UIColor * _Nonnull errorColorPrimary;
/// Основной цвет - курсор в инпуте и внутренней обводки инпута в фокусе, иконок активного чекбокса и радиокнопок
@property (nonatomic, strong) UIColor * _Nonnull mainColor;
/// Цвет фона чекбокса, радиокнопки и кнопки скриншота в выбранном состоянии
@property (nonatomic, strong) UIColor * _Nonnull controlBgColorActive;
/// Радиус скругления формы
@property (nonatomic) CGFloat formBorderRadius;
/// Цвет фона инпута
@property (nonatomic, strong) UIColor * _Nonnull inputBgColor;
/// Цвет текста заголовка и контента всех блоков
@property (nonatomic, strong) UIColor * _Nonnull text01Color;
/// Цвет фона чекбокса, радиокнопки и кнопки скриншота в нормальном состоянии
@property (nonatomic, strong) UIColor * _Nonnull controlBgColor;
/// Цвет иконки чекбокса, радиокнопки и ползунка NPS/рейтинга
@property (nonatomic, strong) UIColor * _Nonnull controlIconColor;
/// Цвет фона кнопок
@property (nonatomic, strong) UIColor * _Nonnull btnBgColor;
/// Цвет блока отображения текстовой информации
@property (nonatomic, strong) UIColor * _Nonnull text02Color;
/// Цвет текста кнопок
@property (nonatomic, strong) UIColor * _Nonnull btnTextColor;
/// Цвет фона формы
@property (nonatomic, strong) UIColor * _Nonnull bgColor;
/// Шрифт заголовка формы. По умолчанию System:Semibold:22
@property (nonatomic, strong) UIFont * _Nonnull fontH1;
/// Шрифт заголовка блока. По умолчанию System:Semibold:17
@property (nonatomic, strong) UIFont * _Nonnull fontH2;
/// Шрифт всех элементов формы. По умолчанию System:Regular:17
@property (nonatomic, strong) UIFont * _Nonnull fontP1;
/// Шрифт подписей к блокам. По умолчанию System:Regular:14
@property (nonatomic, strong) UIFont * _Nonnull fontP2;
/// Шрифт кнопок. По умолчанию System:Semibold:16
@property (nonatomic, strong) UIFont * _Nonnull fontBtn;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UXFeedbackCampaignDelegate;
@protocol UXFeedbackLogDelegate;

/// Основной интерфейс SDK. Для инициализации синглтона необходимо вызвать метод <code>setup(appID:settings:campainDelegate:logDelegate:)</code>
SWIFT_CLASS("_TtC13UXFeedbackSDK10UXFeedback")
@interface UXFeedback : NSObject
/// Синглтон для работы с SDK
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UXFeedback * _Nonnull sdk;)
+ (UXFeedback * _Nonnull)sdk SWIFT_WARN_UNUSED_RESULT;
/// Текущая версия SDK
@property (nonatomic, readonly, copy) NSString * _Nonnull version;
/// Делегат, реализующий интерфейс обработки событий
@property (nonatomic, weak) id <UXFeedbackCampaignDelegate> _Nullable campaignDelegate;
/// Делегат, реализующий интерфейс обработки лога
@property (nonatomic, weak) id <UXFeedbackLogDelegate> _Nullable logDelegate;
/// Объект настроек SDK
@property (nonatomic, strong) UXFBSettings * _Nonnull settings;
/// Объект темы SDK
@property (nonatomic, strong) UXFBTheme * _Nonnull theme;
/// Дополнительные параметры, которые будут переданы при завершении прохождения опроса
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull properties;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Метод инициализации и первичной настройки SDK
/// \param appID Идентификатор приложения
///
/// \param settings Объект настроек
///
/// \param campaignDelegate Делегат обработки событий SDK
///
/// \param logDelegate Делегат обработки логов SDK
///
+ (void)setupWithAppID:(NSString * _Nonnull)appID settings:(UXFBSettings * _Nonnull)settings campaignDelegate:(id <UXFeedbackCampaignDelegate> _Nullable)campaignDelegate logDelegate:(id <UXFeedbackLogDelegate> _Nullable)logDelegate;
/// Метод показа кампании по указанному событию
/// \param eventName Название события
///
- (void)startCampaignWithEventName:(NSString * _Nonnull)eventName;
/// Метод отмены показа кампании. Если кампания уже показана - она будет закрыта
- (void)stopCampaign;
@end




/// Интерфейс обработчика различных событий от SDK
SWIFT_PROTOCOL("_TtP13UXFeedbackSDK26UXFeedbackCampaignDelegate_")
@protocol UXFeedbackCampaignDelegate
/// Событие после загрузки кампаний с сервера
/// \param success Признак успеха загрузки
///
- (void)campaignDidLoadWithSuccess:(BOOL)success;
/// Событие получения ошибки при работе SDK
/// \param errorString Текст ошибки
///
- (void)campaignDidReceiveErrorWithErrorString:(NSString * _Nonnull)errorString;
/// Событие после показа формы кампании
/// \param eventName Имя переданного в startCampaign события
///
- (void)campaignDidShowWithEventName:(NSString * _Nonnull)eventName;
/// Событие закрытия формы кампании
/// \param eventName Имя переданного в startCampaign события
///
- (void)campaignDidCloseWithEventName:(NSString * _Nonnull)eventName;
/// Событие прерывания прохождения кампании
/// \param eventName Имя переданного в startCampaign события
///
/// \param terminatedPage Страница, на которой прохождение кампании было прервано
///
/// \param totalPages Общее количество страниц кампании
///
- (void)campaignDidTerminateWithEventName:(NSString * _Nonnull)eventName terminatedPage:(NSInteger)terminatedPage totalPages:(NSInteger)totalPages;
/// Событие отправки результатов кампании на сервер
/// \param campaignId Идентификатор кампании
///
- (void)campaignDidSendWithCampaignId:(NSString * _Nonnull)campaignId;
/// Событие завершения прохождения кампании с получением ответов
/// \param campaignId Идентификатор кампании
///
/// \param answers Массив ответов в формате Ключ: Значение, где ключ - идентификатор блока
///
- (void)campaignDidAnsweredWithCampaignId:(NSString * _Nonnull)campaignId answers:(NSDictionary<NSString *, id> * _Nonnull)answers;
@end


/// Интерфейс обработчика событий лога от SDK
SWIFT_PROTOCOL("_TtP13UXFeedbackSDK21UXFeedbackLogDelegate_")
@protocol UXFeedbackLogDelegate
/// Событие получения сообщения лога
/// \param message Текст лога
///
- (void)logDidReceiveWithMessage:(NSString * _Nonnull)message;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
