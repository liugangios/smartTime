//
//  NSString+Time.h
//  smartTime
//
//  Created by Gavin on 16/7/8.
//  Copyright © 2016年 Gavin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Time)
- (NSString *)smartTime;
@end

@interface NSDate (Extension)
/**
 *  判断某个时间是否为今年
 */
- (BOOL)isThisYear;
/**
 *  判断某个时间是否为昨天
 */
- (BOOL)isYesterday;
/**
 *  判断某个时间是否为今天
 */
- (BOOL)isToday;
@end