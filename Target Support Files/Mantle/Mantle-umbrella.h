#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Mantle.h"
#import "MTLJSONAdapter.h"
#import "MTLManagedObjectAdapter.h"
#import "MTLModel+NSCoding.h"
#import "MTLModel.h"
#import "MTLReflection.h"
#import "MTLValueTransformer.h"
#import "NSArray+MTLManipulationAdditions.h"
#import "NSDictionary+MTLManipulationAdditions.h"
#import "NSError+MTLModelException.h"
#import "NSObject+MTLComparisonAdditions.h"
#import "NSValueTransformer+MTLInversionAdditions.h"
#import "NSValueTransformer+MTLPredefinedTransformerAdditions.h"
#import "metamacros.h"
#import "MTLEXTKeyPathCoding.h"
#import "MTLEXTRuntimeExtensions.h"
#import "MTLEXTScope.h"

FOUNDATION_EXPORT double MantleVersionNumber;
FOUNDATION_EXPORT const unsigned char MantleVersionString[];

