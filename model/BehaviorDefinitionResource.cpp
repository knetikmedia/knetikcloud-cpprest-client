/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "BehaviorDefinitionResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

BehaviorDefinitionResource::BehaviorDefinitionResource()
{
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Prerequisite_behaviorsIsSet = false;
    m_Type_hint = U("");
    
}

BehaviorDefinitionResource::~BehaviorDefinitionResource()
{
}

void BehaviorDefinitionResource::validate()
{
    // TODO: implement validation
}

web::json::value BehaviorDefinitionResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Prerequisite_behaviors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("prerequisite_behaviors")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Properties )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("properties")] = web::json::value::array(jsonArray);
            }
    val[U("type_hint")] = ModelBase::toJson(m_Type_hint);
    

    return val;
}

void BehaviorDefinitionResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
        
    }
    {
        m_Prerequisite_behaviors.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("prerequisite_behaviors")))
        {
        for( auto& item : val[U("prerequisite_behaviors")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Prerequisite_behaviors.push_back( std::shared_ptr<Behavior>(nullptr) );
            }
            else
            {
                std::shared_ptr<Behavior> newItem(new Behavior());
                newItem->fromJson(item);
                m_Prerequisite_behaviors.push_back( newItem );
            }
            
        }
        }
    }
    {
        m_Properties.clear();
        std::vector<web::json::value> jsonArray;
                for( auto& item : val[U("properties")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Properties.push_back( std::shared_ptr<PropertyDefinitionResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<PropertyDefinitionResource> newItem(new PropertyDefinitionResource());
                newItem->fromJson(item);
                m_Properties.push_back( newItem );
            }
            
        }
    }
    setTypeHint(ModelBase::stringFromJson(val[U("type_hint")]));
    
}

void BehaviorDefinitionResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Prerequisite_behaviors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("prerequisite_behaviors"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Properties )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("properties"), web::json::value::array(jsonArray), U("application/json")));
            }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type_hint"), m_Type_hint));
    
}

void BehaviorDefinitionResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    {
        m_Prerequisite_behaviors.clear();
        if(multipart->hasContent(U("prerequisite_behaviors")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("prerequisite_behaviors"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Prerequisite_behaviors.push_back( std::shared_ptr<Behavior>(nullptr) );
            }
            else
            {
                std::shared_ptr<Behavior> newItem(new Behavior());
                newItem->fromJson(item);
                m_Prerequisite_behaviors.push_back( newItem );
            }
            
        }
        }
    }
    {
        m_Properties.clear();
        
        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("properties"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Properties.push_back( std::shared_ptr<PropertyDefinitionResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<PropertyDefinitionResource> newItem(new PropertyDefinitionResource());
                newItem->fromJson(item);
                m_Properties.push_back( newItem );
            }
            
        }
    }
    setTypeHint(ModelBase::stringFromHttpContent(multipart->getContent(U("type_hint"))));
    
}


utility::string_t BehaviorDefinitionResource::getDescription() const
{
    return m_Description;
}
void BehaviorDefinitionResource::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool BehaviorDefinitionResource::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void BehaviorDefinitionResource::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::vector<std::shared_ptr<Behavior>>& BehaviorDefinitionResource::getPrerequisiteBehaviors()
{
    return m_Prerequisite_behaviors;
}
bool BehaviorDefinitionResource::prerequisite_behaviorsIsSet() const
{
    return m_Prerequisite_behaviorsIsSet;
}
void BehaviorDefinitionResource::unsetPrerequisite_behaviors()
{
    m_Prerequisite_behaviorsIsSet = false;
}
std::vector<std::shared_ptr<PropertyDefinitionResource>>& BehaviorDefinitionResource::getProperties()
{
    return m_Properties;
}
utility::string_t BehaviorDefinitionResource::getTypeHint() const
{
    return m_Type_hint;
}
void BehaviorDefinitionResource::setTypeHint(utility::string_t value)
{
    m_Type_hint = value;
    
}

}
}
}
}

