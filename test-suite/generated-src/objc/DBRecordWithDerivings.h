// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#import <Foundation/Foundation.h>


@interface DBRecordWithDerivings : NSObject
- (id)initWithRecordWithDerivings:(DBRecordWithDerivings *)recordWithDerivings;
- (id)initWithKey1:(int32_t)key1 key2:(NSString *)key2;

@property (nonatomic, readonly) int32_t key1;

@property (nonatomic, readonly) NSString *key2;

- (NSComparisonResult)compare:(DBRecordWithDerivings *)other;

@end
