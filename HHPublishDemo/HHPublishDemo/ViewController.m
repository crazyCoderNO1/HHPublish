//
//  ViewController.m
//  HHPublishDemo
//
//  Created by 崔辉辉 on 2018/8/6.
//  Copyright © 2018年 huihui. All rights reserved.
//

#import "ViewController.h"
#import "HHPublishController.h"
@interface ViewController ()
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.frame = CGRectMake(100, 200, 100, 66);
    [button setTitle:@"goTest" forState:UIControlStateNormal];
    [button setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    [self.view addSubview:button];
    [button addTarget:self action:@selector(goTest) forControlEvents:UIControlEventTouchUpInside];
}
- (void)goTest {
    [self.navigationController pushViewController:[HHPublishController new] animated:YES];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
