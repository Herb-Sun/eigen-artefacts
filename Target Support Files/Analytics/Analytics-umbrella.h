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

#import "SEGAliasPayload.h"
#import "SEGGroupPayload.h"
#import "SEGIdentifyPayload.h"
#import "SEGIntegration.h"
#import "SEGIntegrationFactory.h"
#import "SEGPayload.h"
#import "SEGScreenPayload.h"
#import "SEGTrackPayload.h"
#import "SEGAnalyticsRequest.h"
#import "SEGAnalyticsUtils.h"
#import "SEGBluetooth.h"
#import "SEGLocation.h"
#import "SEGReachability.h"
#import "SEGSegmentIntegration.h"
#import "SEGSegmentIntegrationFactory.h"
#import "SEGAnalytics.h"

FOUNDATION_EXPORT double AnalyticsVersionNumber;
FOUNDATION_EXPORT const unsigned char AnalyticsVersionString[];

