// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#import <Foundation/Foundation.h>
@class DBRecordWithDerivings;


@interface DBRecordWithNestedDerivings : NSObject
- (id)initWithRecordWithNestedDerivings:(DBRecordWithNestedDerivings *)recordWithNestedDerivings;
- (id)initWithKey:(int32_t)key rec:(DBRecordWithDerivings *)rec;

@property (nonatomic, readonly) int32_t key;

@property (nonatomic, readonly) DBRecordWithDerivings *rec;

- (NSComparisonResult)compare:(DBRecordWithNestedDerivings *)other;

@end
