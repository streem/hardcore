//
//  Levels.h
//  Hardcore
//
//  Created by Admin on 26/01/15.
//  Copyright 2015 Apportable. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "GamePlay.h"



@interface Levels : CCNode {
//    GamePlay *gameplay;
    CCNode *_rustyPosition;
    
}

@property CCSprite *myBg;
@property BOOL fifteenEnabled;


@property GamePlay *gameplayParrentDelegate;


//- (instancetype)initWithGamePlay:(GamePlay *)gp;
- (instancetype)initWithParrentDelegate:(id)parrentDelegate;


- (void)movePlayerLight:(CGPoint)rustyPoint;

//- (void)portalBright;
- (void)hidePortals;
-(void) animatePortal:(int)portalId;


-(void) initFall:(CCNode*)fallNode _fallId:(int)fallId _initialPos:(CGPoint)initialPos;

-(CGPoint)getRustyPos;
-(void) updateRustyMask;

-(void) makePortalExplode:(id)object withSelector:(SEL)selector;

-(void) moveRustyMaskToPosition:(CGPoint)maskPos;

@property CCSprite *_rustyMask;

@property CCNode *inv_wall;


-(CGPoint)getRustyPosition;

@property BOOL rightFirstPressed;
@property BOOL leftFirstPressed;
@property BOOL leftMenuFirstStart;
@property BOOL leftMenuFirstClosed;


@property BOOL rightMenuFirstStart;
@property BOOL portalFirstReached;
@property BOOL firstDoubleJump;
@property BOOL allowRustyMoveTutorial;
@property BOOL allowRightLeftMenu;
@property BOOL lastWordAppear;


@property BOOL rightPortallFirstReached;
@property CCNode *arrow1;


-(void) initLevelFromString:(NSString *)levelName;
@end
