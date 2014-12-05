//
//  IGMessage.h
//  IGMessagingKit
//
//  Created by Devon Boyer on 2014-09-17.
//  Copyright (c) 2014 Inner Geek. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MessagingKitConstants.h"

@interface Message : NSObject

@property (strong, nonatomic) NSString *sentByUserID;
@property (strong, nonatomic) NSDate *sentAt;
@property (assign, nonatomic) MIMEType MIMEType;
@property (strong, nonatomic) NSData *data;

+ (instancetype)messageWithData:(NSData *)data
                       MIMEType:(MIMEType)MIMEType
                   sentByUserID:(NSString *)sentByUserID
                         sentAt:(NSDate *)sentAt;

+ (instancetype)messageWithText:(NSString *)text
                   sentByUserID:(NSString *)sentByUserID
                         sentAt:(NSDate *)sentAt;

+ (instancetype)messageWithImage:(UIImage *)photo
                    sentByUserID:(NSString *)sentByUserID
                          sentAt:(NSDate *)sentAt;

@end
