//
//  SocketManager.h
//  TCPSocketServer-Demo
//
//  Created by 郭艾超 on 16/7/2.
//  Copyright © 2016年 Steven. All rights reserved.
//

#import <Foundation/Foundation.h>
@class GCDAsyncSocket;
@interface SocketManager : NSObject

@property (strong, nonatomic)GCDAsyncSocket * mySocket;
+ (SocketManager *)sharedSocketManager;
@end
