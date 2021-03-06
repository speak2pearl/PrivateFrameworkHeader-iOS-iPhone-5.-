/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class NSString, NSData, NSDictionary, NSDate;

@interface WebBookmark : NSObject  {
    BOOL _folder;
    NSString *_title;
    NSString *_url;
    NSString *_UUID;
    NSString *_serverID;
    NSString *_syncKey;
    NSData *_syncData;
    BOOL _editable;
    BOOL _deletable;
    BOOL _hidden;
    BOOL _fetchedIconData;
    NSData *_iconData;
    NSDictionary *_extraAttributes;
    unsigned int _id;
    unsigned int _parentID;
    unsigned int _specialID;
    unsigned int _orderIndex;
    BOOL _inserted;
}

@property(retain) NSString * previewText;
@property BOOL fetchedIconData;
@property(retain) NSData * iconData;
@property(retain) NSDate * dateAdded;
@property(retain) NSDate * dateLastViewed;
@property(retain) NSDate * dateLastFetched;
@property(retain) NSString * serverID;
@property(retain) NSString * syncKey;
@property(retain) NSData * syncData;
@property(retain) NSDictionary * extraAttributes;
@property(getter=isInserted,readonly) BOOL inserted;
@property(getter=isFolder,readonly) BOOL folder;
@property(getter=isHidden,readonly) BOOL hidden;
@property(getter=isDeletable,readonly) BOOL deletable;
@property(getter=isEditable,readonly) BOOL editable;
@property(readonly) unsigned int specialID;
@property(readonly) NSString * UUID;
@property(readonly) unsigned int identifier;
@property(readonly) unsigned int parentID;
@property(retain) NSString * address;
@property(retain) NSString * title;


- (void)setPreviewText:(id)arg1;
- (id)dateAdded;
- (void)setDateAdded:(id)arg1;
- (id)dateLastViewed;
- (void)setDateLastViewed:(id)arg1;
- (id)dateLastFetched;
- (void)setDateLastFetched:(id)arg1;
- (void)setTitle:(id)arg1 previewText:(id)arg2 dateLastViewed:(id)arg3 dateLastFetched:(id)arg4;
- (void)setIconData:(id)arg1;
- (void)setFetchedIconData:(BOOL)arg1;
- (id)_readingListPropertyNamed:(id)arg1;
- (void)_modifyReadingListAttributes:(id)arg1;
- (BOOL)isReadingListItem;
- (id)syncData;
- (id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3 iconData:(id)arg4;
- (void)_setID:(unsigned int)arg1;
- (void)_setUUID:(id)arg1;
- (void)_setInserted:(BOOL)arg1;
- (BOOL)fetchedIconData;
- (void)_setHidden:(BOOL)arg1;
- (void)_markSpecial:(unsigned int)arg1;
- (id)_initWithSqliteRow:(struct sqlite3_stmt { }*)arg1;
- (void)_setParentID:(unsigned int)arg1;
- (void)setSyncData:(id)arg1;
- (void)_setOrderIndex:(unsigned int)arg1;
- (unsigned int)_orderIndex;
- (id)initStaticWithTitle:(id)arg1 address:(id)arg2;
- (id)initFolderWithParentID:(unsigned int)arg1;
- (BOOL)isReadingListFolder;
- (BOOL)isFolder;
- (BOOL)isDeletable;
- (unsigned int)specialID;
- (id)initWithTitle:(id)arg1 address:(id)arg2;
- (id)shortTypeDescription;
- (void)setAddress:(id)arg1;
- (id)address;
- (id)localizedTitle;
- (id)UUID;
- (BOOL)isInserted;
- (BOOL)isEditable;
- (unsigned int)identifier;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isHidden;
- (id)previewText;
- (void)setExtraAttributes:(id)arg1;
- (id)extraAttributes;
- (id)iconData;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)syncKey;
- (void)setSyncKey:(id)arg1;
- (id)serverID;
- (unsigned int)parentID;
- (void)setServerID:(id)arg1;

@end
