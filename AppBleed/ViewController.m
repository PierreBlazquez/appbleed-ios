//
//  ViewController.m
//  AppBleed
//
//  Created by Pierre BLAZQUEZ on 13/02/2017.
//  Copyright © 2017 Pierre BLAZQUEZ. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
@synthesize installedApps;

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    mcsHelper = [PBLMobileCoreServicesHelper sharedHelper];
    
    if (([mcsHelper isReady]) && ([[mcsHelper installedApps] count] > 0)) {
        installedApps = [NSArray arrayWithArray:[mcsHelper installedApps]];
        [[self lblInfo] setText:@"We now have your installed apps. This is bad."];
    }
    else {
        installedApps = [NSArray array];
        [[self lblInfo] setText:@"We do not have your installed apps. Looks like it has been fixed. Thanks, Apple! :)"];
    }
    
    [[self tableView] setDelegate:self];
    [[self tableView] setDataSource:self];
}


- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [installedApps count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    AppTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"App" forIndexPath:indexPath];
    
    [[cell appTitle] setText:[[installedApps objectAtIndex:indexPath.row] performSelector:@selector(applicationIdentifier)]];
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    
    [[self lblInfo] setText:[[installedApps objectAtIndex:indexPath.row] description]];
}

- (BOOL)canBecomeFirstResponder {
    return YES;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
