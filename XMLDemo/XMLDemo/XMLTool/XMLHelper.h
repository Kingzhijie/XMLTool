//
//  XMLHelper.h
//  FRW_HelperTool
//
//  Created by panda誌 on 2017/6/13.
//  Copyright © 2017年 xxxxxxx. All rights reserved.
//
//  1. XMLDictionary 的一个封装
//  提供两个XML解析的接口
//
//

#import <Foundation/Foundation.h>

@interface XMLHelper : NSObject
/*
 **  XML数据解析, xmlString: XML数据
 */
+(NSDictionary *)dicWithXMLString:(NSString *)xmlString;
/*
 **  XML数据解析, xmlUrl: XML数据URL链接
 */
+(NSDictionary *)dicWithXMLUrl:(NSURL *)xmlUrl;

@end
