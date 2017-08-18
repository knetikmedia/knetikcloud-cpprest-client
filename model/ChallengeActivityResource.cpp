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



#include "ChallengeActivityResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ChallengeActivityResource::ChallengeActivityResource()
{
    m_Activity_id = 0L;
    m_Additional_propertiesIsSet = false;
    m_Challenge_id = 0L;
    m_Challenge_idIsSet = false;
    m_EntitlementIsSet = false;
    m_Id = 0L;
    m_IdIsSet = false;
    m_Reward_setIsSet = false;
    m_SettingsIsSet = false;
    m_Template = U("");
    m_TemplateIsSet = false;
}

ChallengeActivityResource::~ChallengeActivityResource()
{
}

void ChallengeActivityResource::validate()
{
    // TODO: implement validation
}

web::json::value ChallengeActivityResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("activity_id")] = ModelBase::toJson(m_Activity_id);
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
    if(m_Challenge_idIsSet)
    {
        val[U("challenge_id")] = ModelBase::toJson(m_Challenge_id);
    }
    if(m_EntitlementIsSet)
    {
        val[U("entitlement")] = ModelBase::toJson(m_Entitlement);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
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
    if(m_TemplateIsSet)
    {
        val[U("template")] = ModelBase::toJson(m_Template);
    }

    return val;
}

void ChallengeActivityResource::fromJson(web::json::value& val)
{
    setActivityId(ModelBase::int64_tFromJson(val[U("activity_id")]));
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
    if(val.has_field(U("challenge_id")))
    {
        setChallengeId(ModelBase::int64_tFromJson(val[U("challenge_id")]));
    }
    if(val.has_field(U("entitlement")))
    {
        if(!val[U("entitlement")].is_null())
        {
            std::shared_ptr<ActivityEntitlementResource> newItem(new ActivityEntitlementResource());
            newItem->fromJson(val[U("entitlement")]);
            setEntitlement( newItem );
        }
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
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
                m_Settings.push_back( std::shared_ptr<SelectedSettingResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<SelectedSettingResource> newItem(new SelectedSettingResource());
                newItem->fromJson(item);
                m_Settings.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("template")))
    {
        setTemplate(ModelBase::stringFromJson(val[U("template")]));
    }
}

void ChallengeActivityResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("activity_id"), m_Activity_id));
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
    if(m_Challenge_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("challenge_id"), m_Challenge_id));
    }
    if(m_EntitlementIsSet)
    {
        if (m_Entitlement.get())
        {
            m_Entitlement->toMultipart(multipart, U("entitlement."));
        }
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
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
    if(m_TemplateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("template"), m_Template));
        
    }
}

void ChallengeActivityResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setActivityId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("activity_id"))));
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
    if(multipart->hasContent(U("challenge_id")))
    {
        setChallengeId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("challenge_id"))));
    }
    if(multipart->hasContent(U("entitlement")))
    {
        if(multipart->hasContent(U("entitlement")))
        {
            std::shared_ptr<ActivityEntitlementResource> newItem(new ActivityEntitlementResource());
            newItem->fromMultiPart(multipart, U("entitlement."));
            setEntitlement( newItem );
        }
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
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
                m_Settings.push_back( std::shared_ptr<SelectedSettingResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<SelectedSettingResource> newItem(new SelectedSettingResource());
                newItem->fromJson(item);
                m_Settings.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("template")))
    {
        setTemplate(ModelBase::stringFromHttpContent(multipart->getContent(U("template"))));
    }
}

int64_t ChallengeActivityResource::getActivityId() const
{
    return m_Activity_id;
}


void ChallengeActivityResource::setActivityId(int64_t value)
{
    m_Activity_id = value;
    
}
std::map<utility::string_t, std::shared_ptr<Property>>& ChallengeActivityResource::getAdditionalProperties()
{
    return m_Additional_properties;
}

void ChallengeActivityResource::setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value)
{
    m_Additional_properties = value;
    m_Additional_propertiesIsSet = true;
}
bool ChallengeActivityResource::additionalPropertiesIsSet() const
{
    return m_Additional_propertiesIsSet;
}

void ChallengeActivityResource::unsetAdditional_properties()
{
    m_Additional_propertiesIsSet = false;
}

int64_t ChallengeActivityResource::getChallengeId() const
{
    return m_Challenge_id;
}


void ChallengeActivityResource::setChallengeId(int64_t value)
{
    m_Challenge_id = value;
    m_Challenge_idIsSet = true;
}
bool ChallengeActivityResource::challengeIdIsSet() const
{
    return m_Challenge_idIsSet;
}

void ChallengeActivityResource::unsetChallenge_id()
{
    m_Challenge_idIsSet = false;
}

std::shared_ptr<ActivityEntitlementResource> ChallengeActivityResource::getEntitlement() const
{
    return m_Entitlement;
}


void ChallengeActivityResource::setEntitlement(std::shared_ptr<ActivityEntitlementResource> value)
{
    m_Entitlement = value;
    m_EntitlementIsSet = true;
}
bool ChallengeActivityResource::entitlementIsSet() const
{
    return m_EntitlementIsSet;
}

void ChallengeActivityResource::unsetEntitlement()
{
    m_EntitlementIsSet = false;
}

int64_t ChallengeActivityResource::getId() const
{
    return m_Id;
}


void ChallengeActivityResource::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool ChallengeActivityResource::idIsSet() const
{
    return m_IdIsSet;
}

void ChallengeActivityResource::unsetId()
{
    m_IdIsSet = false;
}

std::shared_ptr<RewardSetResource> ChallengeActivityResource::getRewardSet() const
{
    return m_Reward_set;
}


void ChallengeActivityResource::setRewardSet(std::shared_ptr<RewardSetResource> value)
{
    m_Reward_set = value;
    m_Reward_setIsSet = true;
}
bool ChallengeActivityResource::rewardSetIsSet() const
{
    return m_Reward_setIsSet;
}

void ChallengeActivityResource::unsetReward_set()
{
    m_Reward_setIsSet = false;
}

std::vector<std::shared_ptr<SelectedSettingResource>>& ChallengeActivityResource::getSettings()
{
    return m_Settings;
}

void ChallengeActivityResource::setSettings(std::vector<std::shared_ptr<SelectedSettingResource>> value)
{
    m_Settings = value;
    m_SettingsIsSet = true;
}
bool ChallengeActivityResource::settingsIsSet() const
{
    return m_SettingsIsSet;
}

void ChallengeActivityResource::unsetSettings()
{
    m_SettingsIsSet = false;
}

utility::string_t ChallengeActivityResource::getTemplate() const
{
    return m_Template;
}


void ChallengeActivityResource::setTemplate(utility::string_t value)
{
    m_Template = value;
    m_TemplateIsSet = true;
}
bool ChallengeActivityResource::templateIsSet() const
{
    return m_TemplateIsSet;
}

void ChallengeActivityResource::unsetTemplate()
{
    m_TemplateIsSet = false;
}

}
}
}
}
