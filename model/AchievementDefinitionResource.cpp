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



#include "AchievementDefinitionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

AchievementDefinitionResource::AchievementDefinitionResource()
{
    m_Additional_propertiesIsSet = false;
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Hidden = false;
    m_Name = U("");
    m_Required_progress = 0;
    m_Rule_id = U("");
    m_Rule_idIsSet = false;
    m_TagsIsSet = false;
    m_Template = U("");
    m_TemplateIsSet = false;
    m_Trigger_event_name = U("");
    m_Trigger_event_nameIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
}

AchievementDefinitionResource::~AchievementDefinitionResource()
{
}

void AchievementDefinitionResource::validate()
{
    // TODO: implement validation
}

web::json::value AchievementDefinitionResource::toJson() const
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
    val[U("hidden")] = ModelBase::toJson(m_Hidden);
    val[U("name")] = ModelBase::toJson(m_Name);
    val[U("required_progress")] = ModelBase::toJson(m_Required_progress);
    if(m_Rule_idIsSet)
    {
        val[U("rule_id")] = ModelBase::toJson(m_Rule_id);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("tags")] = web::json::value::array(jsonArray);
        }
    }
    if(m_TemplateIsSet)
    {
        val[U("template")] = ModelBase::toJson(m_Template);
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

void AchievementDefinitionResource::fromJson(web::json::value& val)
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
    setHidden(ModelBase::boolFromJson(val[U("hidden")]));
    setName(ModelBase::stringFromJson(val[U("name")]));
    setRequiredProgress(ModelBase::int32_tFromJson(val[U("required_progress")]));
    if(val.has_field(U("rule_id")))
    {
        setRuleId(ModelBase::stringFromJson(val[U("rule_id")]));
    }
    {
        m_Tags.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("tags")))
        {
        for( auto& item : val[U("tags")].as_array() )
        {
            m_Tags.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(val.has_field(U("template")))
    {
        setTemplate(ModelBase::stringFromJson(val[U("template")]));
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

void AchievementDefinitionResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    multipart->add(ModelBase::toHttpContent(namePrefix + U("hidden"), m_Hidden));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("required_progress"), m_Required_progress));
    if(m_Rule_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("rule_id"), m_Rule_id));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("tags"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_TemplateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("template"), m_Template));
        
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

void AchievementDefinitionResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    setHidden(ModelBase::boolFromHttpContent(multipart->getContent(U("hidden"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    setRequiredProgress(ModelBase::int32_tFromHttpContent(multipart->getContent(U("required_progress"))));
    if(multipart->hasContent(U("rule_id")))
    {
        setRuleId(ModelBase::stringFromHttpContent(multipart->getContent(U("rule_id"))));
    }
    {
        m_Tags.clear();
        if(multipart->hasContent(U("tags")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("tags"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Tags.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(multipart->hasContent(U("template")))
    {
        setTemplate(ModelBase::stringFromHttpContent(multipart->getContent(U("template"))));
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

std::map<utility::string_t, std::shared_ptr<Property>>& AchievementDefinitionResource::getAdditionalProperties()
{
    return m_Additional_properties;
}

void AchievementDefinitionResource::setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value)
{
    m_Additional_properties = value;
    m_Additional_propertiesIsSet = true;
}
bool AchievementDefinitionResource::additionalPropertiesIsSet() const
{
    return m_Additional_propertiesIsSet;
}

void AchievementDefinitionResource::unsetAdditional_properties()
{
    m_Additional_propertiesIsSet = false;
}

int64_t AchievementDefinitionResource::getCreatedDate() const
{
    return m_Created_date;
}


void AchievementDefinitionResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool AchievementDefinitionResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void AchievementDefinitionResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

utility::string_t AchievementDefinitionResource::getDescription() const
{
    return m_Description;
}


void AchievementDefinitionResource::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool AchievementDefinitionResource::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void AchievementDefinitionResource::unsetDescription()
{
    m_DescriptionIsSet = false;
}

bool AchievementDefinitionResource::getHidden() const
{
    return m_Hidden;
}


void AchievementDefinitionResource::setHidden(bool value)
{
    m_Hidden = value;
    
}
utility::string_t AchievementDefinitionResource::getName() const
{
    return m_Name;
}


void AchievementDefinitionResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
int32_t AchievementDefinitionResource::getRequiredProgress() const
{
    return m_Required_progress;
}


void AchievementDefinitionResource::setRequiredProgress(int32_t value)
{
    m_Required_progress = value;
    
}
utility::string_t AchievementDefinitionResource::getRuleId() const
{
    return m_Rule_id;
}


void AchievementDefinitionResource::setRuleId(utility::string_t value)
{
    m_Rule_id = value;
    m_Rule_idIsSet = true;
}
bool AchievementDefinitionResource::ruleIdIsSet() const
{
    return m_Rule_idIsSet;
}

void AchievementDefinitionResource::unsetRule_id()
{
    m_Rule_idIsSet = false;
}

std::vector<utility::string_t>& AchievementDefinitionResource::getTags()
{
    return m_Tags;
}

void AchievementDefinitionResource::setTags(std::vector<utility::string_t> value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}
bool AchievementDefinitionResource::tagsIsSet() const
{
    return m_TagsIsSet;
}

void AchievementDefinitionResource::unsetTags()
{
    m_TagsIsSet = false;
}

utility::string_t AchievementDefinitionResource::getTemplate() const
{
    return m_Template;
}


void AchievementDefinitionResource::setTemplate(utility::string_t value)
{
    m_Template = value;
    m_TemplateIsSet = true;
}
bool AchievementDefinitionResource::templateIsSet() const
{
    return m_TemplateIsSet;
}

void AchievementDefinitionResource::unsetTemplate()
{
    m_TemplateIsSet = false;
}

utility::string_t AchievementDefinitionResource::getTriggerEventName() const
{
    return m_Trigger_event_name;
}


void AchievementDefinitionResource::setTriggerEventName(utility::string_t value)
{
    m_Trigger_event_name = value;
    m_Trigger_event_nameIsSet = true;
}
bool AchievementDefinitionResource::triggerEventNameIsSet() const
{
    return m_Trigger_event_nameIsSet;
}

void AchievementDefinitionResource::unsetTrigger_event_name()
{
    m_Trigger_event_nameIsSet = false;
}

int64_t AchievementDefinitionResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void AchievementDefinitionResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool AchievementDefinitionResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void AchievementDefinitionResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

