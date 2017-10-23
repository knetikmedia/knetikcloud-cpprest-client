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



#include "LevelingResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

LevelingResource::LevelingResource()
{
    m_Additional_propertiesIsSet = false;
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Name = U("");
    m_TiersIsSet = false;
    m_Trigger_event_name = U("");
    m_Trigger_event_nameIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
}

LevelingResource::~LevelingResource()
{
}

void LevelingResource::validate()
{
    // TODO: implement validation
}

web::json::value LevelingResource::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Additional_properties )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        if(jsonArray.size() > 0)
        {
            val[U("additional_properties")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tiers )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("tiers")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Trigger_event_nameIsSet)
    {
        val[U("trigger_event_name")] = ModelBase::toJson(m_Trigger_event_name);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }

    return val;
}

void LevelingResource::fromJson(web::json::value& val)
{
    {
        m_Additional_properties.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("additional_properties")))
        {
        for( auto& item : val[U("additional_properties")].as_array() )
        {  
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(item.is_null())
            {
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, std::shared_ptr<Property>(nullptr) ));
            }
            else
            {
                std::shared_ptr<Property> newItem(new Property());
                newItem->fromJson(item[U("value")]);
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, newItem ));
            }
        }
        }
    }
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    {
        m_Tiers.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("tiers")))
        {
        for( auto& item : val[U("tiers")].as_array() )
        {
            if(item.is_null())
            {
                m_Tiers.push_back( std::shared_ptr<TierResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<TierResource> newItem(new TierResource());
                newItem->fromJson(item);
                m_Tiers.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("trigger_event_name")))
    {
        setTriggerEventName(ModelBase::stringFromJson(val[U("trigger_event_name")]));
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
}

void LevelingResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Additional_properties )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("additional_properties"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tiers )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("tiers"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Trigger_event_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("trigger_event_name"), m_Trigger_event_name));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
}

void LevelingResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Additional_properties.clear();
        if(multipart->hasContent(U("additional_properties")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("additional_properties"))));
        for( auto& item : jsonArray.as_array() )
        {
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(item.is_null())
            {
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, std::shared_ptr<Property>(nullptr) ));
            }
            else
            {
                std::shared_ptr<Property> newItem(new Property());
                newItem->fromJson(item[U("value")]);
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, newItem ));
            }
        }
        }
    }
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    {
        m_Tiers.clear();
        if(multipart->hasContent(U("tiers")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("tiers"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Tiers.push_back( std::shared_ptr<TierResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<TierResource> newItem(new TierResource());
                newItem->fromJson(item);
                m_Tiers.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("trigger_event_name")))
    {
        setTriggerEventName(ModelBase::stringFromHttpContent(multipart->getContent(U("trigger_event_name"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
}

std::map<utility::string_t, std::shared_ptr<Property>>& LevelingResource::getAdditionalProperties()
{
    return m_Additional_properties;
}

void LevelingResource::setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value)
{
    m_Additional_properties = value;
    m_Additional_propertiesIsSet = true;
}
bool LevelingResource::additionalPropertiesIsSet() const
{
    return m_Additional_propertiesIsSet;
}

void LevelingResource::unsetAdditional_properties()
{
    m_Additional_propertiesIsSet = false;
}

int64_t LevelingResource::getCreatedDate() const
{
    return m_Created_date;
}


void LevelingResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool LevelingResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void LevelingResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

utility::string_t LevelingResource::getDescription() const
{
    return m_Description;
}


void LevelingResource::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool LevelingResource::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void LevelingResource::unsetDescription()
{
    m_DescriptionIsSet = false;
}

utility::string_t LevelingResource::getName() const
{
    return m_Name;
}


void LevelingResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
std::vector<std::shared_ptr<TierResource>>& LevelingResource::getTiers()
{
    return m_Tiers;
}

void LevelingResource::setTiers(std::vector<std::shared_ptr<TierResource>> value)
{
    m_Tiers = value;
    m_TiersIsSet = true;
}
bool LevelingResource::tiersIsSet() const
{
    return m_TiersIsSet;
}

void LevelingResource::unsetTiers()
{
    m_TiersIsSet = false;
}

utility::string_t LevelingResource::getTriggerEventName() const
{
    return m_Trigger_event_name;
}


void LevelingResource::setTriggerEventName(utility::string_t value)
{
    m_Trigger_event_name = value;
    m_Trigger_event_nameIsSet = true;
}
bool LevelingResource::triggerEventNameIsSet() const
{
    return m_Trigger_event_nameIsSet;
}

void LevelingResource::unsetTrigger_event_name()
{
    m_Trigger_event_nameIsSet = false;
}

int64_t LevelingResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void LevelingResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool LevelingResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void LevelingResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

