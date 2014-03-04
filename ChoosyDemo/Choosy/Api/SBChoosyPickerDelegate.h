
#import <Foundation/Foundation.h>

@class SBChoosyActionContext;

@protocol SBChoosyPickerDelegate <NSObject>

@required
- (void)didDismissPicker;
- (void)didSelectApp:(NSString *)appKey;

@end
