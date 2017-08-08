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



#include "ActivityResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ActivityResource::ActivityResource()
{
    m_Additional_propertiesIsSet = false;
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_EntitlementsIsSet = false;
    m_Id = 0L;
    m_IdIsSet = false;
    m_Launch = U("");
    m_LaunchIsSet = false;
    m_Long_description = U("");
    m_Long_descriptionIsSet = false;
    m_Name = U("");
    m_Reward_setIsSet = false;
    m_SettingsIsSet = false;
    m_Short_description = U("");
    m_Short_descriptionIsSet = false;
    m_Template = false;
    m_TemplateIsSet = false;
    m_Template_id = U("");
    m_Template_idIsSet = false;
    m_Type = U("");
    m_Unique_key = U("");
    m_Unique_keyIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
}

ActivityResource::~ActivityResource()
{
}

void ActivityResource::validate()
{
    // TODO: implement validation
}

web::json::value ActivityResource::toJson() const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Entitlements )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("entitlements")] = web::json::value::array(jsonArray);
        }
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_LaunchIsSet)
    {
        val[U("launch")] = ModelBase::toJson(m_Launch);
    }
    if(m_Long_descriptionIsSet)
    {
        val[U("long_description")] = ModelBase::toJson(m_Long_description);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_Reward_setIsSet)
    {
        val[U("reward_set")] = ModelBase::toJson(m_Reward_set);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Settings )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("settings")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Short_descriptionIsSet)
    {
        val[U("short_description")] = ModelBase::toJson(m_Short_description);
    }
    if(m_TemplateIsSet)
    {
        val[U("template")] = ModelBase::toJson(m_Template);
    }
    if(m_Template_idIsSet)
    {
        val[U("template_id")] = ModelBase::toJson(m_Template_id);
    }
    val[U("type")] = ModelBase::toJson(m_Type);
    if(m_Unique_keyIsSet)
    {
        val[U("unique_key")] = ModelBase::toJson(m_Unique_key);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }

    return val;
}

void ActivityResource::fromJson(web::json::value& val)
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
    {
        m_Entitlements.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("entitlements")))
        {
        for( auto& item : val[U("entitlements")].as_array() )
        {
            if(item.is_null())
            {
                m_Entitlements.push_back( std::shared_ptr<ActivityEntitlementResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<ActivityEntitlementResource> newItem(new ActivityEntitlementResource());
                newItem->fromJson(item);
                m_Entitlements.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("launch")))
    {
        setLaunch(ModelBase::stringFromJson(val[U("launch")]));
    }
    if(val.has_field(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromJson(val[U("long_description")]));
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("reward_set")))
    {
        if(!val[U("reward_set")].is_null())
        {
            std::shared_ptr<RewardSetResource> newItem(new RewardSetResource());
            newItem->fromJson(val[U("reward_set")]);
            setRewardSet( newItem );
        }
    }
    {
        m_Settings.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("settings")))
        {
        for( auto& item : val[U("settings")].as_array() )
        {
            if(item.is_null())
            {
                m_Settings.push_back( std::shared_ptr<AvailableSettingResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<AvailableSettingResource> newItem(new AvailableSettingResource());
                newItem->fromJson(item);
                m_Settings.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("short_description")))
    {
        setShortDescription(ModelBase::stringFromJson(val[U("short_description")]));
    }
    if(val.has_field(U("template")))
    {
        setTemplate(ModelBase::boolFromJson(val[U("template")]));
    }
    if(val.has_field(U("template_id")))
    {
        setTemplateId(ModelBase::stringFromJson(val[U("template_id")]));
    }
    setType(ModelBase::stringFromJson(val[U("type")]));
    if(val.has_field(U("unique_key")))
    {
        setUniqueKey(ModelBase::stringFromJson(val[U("unique_key")]));
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
}

void ActivityResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Entitlements )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("entitlements"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_LaunchIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("launch"), m_Launch));
        
    }
    if(m_Long_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("long_description"), m_Long_description));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_Reward_setIsSet)
    {
        if (m_Reward_set.get())
        {
            m_Reward_set->toMultipart(multipart, U("reward_set."));
        }
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Settings )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("settings"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Short_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("short_description"), m_Short_description));
        
    }
    if(m_TemplateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("template"), m_Template));
    }
    if(m_Template_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("template_id"), m_Template_id));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_Unique_keyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("unique_key"), m_Unique_key));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
}

void ActivityResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    {
        m_Entitlements.clear();
        if(multipart->hasContent(U("entitlements")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("entitlements"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Entitlements.push_back( std::shared_ptr<ActivityEntitlementResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<ActivityEntitlementResource> newItem(new ActivityEntitlementResource());
                newItem->fromJson(item);
                m_Entitlements.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("launch")))
    {
        setLaunch(ModelBase::stringFromHttpContent(multipart->getContent(U("launch"))));
    }
    if(multipart->hasContent(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("long_description"))));
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("reward_set")))
    {
        if(multipart->hasContent(U("reward_set")))
        {
            std::shared_ptr<RewardSetResource> newItem(new RewardSetResource());
            newItem->fromMultiPart(multipart, U("reward_set."));
            setRewardSet( newItem );
        }
    }
    {
        m_Settings.clear();
        if(multipart->hasContent(U("settings")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("settings"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Settings.push_back( std::shared_ptr<AvailableSettingResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<AvailableSettingResource> newItem(new AvailableSettingResource());
                newItem->fromJson(item);
                m_Settings.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("short_description")))
    {
        setShortDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("short_description"))));
    }
    if(multipart->hasContent(U("template")))
    {
        setTemplate(ModelBase::boolFromHttpContent(multipart->getContent(U("template"))));
    }
    if(multipart->hasContent(U("template_id")))
    {
        setTemplateId(ModelBase::stringFromHttpContent(multipart->getContent(U("template_id"))));
    }
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("unique_key")))
    {
        setUniqueKey(ModelBase::stringFromHttpContent(multipart->getContent(U("unique_key"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
}

std::map<utility::string_t, std::shared_ptr<Property>>& ActivityResource::getAdditionalProperties()
{
    return m_Additional_properties;
}

void ActivityResource::setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value)
{
    m_Additional_properties = value;
    m_Additional_propertiesIsSet = true;
}
bool ActivityResource::additionalPropertiesIsSet() const
{
    return m_Additional_propertiesIsSet;
}

void ActivityResource::unsetAdditional_properties()
{
    m_Additional_propertiesIsSet = false;
}

int64_t ActivityResource::getCreatedDate() const
{
    return m_Created_date;
}


void ActivityResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool ActivityResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void ActivityResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

std::vector<std::shared_ptr<ActivityEntitlementResource>>& ActivityResource::getEntitlements()
{
    return m_Entitlements;
}

void ActivityResource::setEntitlements(std::vector<std::shared_ptr<ActivityEntitlementResource>> value)
{
    m_Entitlements = value;
    m_EntitlementsIsSet = true;
}
bool ActivityResource::entitlementsIsSet() const
{
    return m_EntitlementsIsSet;
}

void ActivityResource::unsetEntitlements()
{
    m_EntitlementsIsSet = false;
}

int64_t ActivityResource::getId() const
{
    return m_Id;
}


void ActivityResource::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool ActivityResource::idIsSet() const
{
    return m_IdIsSet;
}

void ActivityResource::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t ActivityResource::getLaunch() const
{
    return m_Launch;
}


void ActivityResource::setLaunch(utility::string_t value)
{
    m_Launch = value;
    m_LaunchIsSet = true;
}
bool ActivityResource::launchIsSet() const
{
    return m_LaunchIsSet;
}

void ActivityResource::unsetLaunch()
{
    m_LaunchIsSet = false;
}

utility::string_t ActivityResource::getLongDescription() const
{
    return m_Long_description;
}


void ActivityResource::setLongDescription(utility::string_t value)
{
    m_Long_description = value;
    m_Long_descriptionIsSet = true;
}
bool ActivityResource::longDescriptionIsSet() const
{
    return m_Long_descriptionIsSet;
}

void ActivityResource::unsetLong_description()
{
    m_Long_descriptionIsSet = false;
}

utility::string_t ActivityResource::getName() const
{
    return m_Name;
}


void ActivityResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
std::shared_ptr<RewardSetResource> ActivityResource::getRewardSet() const
{
    return m_Reward_set;
}


void ActivityResource::setRewardSet(std::shared_ptr<RewardSetResource> value)
{
    m_Reward_set = value;
    m_Reward_setIsSet = true;
}
bool ActivityResource::rewardSetIsSet() const
{
    return m_Reward_setIsSet;
}

void ActivityResource::unsetReward_set()
{
    m_Reward_setIsSet = false;
}

std::vector<std::shared_ptr<AvailableSettingResource>>& ActivityResource::getSettings()
{
    return m_Settings;
}

void ActivityResource::setSettings(std::vector<std::shared_ptr<AvailableSettingResource>> value)
{
    m_Settings = value;
    m_SettingsIsSet = true;
}
bool ActivityResource::settingsIsSet() const
{
    return m_SettingsIsSet;
}

void ActivityResource::unsetSettings()
{
    m_SettingsIsSet = false;
}

utility::string_t ActivityResource::getShortDescription() const
{
    return m_Short_description;
}


void ActivityResource::setShortDescription(utility::string_t value)
{
    m_Short_description = value;
    m_Short_descriptionIsSet = true;
}
bool ActivityResource::shortDescriptionIsSet() const
{
    return m_Short_descriptionIsSet;
}

void ActivityResource::unsetShort_description()
{
    m_Short_descriptionIsSet = false;
}

bool ActivityResource::getTemplate() const
{
    return m_Template;
}


void ActivityResource::setTemplate(bool value)
{
    m_Template = value;
    m_TemplateIsSet = true;
}
bool ActivityResource::templateIsSet() const
{
    return m_TemplateIsSet;
}

void ActivityResource::unsetTemplate()
{
    m_TemplateIsSet = false;
}

utility::string_t ActivityResource::getTemplateId() const
{
    return m_Template_id;
}


void ActivityResource::setTemplateId(utility::string_t value)
{
    m_Template_id = value;
    m_Template_idIsSet = true;
}
bool ActivityResource::templateIdIsSet() const
{
    return m_Template_idIsSet;
}

void ActivityResource::unsetTemplate_id()
{
    m_Template_idIsSet = false;
}

utility::string_t ActivityResource::getType() const
{
    return m_Type;
}


void ActivityResource::setType(utility::string_t value)
{
    m_Type = value;
    
}
utility::string_t ActivityResource::getUniqueKey() const
{
    return m_Unique_key;
}


void ActivityResource::setUniqueKey(utility::string_t value)
{
    m_Unique_key = value;
    m_Unique_keyIsSet = true;
}
bool ActivityResource::uniqueKeyIsSet() const
{
    return m_Unique_keyIsSet;
}

void ActivityResource::unsetUnique_key()
{
    m_Unique_keyIsSet = false;
}

int64_t ActivityResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void ActivityResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool ActivityResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void ActivityResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

