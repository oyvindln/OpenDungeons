/*
 *  Copyright (C) 2011-2016  OpenDungeons Team
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CREATUREBEHAVIOURATTACKENEMY_H
#define CREATUREBEHAVIOURATTACKENEMY_H

#include "creaturebehaviour/CreatureBehaviour.h"

class CreatureBehaviourAttackEnemy : public CreatureBehaviour
{
public:
    static const std::string mNameCreatureBehaviourAttackEnemy;

    CreatureBehaviourAttackEnemy()
    {}

    virtual ~CreatureBehaviourAttackEnemy()
    {}

    virtual const std::string& getName() const override
    { return mNameCreatureBehaviourAttackEnemy; }

    virtual CreatureBehaviour* clone() const override;

    virtual bool processBehaviour(Creature& creature) const override;
};

#endif // CREATUREBEHAVIOURATTACKENEMY_H
