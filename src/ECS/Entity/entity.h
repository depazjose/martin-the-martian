#ifndef __ENTITY_H__
#define __ENTITY_H__
#include "ECS/Component/component.h"

#include <vector>
#include <memory>
class Component;

namespace ECS {

    class Entity {
        std::vector<unsigned int> m_componentIds;
    public:
        unsigned int m_id;

        friend class EntityManager_;

    };
    using ECSPEntity = std::shared_ptr<Entity>;

}

#endif /*__ENTITY_H__*/
