//
//  Enlarge.h
//  Groceries
//
//  Created by Martin Isaza on 10/17/15.
//  Copyright © 2015 Martin Isaza. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Enlarge : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *enlargeImageView;
@property (weak, nonatomic) IBOutlet UILabel *priceEnlargeLabel;
@property (weak, nonatomic) IBOutlet UITextView *longTextView;

- (void)setUpEnlargeViewWithDictionary:(NSDictionary *)dict ;


@end
