//
//  Honda.h
//  L218Objective-C-Categories
//
//  Created by Hongbo Niu on 2017-10-24.
//  Copyright © 2017 Udemy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Honda : NSObject
@property (nonatomic, strong) NSString *model;
@property (nonatomic, strong) NSString *miles;
-(void)increaseMilesToOdometer;
-(void)drive;
@end
