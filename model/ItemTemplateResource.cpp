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



#include "ItemTemplateResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ItemTemplateResource::ItemTemplateResource()
{
    m_BehaviorsIsSet = false;
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Name = U("");
    m_PropertiesIsSet = false;
    m_Updated_date = 0;
    m_Updated_dateIsSet = false;
    
}

ItemTemplateResource::~ItemTemplateResource()
{
}

void ItemTemplateResource::validate()
{
    // TODO: implement validation
}

web::json::value ItemTemplateResource::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Behaviors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("behaviors")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Properties )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("properties")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }
    

    return val;
}

void ItemTemplateResource::fromJson(web::json::value& val)
{
    {
        m_Behaviors.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("behaviors")))
        {
        for( auto& item : val[U("behaviors")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Behaviors.push_back( std::shared_ptr<ItemBehaviorDefinitionResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<ItemBehaviorDefinitionResource> newItem(new ItemBehaviorDefinitionResource());
                newItem->fromJson(item);
                m_Behaviors.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    {
        m_Properties.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("properties")))
        {
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
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
    
}

void ItemTemplateResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Behaviors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("behaviors"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Properties )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("properties"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
    
}

void ItemTemplateResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Behaviors.clear();
        if(multipart->hasContent(U("behaviors")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("behaviors"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Behaviors.push_back( std::shared_ptr<ItemBehaviorDefinitionResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<ItemBehaviorDefinitionResource> newItem(new ItemBehaviorDefinitionResource());
                newItem->fromJson(item);
                m_Behaviors.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
        
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    {
        m_Properties.clear();
        if(multipart->hasContent(U("properties")))
        {

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
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    
}


std::vector<std::shared_ptr<ItemBehaviorDefinitionResource>>& ItemTemplateResource::getBehaviors()
{
    return m_Behaviors;
}
bool ItemTemplateResource::behaviorsIsSet() const
{
    return m_BehaviorsIsSet;
}
void ItemTemplateResource::unsetBehaviors()
{
    m_BehaviorsIsSet = false;
}
int64_t ItemTemplateResource::getCreatedDate() const
{
    return m_Created_date;
}
void ItemTemplateResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool ItemTemplateResource::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void ItemTemplateResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
utility::string_t ItemTemplateResource::getId() const
{
    return m_Id;
}
void ItemTemplateResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool ItemTemplateResource::idIsSet() const
{
    return m_IdIsSet;
}
void ItemTemplateResource::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t ItemTemplateResource::getName() const
{
    return m_Name;
}
void ItemTemplateResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
std::vector<std::shared_ptr<PropertyDefinitionResource>>& ItemTemplateResource::getProperties()
{
    return m_Properties;
}
bool ItemTemplateResource::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ItemTemplateResource::unsetProperties()
{
    m_PropertiesIsSet = false;
}
int64_t ItemTemplateResource::getUpdatedDate() const
{
    return m_Updated_date;
}
void ItemTemplateResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool ItemTemplateResource::updated_dateIsSet() const
{
    return m_Updated_dateIsSet;
}
void ItemTemplateResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

