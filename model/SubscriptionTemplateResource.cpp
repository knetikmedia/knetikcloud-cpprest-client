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



#include "SubscriptionTemplateResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

SubscriptionTemplateResource::SubscriptionTemplateResource()
{
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Name = U("");
    m_Plan_templateIsSet = false;
    m_PropertiesIsSet = false;
    m_Updated_date = 0;
    m_Updated_dateIsSet = false;
    
}

SubscriptionTemplateResource::~SubscriptionTemplateResource()
{
}

void SubscriptionTemplateResource::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionTemplateResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_Plan_templateIsSet)
    {
        val[U("plan_template")] = ModelBase::toJson(m_Plan_template);
    }
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

void SubscriptionTemplateResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("plan_template")))
    {
        if(!val[U("plan_template")].is_null())
        {
            std::shared_ptr<TemplateResource> newItem(new TemplateResource());
            newItem->fromJson(val[U("plan_template")]);
            setPlanTemplate( newItem );
        }
        
    }
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

void SubscriptionTemplateResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
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
    if(m_Plan_templateIsSet)
    {
        if (m_Plan_template.get())
        {
            m_Plan_template->toMultipart(multipart, U("plan_template."));
        }
        
    }
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

void SubscriptionTemplateResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
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
    if(multipart->hasContent(U("plan_template")))
    {
        if(multipart->hasContent(U("plan_template")))
        {
            std::shared_ptr<TemplateResource> newItem(new TemplateResource());
            newItem->fromMultiPart(multipart, U("plan_template."));
            setPlanTemplate( newItem );
        }
        
    }
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


int64_t SubscriptionTemplateResource::getCreatedDate() const
{
    return m_Created_date;
}
void SubscriptionTemplateResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool SubscriptionTemplateResource::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void SubscriptionTemplateResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
utility::string_t SubscriptionTemplateResource::getId() const
{
    return m_Id;
}
void SubscriptionTemplateResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool SubscriptionTemplateResource::idIsSet() const
{
    return m_IdIsSet;
}
void SubscriptionTemplateResource::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t SubscriptionTemplateResource::getName() const
{
    return m_Name;
}
void SubscriptionTemplateResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
std::shared_ptr<TemplateResource> SubscriptionTemplateResource::getPlanTemplate() const
{
    return m_Plan_template;
}
void SubscriptionTemplateResource::setPlanTemplate(std::shared_ptr<TemplateResource> value)
{
    m_Plan_template = value;
    m_Plan_templateIsSet = true;
}
bool SubscriptionTemplateResource::plan_templateIsSet() const
{
    return m_Plan_templateIsSet;
}
void SubscriptionTemplateResource::unsetPlan_template()
{
    m_Plan_templateIsSet = false;
}
std::vector<std::shared_ptr<PropertyDefinitionResource>>& SubscriptionTemplateResource::getProperties()
{
    return m_Properties;
}
bool SubscriptionTemplateResource::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void SubscriptionTemplateResource::unsetProperties()
{
    m_PropertiesIsSet = false;
}
int64_t SubscriptionTemplateResource::getUpdatedDate() const
{
    return m_Updated_date;
}
void SubscriptionTemplateResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool SubscriptionTemplateResource::updated_dateIsSet() const
{
    return m_Updated_dateIsSet;
}
void SubscriptionTemplateResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

