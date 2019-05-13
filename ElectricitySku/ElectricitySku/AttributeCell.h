//
//  AttributeCell.h
//  ElectricitySku
//
//  Created by rpweng on 2019/5/13.
//  Copyright © 2019 rpweng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AttributeCell : UICollectionViewCell

@property (nonatomic ,strong)NSDictionary * propsInfo;//!<规格信息

@property (weak, nonatomic) IBOutlet UILabel *propsLabel;

@end

NS_ASSUME_NONNULL_END
