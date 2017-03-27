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



#include "LevelingResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

LevelingResource::LevelingResource()
{
    m_Additional_propertiesIsSet = false;
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Name = U("");
    m_TiersIsSet = false;
    m_Updated_date = 0;
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

    if(m_Additional_propertiesIsSet)
    {
        val[U("additional_properties")] = ModelBase::toJson(m_Additional_properties);
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
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }
    

    return val;
}

void LevelingResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("additional_properties")))
    {
        if(!val[U("additional_properties")].is_null())
        {
            std::map<utility::string_t, std::shared_ptr<Property>> newItem(std::map<utility::string_t, Property>());
            newItem->fromJson(val[U("additional_properties")]);
            setAdditionalProperties( newItem );
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

    if(m_Additional_propertiesIsSet)
    {
        if (m_Additional_properties.get())
        {
            m_Additional_properties->toMultipart(multipart, U("additional_properties."));
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

    if(multipart->hasContent(U("additional_properties")))
    {
        if(multipart->hasContent(U("additional_properties")))
        {
            std::map<utility::string_t, std::shared_ptr<Property>> newItem(std::map<utility::string_t, Property>());
            newItem->fromMultiPart(multipart, U("additional_properties."));
            setAdditionalProperties( newItem );
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
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    
}


std::map<utility::string_t, std::shared_ptr<Property>>& LevelingResource::getAdditionalProperties()
{
    return m_Additional_properties;
}
bool LevelingResource::additional_propertiesIsSet() const
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
bool LevelingResource::created_dateIsSet() const
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
bool LevelingResource::tiersIsSet() const
{
    return m_TiersIsSet;
}
void LevelingResource::unsetTiers()
{
    m_TiersIsSet = false;
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
bool LevelingResource::updated_dateIsSet() const
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

