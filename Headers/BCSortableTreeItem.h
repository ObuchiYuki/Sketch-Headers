//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol BCSortable;

@interface BCSortableTreeItem : NSObject
{
    id <BCSortable> _object;
    NSString *_name;
    NSMutableArray *_children;
}

+ (id)descriptionsForItems:(id)arg1;
+ (void)compressNestingWithTreeItems:(id)arg1;
+ (void)sortAndCombineTreeItems:(id)arg1;
+ (id)sortableTreeItemForObject:(id)arg1;
+ (id)sortableTreeItemsForSortableObjects:(id)arg1;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <BCSortable> object; // @synthesize object=_object;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *descriptionDictionary;
- (void)compressNesting;
- (id)initWithObject:(id)arg1 parent:(id)arg2 name:(id)arg3;

@end
