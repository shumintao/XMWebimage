//
//  UIImageView+Extension.h
//  SDweb
//
//  Created by GDBank on 2017/10/17.
//  Copyright © 2017年 com.GDBank.Company. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  监听下载成功的Block
 *
 *  @param image 返回下载成功的图片
 */
typedef void(^DownImageSuccessBlock)(UIImage *image);
/**
 *  监听下载失败的Block
 *
 *  @param error 返回错误信息
 */
typedef void(^DownImageFailedBlock)(NSError *error);
/**
 *  监听下载进度的Block
 *
 *  @param progress 返回下载进度
 */
typedef void(^DownImageProgressBlock)(CGFloat progress);

@interface UIImageView (Extension)

/**
 *  异步加载图片(无占位图)
 *
 *  @param urlStr 图片地址
 */
- (void)downloadImage:(NSString *)urlStr;

/**
 *  异步加载图片
 *
 *  @param urlStr    图片地址
 *  @param imageName 占位图片名字
 */
- (void)downloadImage:(NSString *)urlStr placeholder:(NSString *)imageName;

/**
 *  异步加载Gif图片
 *  调用方法Gif [FLAnimatedImageView downloadGifImage:url];
 *  @param urlStr    图片地址
 *  @param imageName 占位图片名字
 */
-(void)downloadGifImage:(NSString *)urlStr placeholder:(NSString *)imageName;
/**
 *  异步加载图片，监听下载进度、成功、失败
 *
 *  @param urlStr    图片地址
 *  @param imageName 占位图片名字
 *  @param success   下载成功
 *  @param failed    下载失败
 *  @param progress  下载进度
 */
- (void)downloadImage:(NSString *)urlStr placeholder:(NSString *)imageName success:(DownImageSuccessBlock)success failed:(DownImageFailedBlock)failed progress:(DownImageProgressBlock)progress;


@end
