//
//  Grid.h
//  GameOfLife
//
//  Created by Айрат Галиуллин on 14.06.15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@property (nonatomic, assign) int totalAlive;
@property (nonatomic,assign) int generation;
- (id) evolveStep;
- (id) countNeighbors;
- (id) updateCreature;
@end

