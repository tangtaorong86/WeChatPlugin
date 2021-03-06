//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class MMImageView, MMSidebarColorIconView, MMSidebarLabelTextField, MMView, NSImage;

__attribute__((visibility("hidden")))
@interface MMFavSidebarRowView : NSTableRowView
{
    NSImage *_icon;
    NSImage *_selectedIcon;
    MMSidebarLabelTextField *_titleLabel;
    MMSidebarLabelTextField *_countLabel;
    id <MMFavSidebarRowViewDelegate> _delegate;
    MMSidebarColorIconView *_iconView;
    MMImageView *_avatarView;
    MMView *_containerView;
}

@property(retain, nonatomic) MMView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) MMSidebarColorIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <MMFavSidebarRowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMSidebarLabelTextField *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) MMSidebarLabelTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSImage *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)_updateSelectionAppearance;
- (void)setSelected:(BOOL)arg1;
@property(retain, nonatomic) NSImage *avatar;
@property(retain, nonatomic) NSImage *icon;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

