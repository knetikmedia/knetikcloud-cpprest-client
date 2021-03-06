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



#include "StoreItemTemplateResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

StoreItemTemplateResource::StoreItemTemplateResource()
{
    m_Allow_additional = false;
    m_Allow_additionalIsSet = false;
    m_BehaviorsIsSet = false;
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Name = U("");
    m_PropertiesIsSet = false;
    m_Sku_templateIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
}

StoreItemTemplateResource::~StoreItemTemplateResource()
{
}

void StoreItemTemplateResource::validate()
{
    // TODO: implement validation
}

web::json::value StoreItemTemplateResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Allow_additionalIsSet)
    {
        val[U("allow_additional")] = ModelBase::toJson(m_Allow_additional);
    }
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
    if(m_Sku_templateIsSet)
    {
        val[U("sku_template")] = ModelBase::toJson(m_Sku_template);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }

    return val;
}

void StoreItemTemplateResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("allow_additional")))
    {
        setAllowAdditional(ModelBase::boolFromJson(val[U("allow_additional")]));
    }
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
    if(val.has_field(U("sku_template")))
    {
        if(!val[U("sku_template")].is_null())
        {
            std::shared_ptr<TemplateResource> newItem(new TemplateResource());
            newItem->fromJson(val[U("sku_template")]);
            setSkuTemplate( newItem );
        }
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
}

void StoreItemTemplateResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Allow_additionalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("allow_additional"), m_Allow_additional));
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
    if(m_Sku_templateIsSet)
    {
        if (m_Sku_template.get())
        {
            m_Sku_template->toMultipart(multipart, U("sku_template."));
        }
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
}

void StoreItemTemplateResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("allow_additional")))
    {
        setAllowAdditional(ModelBase::boolFromHttpContent(multipart->getContent(U("allow_additional"))));
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
    if(multipart->hasContent(U("sku_template")))
    {
        if(multipart->hasContent(U("sku_template")))
        {
            std::shared_ptr<TemplateResource> newItem(new TemplateResource());
            newItem->fromMultiPart(multipart, U("sku_template."));
            setSkuTemplate( newItem );
        }
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
}

bool StoreItemTemplateResource::getAllowAdditional() const
{
    return m_Allow_additional;
}


void StoreItemTemplateResource::setAllowAdditional(bool value)
{
    m_Allow_additional = value;
    m_Allow_additionalIsSet = true;
}
bool StoreItemTemplateResource::allowAdditionalIsSet() const
{
    return m_Allow_additionalIsSet;
}

void StoreItemTemplateResource::unsetAllow_additional()
{
    m_Allow_additionalIsSet = false;
}

std::vector<std::shared_ptr<ItemBehaviorDefinitionResource>>& StoreItemTemplateResource::getBehaviors()
{
    return m_Behaviors;
}

void StoreItemTemplateResource::setBehaviors(std::vector<std::shared_ptr<ItemBehaviorDefinitionResource>> value)
{
    m_Behaviors = value;
    m_BehaviorsIsSet = true;
}
bool StoreItemTemplateResource::behaviorsIsSet() const
{
    return m_BehaviorsIsSet;
}

void StoreItemTemplateResource::unsetBehaviors()
{
    m_BehaviorsIsSet = false;
}

int64_t StoreItemTemplateResource::getCreatedDate() const
{
    return m_Created_date;
}


void StoreItemTemplateResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool StoreItemTemplateResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void StoreItemTemplateResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

utility::string_t StoreItemTemplateResource::getId() const
{
    return m_Id;
}


void StoreItemTemplateResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool StoreItemTemplateResource::idIsSet() const
{
    return m_IdIsSet;
}

void StoreItemTemplateResource::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t StoreItemTemplateResource::getName() const
{
    return m_Name;
}


void StoreItemTemplateResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
std::vector<std::shared_ptr<PropertyDefinitionResource>>& StoreItemTemplateResource::getProperties()
{
    return m_Properties;
}

void StoreItemTemplateResource::setProperties(std::vector<std::shared_ptr<PropertyDefinitionResource>> value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool StoreItemTemplateResource::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void StoreItemTemplateResource::unsetProperties()
{
    m_PropertiesIsSet = false;
}

std::shared_ptr<TemplateResource> StoreItemTemplateResource::getSkuTemplate() const
{
    return m_Sku_template;
}


void StoreItemTemplateResource::setSkuTemplate(std::shared_ptr<TemplateResource> value)
{
    m_Sku_template = value;
    m_Sku_templateIsSet = true;
}
bool StoreItemTemplateResource::skuTemplateIsSet() const
{
    return m_Sku_templateIsSet;
}

void StoreItemTemplateResource::unsetSku_template()
{
    m_Sku_templateIsSet = false;
}

int64_t StoreItemTemplateResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void StoreItemTemplateResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool StoreItemTemplateResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void StoreItemTemplateResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

