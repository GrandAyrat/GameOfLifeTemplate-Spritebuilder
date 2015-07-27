//
//  Creature.h
//  GameOfLife
//
//  Created by Айрат Галиуллин on 14.06.15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite
//дает текущую позицию монстра
@property (nonatomic,assign) BOOL isAlive;
//дает колличество живущих соседей
@property (nonatomic,assign) NSInteger livingNeighbors;
- (id)initCreature;
@end
