//
//  FinancialDetail.h
//  FMDBDemo
//
//  Created by mac on 2017/12/29.
//  Copyright © 2017年 zenoV. All rights reserved.
//

#import <Foundation/Foundation.h>

#define dbKey_productName         @"productName"
#define dbKey_productNum          @"productNum"
#define dbKey_color               @"color"
#define dbKey_pieces              @"pieces"
#define dbKey_price               @"price"
#define dbKey_puchasePrice        @"puchasePrice"
#define dbKey_originalPrice       @"originalPrice"
#define dbKey_profit              @"profit"
#define dbKey_customer            @"customer"
#define dbKey_time                @"time"
#define dbKey_telePhoneNum        @"telePhoneNum"
#define dbKey_remarks             @"remarks"
#define dbKey_address             @"address"
#define dbKey_attachedPicture     @"attachedPicture"


@class UIImage;
@interface FinancialDetail : NSObject

@property (nonatomic, strong)   NSString  *productName;
@property (nonatomic, strong)   NSString  *productNum;
@property (nonatomic, strong)   NSString  *color;
@property (nonatomic, assign)   NSInteger pieces;
@property (nonatomic, assign)   float    price;
@property (nonatomic, assign)   float    puchasePrice;
@property (nonatomic, assign)   float    originalPrice;
@property (nonatomic, assign)   float    profit;
@property (nonatomic, strong)   NSString  *customer;
@property (nonatomic, strong)   NSString  *time;
@property (nonatomic, strong)   NSString  *telePhoneNum;
@property (nonatomic, strong)   NSString   *remarks;
@property (nonatomic, strong)   NSString  *address;
@property (nonatomic, strong)   UIImage   *attachedPicture;

@end
