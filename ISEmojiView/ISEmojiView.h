//
//  ISEmojiView.h
//  ISEmojiViewSample
//
//  Created by isaced on 14/12/25.
//  Copyright (c) 2014 Year isaced. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ISEmojiViewDelegate;

/**
 *  The custom keyboard view
 */
@interface ISEmojiView : UIView

/**
 *  ISEmojiView Delegate
 */
@property (nonatomic, assign) id<ISEmojiViewDelegate> delegate;

@end

/**
 *  ISEmojiView Delegate
 *
 *  Used to respond to some of the operations callback
 */
@protocol ISEmojiViewDelegate <NSObject>

/**
 *  When you choose a Emoji
 *
 *  @param emojiView The emoji keyboard view
 *  @param emoji     The selected emoji character
 */
-(void)emojiView:(ISEmojiView *)emojiView didSelectEmoji:(NSString *)emoji;

/**
 *  When the touch bottom right corner of the delete key
 *
 *  You should remove the last character(emoji) in the text box
 *  @param emojiView    The emoji keyboard view
 *  @param deletebutton The delete button
 */
-(void)emojiView:(ISEmojiView *)emojiView didPressDeleteButton:(UIButton *)deletebutton;

@end


/**
 *  The Delete Button
 *
 *  You do not care about it
 */
@interface ISDeleteButton : UIButton    @end