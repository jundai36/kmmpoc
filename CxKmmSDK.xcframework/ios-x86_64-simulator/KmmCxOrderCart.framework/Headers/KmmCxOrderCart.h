#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KCOCKotlinByteArray, KCOCBase64Factory, KCOCNativeBase64Encoder, KCOCDataTypeMapping, KCOCItemDetailValidator, KCOCKmmCxItemDetail, KCOCKmmCxItemHeader, KCOCKmmCxItemOptionList, KCOCKmmCxItemOption, KCOCKmmCxItemOptionListSelectionMode, KCOCKotlinEnumCompanion, KCOCKotlinEnum<E>, KCOCKmmCxItemOptionListSelectionModeCompanion, KCOCKotlinArray<T>, KCOCKmmCxOrderCartValidationParams, KCOCKotlinByteIterator;

@protocol KCOCBase64Encoder, KCOCKotlinComparable, KCOCKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KCOCBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KCOCBase (KCOCBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KCOCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KCOCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKCOCKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KCOCNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface KCOCByte : KCOCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KCOCUByte : KCOCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KCOCShort : KCOCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KCOCUShort : KCOCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KCOCInt : KCOCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KCOCUInt : KCOCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KCOCLong : KCOCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KCOCULong : KCOCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KCOCFloat : KCOCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KCOCDouble : KCOCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KCOCBoolean : KCOCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Base64Encoder")))
@protocol KCOCBase64Encoder
@required
- (KCOCKotlinByteArray *)encodeSrc:(KCOCKotlinByteArray *)src __attribute__((swift_name("encode(src:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64Factory")))
@interface KCOCBase64Factory : KCOCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)base64Factory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KCOCBase64Factory *shared __attribute__((swift_name("shared")));
- (id<KCOCBase64Encoder>)createEncoder __attribute__((swift_name("createEncoder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NativeBase64Encoder")))
@interface KCOCNativeBase64Encoder : KCOCBase <KCOCBase64Encoder>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nativeBase64Encoder __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KCOCNativeBase64Encoder *shared __attribute__((swift_name("shared")));
- (KCOCKotlinByteArray *)encodeSrc:(KCOCKotlinByteArray *)src __attribute__((swift_name("encode(src:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataTypeMapping")))
@interface KCOCDataTypeMapping : KCOCBase
- (instancetype)initWithIntType:(int32_t)intType intTypeNullable:(KCOCInt * _Nullable)intTypeNullable constIntType:(int32_t)constIntType constIntTypeNullable:(KCOCInt * _Nullable)constIntTypeNullable constIntTypeNullableDefaultNull:(KCOCInt * _Nullable)constIntTypeNullableDefaultNull intTypeWithDefaultValue:(int32_t)intTypeWithDefaultValue intTypeNullableWithDefaultValue:(KCOCInt * _Nullable)intTypeNullableWithDefaultValue __attribute__((swift_name("init(intType:intTypeNullable:constIntType:constIntTypeNullable:constIntTypeNullableDefaultNull:intTypeWithDefaultValue:intTypeNullableWithDefaultValue:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (KCOCInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (KCOCInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (KCOCInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (KCOCInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (KCOCDataTypeMapping *)doCopyIntType:(int32_t)intType intTypeNullable:(KCOCInt * _Nullable)intTypeNullable constIntType:(int32_t)constIntType constIntTypeNullable:(KCOCInt * _Nullable)constIntTypeNullable constIntTypeNullableDefaultNull:(KCOCInt * _Nullable)constIntTypeNullableDefaultNull intTypeWithDefaultValue:(int32_t)intTypeWithDefaultValue intTypeNullableWithDefaultValue:(KCOCInt * _Nullable)intTypeNullableWithDefaultValue __attribute__((swift_name("doCopy(intType:intTypeNullable:constIntType:constIntTypeNullable:constIntTypeNullableDefaultNull:intTypeWithDefaultValue:intTypeNullableWithDefaultValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t constIntType __attribute__((swift_name("constIntType")));
@property (readonly) KCOCInt * _Nullable constIntTypeNullable __attribute__((swift_name("constIntTypeNullable")));
@property (readonly) KCOCInt * _Nullable constIntTypeNullableDefaultNull __attribute__((swift_name("constIntTypeNullableDefaultNull")));
@property int32_t intType __attribute__((swift_name("intType")));
@property KCOCInt * _Nullable intTypeNullable __attribute__((swift_name("intTypeNullable")));
@property (readonly) KCOCInt * _Nullable intTypeNullableWithDefaultValue __attribute__((swift_name("intTypeNullableWithDefaultValue")));
@property (readonly) int32_t intTypeWithDefaultValue __attribute__((swift_name("intTypeWithDefaultValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface KCOCGreeting : KCOCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface KCOCPlatform : KCOCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemDetailValidator")))
@interface KCOCItemDetailValidator : KCOCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)itemDetailValidator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KCOCItemDetailValidator *shared __attribute__((swift_name("shared")));
- (BOOL)validateAggregateSelectionItemDetail:(KCOCKmmCxItemDetail *)itemDetail parentOptionId:(NSString *)parentOptionId selectedOptionId:(NSString *)selectedOptionId quantity:(int32_t)quantity __attribute__((swift_name("validateAggregateSelection(itemDetail:parentOptionId:selectedOptionId:quantity:)")));
- (BOOL)validateMultiSelectionItemDetail:(KCOCKmmCxItemDetail *)itemDetail parentOptionId:(NSString *)parentOptionId selectedOptionId:(NSString *)selectedOptionId checked:(BOOL)checked __attribute__((swift_name("validateMultiSelection(itemDetail:parentOptionId:selectedOptionId:checked:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmmCxItemDetail")))
@interface KCOCKmmCxItemDetail : KCOCBase
- (instancetype)initWithItemHeader:(KCOCKmmCxItemHeader * _Nullable)itemHeader optionLists:(NSArray<KCOCKmmCxItemOptionList *> *)optionLists __attribute__((swift_name("init(itemHeader:optionLists:)"))) __attribute__((objc_designated_initializer));
- (KCOCKmmCxItemHeader * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<KCOCKmmCxItemOptionList *> *)component2 __attribute__((swift_name("component2()")));
- (KCOCKmmCxItemDetail *)doCopyItemHeader:(KCOCKmmCxItemHeader * _Nullable)itemHeader optionLists:(NSArray<KCOCKmmCxItemOptionList *> *)optionLists __attribute__((swift_name("doCopy(itemHeader:optionLists:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KCOCKmmCxItemHeader * _Nullable itemHeader __attribute__((swift_name("itemHeader")));
@property (readonly) NSArray<KCOCKmmCxItemOptionList *> *optionLists __attribute__((swift_name("optionLists")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmmCxItemHeader")))
@interface KCOCKmmCxItemHeader : KCOCBase
- (instancetype)initWithItemId:(NSString *)itemId itemName:(NSString * _Nullable)itemName description:(NSString * _Nullable)description imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("init(itemId:itemName:description:imageUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (KCOCKmmCxItemHeader *)doCopyItemId:(NSString *)itemId itemName:(NSString * _Nullable)itemName description:(NSString * _Nullable)description imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("doCopy(itemId:itemName:description:imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *itemId __attribute__((swift_name("itemId")));
@property (readonly) NSString * _Nullable itemName __attribute__((swift_name("itemName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmmCxItemOption")))
@interface KCOCKmmCxItemOption : KCOCBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name imageUrl:(NSString * _Nullable)imageUrl description:(NSString * _Nullable)description priceDisplayString:(NSString * _Nullable)priceDisplayString caloricDisplayString:(NSString * _Nullable)caloricDisplayString quantity:(int32_t)quantity defaultQuantity:(KCOCInt * _Nullable)defaultQuantity isSelected:(BOOL)isSelected nestedItemDetail:(KCOCKmmCxItemDetail * _Nullable)nestedItemDetail __attribute__((swift_name("init(id:name:imageUrl:description:priceDisplayString:caloricDisplayString:quantity:defaultQuantity:isSelected:nestedItemDetail:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (KCOCKmmCxItemDetail * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (KCOCInt * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (KCOCKmmCxItemOption *)doCopyId:(NSString *)id name:(NSString *)name imageUrl:(NSString * _Nullable)imageUrl description:(NSString * _Nullable)description priceDisplayString:(NSString * _Nullable)priceDisplayString caloricDisplayString:(NSString * _Nullable)caloricDisplayString quantity:(int32_t)quantity defaultQuantity:(KCOCInt * _Nullable)defaultQuantity isSelected:(BOOL)isSelected nestedItemDetail:(KCOCKmmCxItemDetail * _Nullable)nestedItemDetail __attribute__((swift_name("doCopy(id:name:imageUrl:description:priceDisplayString:caloricDisplayString:quantity:defaultQuantity:isSelected:nestedItemDetail:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable caloricDisplayString __attribute__((swift_name("caloricDisplayString")));
@property (readonly) KCOCInt * _Nullable defaultQuantity __attribute__((swift_name("defaultQuantity")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KCOCKmmCxItemDetail * _Nullable nestedItemDetail __attribute__((swift_name("nestedItemDetail")));
@property (readonly) NSString * _Nullable priceDisplayString __attribute__((swift_name("priceDisplayString")));
@property (readonly) int32_t quantity __attribute__((swift_name("quantity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmmCxItemOptionList")))
@interface KCOCKmmCxItemOptionList : KCOCBase
- (instancetype)initWithId:(NSString *)id title:(NSString * _Nullable)title subtitle:(NSString * _Nullable)subtitle imageUrl:(NSString * _Nullable)imageUrl isOptional:(BOOL)isOptional selectionMode:(KCOCKmmCxItemOptionListSelectionMode *)selectionMode minNumOptions:(int32_t)minNumOptions maxNumOptions:(int32_t)maxNumOptions numFreeOptions:(int32_t)numFreeOptions maxAggregateOptionsQuantity:(KCOCInt * _Nullable)maxAggregateOptionsQuantity minAggregateOptionsQuantity:(KCOCInt * _Nullable)minAggregateOptionsQuantity minOptionChoiceQuantity:(KCOCInt * _Nullable)minOptionChoiceQuantity maxOptionChoiceQuantity:(KCOCInt * _Nullable)maxOptionChoiceQuantity caloricDisplayString:(NSString * _Nullable)caloricDisplayString options:(NSArray<KCOCKmmCxItemOption *> *)options __attribute__((swift_name("init(id:title:subtitle:imageUrl:isOptional:selectionMode:minNumOptions:maxNumOptions:numFreeOptions:maxAggregateOptionsQuantity:minAggregateOptionsQuantity:minOptionChoiceQuantity:maxOptionChoiceQuantity:caloricDisplayString:options:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (KCOCInt * _Nullable)component10 __attribute__((swift_name("component10()")));
- (KCOCInt * _Nullable)component11 __attribute__((swift_name("component11()")));
- (KCOCInt * _Nullable)component12 __attribute__((swift_name("component12()")));
- (KCOCInt * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSArray<KCOCKmmCxItemOption *> *)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (KCOCKmmCxItemOptionListSelectionMode *)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int32_t)component9 __attribute__((swift_name("component9()")));
- (KCOCKmmCxItemOptionList *)doCopyId:(NSString *)id title:(NSString * _Nullable)title subtitle:(NSString * _Nullable)subtitle imageUrl:(NSString * _Nullable)imageUrl isOptional:(BOOL)isOptional selectionMode:(KCOCKmmCxItemOptionListSelectionMode *)selectionMode minNumOptions:(int32_t)minNumOptions maxNumOptions:(int32_t)maxNumOptions numFreeOptions:(int32_t)numFreeOptions maxAggregateOptionsQuantity:(KCOCInt * _Nullable)maxAggregateOptionsQuantity minAggregateOptionsQuantity:(KCOCInt * _Nullable)minAggregateOptionsQuantity minOptionChoiceQuantity:(KCOCInt * _Nullable)minOptionChoiceQuantity maxOptionChoiceQuantity:(KCOCInt * _Nullable)maxOptionChoiceQuantity caloricDisplayString:(NSString * _Nullable)caloricDisplayString options:(NSArray<KCOCKmmCxItemOption *> *)options __attribute__((swift_name("doCopy(id:title:subtitle:imageUrl:isOptional:selectionMode:minNumOptions:maxNumOptions:numFreeOptions:maxAggregateOptionsQuantity:minAggregateOptionsQuantity:minOptionChoiceQuantity:maxOptionChoiceQuantity:caloricDisplayString:options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString * _Nullable)getFirstInvalidOption __attribute__((swift_name("getFirstInvalidOption()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable caloricDisplayString __attribute__((swift_name("caloricDisplayString")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) BOOL isOptional __attribute__((swift_name("isOptional")));
@property (readonly) KCOCInt * _Nullable maxAggregateOptionsQuantity __attribute__((swift_name("maxAggregateOptionsQuantity")));
@property (readonly) int32_t maxNumOptions __attribute__((swift_name("maxNumOptions")));
@property (readonly) KCOCInt * _Nullable maxOptionChoiceQuantity __attribute__((swift_name("maxOptionChoiceQuantity")));
@property (readonly) KCOCInt * _Nullable minAggregateOptionsQuantity __attribute__((swift_name("minAggregateOptionsQuantity")));
@property (readonly) int32_t minNumOptions __attribute__((swift_name("minNumOptions")));
@property (readonly) KCOCInt * _Nullable minOptionChoiceQuantity __attribute__((swift_name("minOptionChoiceQuantity")));
@property (readonly) int32_t numFreeOptions __attribute__((swift_name("numFreeOptions")));
@property (readonly) NSArray<KCOCKmmCxItemOption *> *options __attribute__((swift_name("options")));
@property (readonly) KCOCKmmCxItemOptionListSelectionMode *selectionMode __attribute__((swift_name("selectionMode")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KCOCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KCOCKotlinEnum<E> : KCOCBase <KCOCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KCOCKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmmCxItemOptionListSelectionMode")))
@interface KCOCKmmCxItemOptionListSelectionMode : KCOCKotlinEnum<KCOCKmmCxItemOptionListSelectionMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KCOCKmmCxItemOptionListSelectionModeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KCOCKmmCxItemOptionListSelectionMode *multiSelect __attribute__((swift_name("multiSelect")));
@property (class, readonly) KCOCKmmCxItemOptionListSelectionMode *singleSelect __attribute__((swift_name("singleSelect")));
@property (class, readonly) KCOCKmmCxItemOptionListSelectionMode *aggregateQuantity __attribute__((swift_name("aggregateQuantity")));
+ (KCOCKotlinArray<KCOCKmmCxItemOptionListSelectionMode *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *string __attribute__((swift_name("string")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmmCxItemOptionListSelectionMode.Companion")))
@interface KCOCKmmCxItemOptionListSelectionModeCompanion : KCOCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KCOCKmmCxItemOptionListSelectionModeCompanion *shared __attribute__((swift_name("shared")));
- (KCOCKmmCxItemOptionListSelectionMode *)fromStringSelectionMode:(NSString * _Nullable)selectionMode __attribute__((swift_name("fromString(selectionMode:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmmCxOrderCartManager")))
@interface KCOCKmmCxOrderCartManager : KCOCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)validateNewItemFromSameStoreParams:(KCOCKmmCxOrderCartValidationParams *)params __attribute__((swift_name("validateNewItemFromSameStore(params:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmmCxOrderCartValidationParams")))
@interface KCOCKmmCxOrderCartValidationParams : KCOCBase
- (instancetype)initWithOrderCartStoreId:(NSString *)orderCartStoreId numItems:(int32_t)numItems newItemStoreId:(NSString *)newItemStoreId isDeleteExistingCart:(BOOL)isDeleteExistingCart isBundleOpportunity:(BOOL)isBundleOpportunity fallbackSaveCartStoreId:(NSString * _Nullable)fallbackSaveCartStoreId __attribute__((swift_name("init(orderCartStoreId:numItems:newItemStoreId:isDeleteExistingCart:isBundleOpportunity:fallbackSaveCartStoreId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (KCOCKmmCxOrderCartValidationParams *)doCopyOrderCartStoreId:(NSString *)orderCartStoreId numItems:(int32_t)numItems newItemStoreId:(NSString *)newItemStoreId isDeleteExistingCart:(BOOL)isDeleteExistingCart isBundleOpportunity:(BOOL)isBundleOpportunity fallbackSaveCartStoreId:(NSString * _Nullable)fallbackSaveCartStoreId __attribute__((swift_name("doCopy(orderCartStoreId:numItems:newItemStoreId:isDeleteExistingCart:isBundleOpportunity:fallbackSaveCartStoreId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable fallbackSaveCartStoreId __attribute__((swift_name("fallbackSaveCartStoreId")));
@property (readonly) BOOL isBundleOpportunity __attribute__((swift_name("isBundleOpportunity")));
@property (readonly) BOOL isDeleteExistingCart __attribute__((swift_name("isDeleteExistingCart")));
@property (readonly, getter=doNewItemStoreId) NSString *newItemStoreId __attribute__((swift_name("newItemStoreId")));
@property (readonly) int32_t numItems __attribute__((swift_name("numItems")));
@property (readonly) NSString *orderCartStoreId __attribute__((swift_name("orderCartStoreId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KCOCKotlinByteArray : KCOCBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KCOCByte *(^)(KCOCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KCOCKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KCOCKotlinEnumCompanion : KCOCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KCOCKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KCOCKotlinArray<T> : KCOCBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KCOCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KCOCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KCOCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface KCOCKotlinByteIterator : KCOCBase <KCOCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KCOCByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
