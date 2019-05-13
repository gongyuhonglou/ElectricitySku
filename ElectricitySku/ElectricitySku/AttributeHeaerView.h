//
//  AttributeHeaerView.h
//  ElectricitySku
//
//  Created by rpweng on 2019/5/13.
//  Copyright © 2019 rpweng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AttributeHeaerView : UICollectionReusableView

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *alertLabel;
@property (weak, nonatomic) IBOutlet UILabel *specLabel;

@end

NS_ASSUME_NONNULL_END
