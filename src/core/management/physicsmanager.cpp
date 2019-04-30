#include "physicsmanager.h"
#include "SFML/Graphics.hpp"
#include "../tools/time.h"


namespace engine
{
    PhysicsManager::PhysicsManager()
    {
    }

    void PhysicsManager::updatePhysics()
    {

    }

    void PhysicsManager::addCollider(RectCollider* collider)
    {
        rectColliders.push_back(collider);
    }
    void PhysicsManager::removeCollider(RectCollider* collider)
    {
        collider->hide();
        rectColliders.erase(remove(rectColliders.begin(), rectColliders.end(), collider), rectColliders.end());
    }

    void PhysicsManager::addPhysicalBody(PhysicalBody* physicalBody)
    {
        physicalBodies.push_back(physicalBody);
    }

    void PhysicsManager::removePhysicalBody(PhysicalBody* physicalBody)
    {
        physicalBodies.erase(remove(physicalBodies.begin(), physicalBodies.end(), physicalBody), physicalBodies.end());
    }

    void PhysicsManager::calculatePhysics()
    {
        for (auto element : physicalBodies)
            {
                element->prevPosition = element->parentObject->position;

                if (element->gravitation)
                    element->velocity += sf::Vector2f(0, element->gravitationValue);

                element->parentObject->position += element->velocity * Time::deltaTime;
            }
    }

    void PhysicsManager::detectCollisions()
    {

        for (auto firstCollider : rectColliders)
            for (auto secondCollider : rectColliders)
            {
                if (!firstCollider->parentObject->hasComponent<PhysicalBody>())
                    continue;

                if (firstCollider == secondCollider)
                    continue;

                if (checkCollision(firstCollider, secondCollider))
                {
                    std::cout << "Collision" << std::endl;
                }
            }

    }

    void PhysicsManager::collide(CollisionDetails& details)
    {}

    bool PhysicsManager::checkCollision(RectCollider* collider_1, RectCollider* collider_2)
    {
        sf::Vector2f leftUpper_1 = collider_1->parentObject->position + collider_1->leftUpper;
        sf::Vector2f leftUpper_2 = collider_2->parentObject->position + collider_2->leftUpper;

        sf::Vector2f rightBottom_1 = collider_1->parentObject->position + collider_1->rightBottom;
        sf::Vector2f rightBottom_2 = collider_2->parentObject->position + collider_2->rightBottom;

        if (rightBottom_1.x < leftUpper_2.x)
            return false;

        if (leftUpper_1.x > rightBottom_2.x)
            return false;

        if (rightBottom_1.y > leftUpper_2.y)
            return false;

        if (leftUpper_1.y < rightBottom_2.y)
            return false;

        return true;
    }

    CollisionDetails PhysicsManager::getCollisionDetails(RectCollider* collider_1, RectCollider* collider_2)
    {}

}

