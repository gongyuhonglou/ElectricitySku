//
//  AttributeCell.m
//  ElectricitySku
//
//  Created by rpweng on 2019/5/13.
//  Copyright © 2019 rpweng. All rights reserved.
//

#import "AttributeCell.h"

@implementation AttributeCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
    self.layer.cornerRadius = 5;
    self.layer.masksToBounds = YES;
}
- (void)setPropsInfo:(NSDictionary *)propsInfo{
    _propsInfo = propsInfo;
    self.propsLabel.text = propsInfo[@"standardName"];
}

@end
