/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSError, NSArray;

@interface SSSoftwareUpdatesResponse : NSObject  {
    NSError *_error;
    BOOL _failed;
    NSArray *_updateItems;
}

@property(readonly) NSError * error;
@property(getter=isFailed,readonly) BOOL failed;
@property(readonly) NSArray * updateItems;


- (id)copyUpdateItemDictionaries;
- (id)initWithDictionaryResponse:(id)arg1;
- (BOOL)isFailed;
- (id)updateItems;
- (id)error;
- (id)description;
- (void)dealloc;
- (id)initWithError:(id)arg1;

@end
