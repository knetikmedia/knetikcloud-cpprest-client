/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "LimitedGettable.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

LimitedGettable::LimitedGettable()
{
    m_GroupIsSet = false;
}

LimitedGettable::~LimitedGettable()
{
}

void LimitedGettable::validate()
{
    // TODO: implement validation
}

web::json::value LimitedGettable::toJson() const
{
    web::json::value val = this->Behavior::toJson();

    if(m_GroupIsSet)
    {
        val[U("group")] = ModelBase::toJson(m_Group);
    }

    return val;
}

void LimitedGettable::fromJson(web::json::value& val)
{
    this->Behavior::fromJson(val);

    if(val.has_field(U("group")))
    {
        if(!val[U("group")].is_null())
        {
            std::shared_ptr<LimitedGettableGroup> newItem(new LimitedGettableGroup());
            newItem->fromJson(val[U("group")]);
            setGroup( newItem );
        }
    }
}

void LimitedGettable::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_Type_hintIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type_hint"), m_Type_hint));
        
    }
    if(m_GroupIsSet)
    {
        if (m_Group.get())
        {
            m_Group->toMultipart(multipart, U("group."));
        }
        
    }
}

void LimitedGettable::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    }
    if(multipart->hasContent(U("type_hint")))
    {
        setTypeHint(ModelBase::stringFromHttpContent(multipart->getContent(U("type_hint"))));
    }
    if(multipart->hasContent(U("group")))
    {
        if(multipart->hasContent(U("group")))
        {
            std::shared_ptr<LimitedGettableGroup> newItem(new LimitedGettableGroup());
            newItem->fromMultiPart(multipart, U("group."));
            setGroup( newItem );
        }
    }
}

std::shared_ptr<LimitedGettableGroup> LimitedGettable::getGroup() const
{
    return m_Group;
}


void LimitedGettable::setGroup(std::shared_ptr<LimitedGettableGroup> value)
{
    m_Group = value;
    m_GroupIsSet = true;
}
bool LimitedGettable::groupIsSet() const
{
    return m_GroupIsSet;
}

void LimitedGettable::unsetGroup()
{
    m_GroupIsSet = false;
}

}
}
}
}

