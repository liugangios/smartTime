//
//  ViewController.m
//  smartTime
//
//  Created by Gavin on 16/7/8.
//  Copyright © 2016年 Gavin. All rights reserved.
//

#import "ViewController.h"
#import "NSString+Time.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSString *time = @"1467965120";//时间戳
    NSString *smartTime = [time smartTime];//处理好的时间
    NSLog(@"%@",smartTime);
    
}


@end
