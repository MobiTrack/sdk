//
//  Mobug.h
//  testMobugSdk
//
//  Created by Vincent Coste on 12/15/12.
//  Copyright (c) 2012 Vincent Coste. All rights reserved.
//


@interface Mobug : NSObject



@property (strong, nonatomic) NSString *secret;
@property (strong, nonatomic) NSString *clientId;
@property (strong, nonatomic) NSString *appId;

+ (Mobug *) initAtRight;
+ (Mobug *) initAtRightWithId:(NSString*)clientId andSecret:(NSString *)secret forApp:(NSString *)appId;

+ (Mobug *) getSharedInstance;

@end
