//
//  DetailViewController.h
//  Smonwarforyou
//
//  Created by jow on 2015. 2. 12..
//  Copyright (c) 2015년 jow. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

