/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSArray;

@interface IMDirectlyObservableObject : NSObject  {
    NSArray *_observers;
}

@property(retain) NSArray * observers;


- (void)setObservers:(id)arg1;
- (id)observers;
- (void)_objectDidPostNotification:(id)arg1;
- (void)informObserversOfNotification:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;

@end