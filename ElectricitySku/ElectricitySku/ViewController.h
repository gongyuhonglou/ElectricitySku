//
//  ViewController.h
//  ElectricitySku
//
//  Created by rpweng on 2019/5/13.
//  Copyright © 2019 rpweng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (nonatomic, strong) NSDictionary *skuData;

- (instancetype)initWithDic:(NSDictionary *)dic;

@end

