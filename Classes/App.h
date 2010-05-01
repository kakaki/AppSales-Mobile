//
//  App.h
//  AppSalesMobile
//
//  Created by Ole Zorn on 11.09.09.
//  Copyright 2009 omz:software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Review.h"

@interface App : NSObject <NSCoding> {

	NSString *appID;
	NSString *appName;
	NSMutableDictionary *reviewsByUser;
	NSUInteger newReviewsCount;
	float averageStars;
}

@property (readonly) NSString *appID;
@property (readonly) NSString *appName;
@property (nonatomic, retain) NSMutableDictionary *reviewsByUser;
@property (assign) NSUInteger newReviewsCount;
@property (readonly) float averageStars;

- (float)averageStars;
- (id) initWithID:(NSString*)identifier name:(NSString*)name;
- (void) addOrReplaceReview:(Review*)review;

@end
