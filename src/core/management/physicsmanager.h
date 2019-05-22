#ifndef PHYSICSMANAGER_H
#define PHYSICSMANAGER_H
#include "../objects/gameobject.h"
#include "../object_components/physicalbody.h"
#include "../object_components/rectcollider.h"
#include <vector>
#include <iostream>


namespace engine
{
    class PhysicsManager
    {
    public:

        PhysicsManager();
        void updatePhysics();

        void addCollider(RectCollider* collider);
        void removeCollider(RectCollider* collider);

        void addPhysicalBody(PhysicalBody* physicalBody);
        void removePhysicalBody(PhysicalBody* physicalBody);

    private:

        std::vector<RectCollider*> rectColliders;
        std::vector<PhysicalBody*> physicalBodies;

        void calculatePhysics();
        void detectCollisions();
        void collide(CollisionDetails& details);
        void pushApart(CollisionDetails& details);
        bool checkCollision(RectCollider* collider_1, RectCollider* collider_2);

        CollisionDetails setCollisionDetails(RectCollider* collider_1, RectCollider* collider_2);

    };

}


#endif // PHYSICSMANAGER_H
