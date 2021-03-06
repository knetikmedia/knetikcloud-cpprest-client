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



#include "CreateActivityOccurrenceRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CreateActivityOccurrenceRequest::CreateActivityOccurrenceRequest()
{
    m_Activity_id = 0L;
    m_Activity_idIsSet = false;
    m_Challenge_activity_id = 0L;
    m_Challenge_activity_idIsSet = false;
    m_Core_settingsIsSet = false;
    m_EntitlementIsSet = false;
    m_Event_id = 0L;
    m_Event_idIsSet = false;
    m_Host = 0;
    m_HostIsSet = false;
    m_SettingsIsSet = false;
    m_Simulated = false;
    m_SimulatedIsSet = false;
    m_Status = U("");
    m_StatusIsSet = false;
    m_UsersIsSet = false;
}

CreateActivityOccurrenceRequest::~CreateActivityOccurrenceRequest()
{
}

void CreateActivityOccurrenceRequest::validate()
{
    // TODO: implement validation
}

web::json::value CreateActivityOccurrenceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Activity_idIsSet)
    {
        val[U("activity_id")] = ModelBase::toJson(m_Activity_id);
    }
    if(m_Challenge_activity_idIsSet)
    {
        val[U("challenge_activity_id")] = ModelBase::toJson(m_Challenge_activity_id);
    }
    if(m_Core_settingsIsSet)
    {
        val[U("core_settings")] = ModelBase::toJson(m_Core_settings);
    }
    if(m_EntitlementIsSet)
    {
        val[U("entitlement")] = ModelBase::toJson(m_Entitlement);
    }
    if(m_Event_idIsSet)
    {
        val[U("event_id")] = ModelBase::toJson(m_Event_id);
    }
    if(m_HostIsSet)
    {
        val[U("host")] = ModelBase::toJson(m_Host);
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
    if(m_SimulatedIsSet)
    {
        val[U("simulated")] = ModelBase::toJson(m_Simulated);
    }
    if(m_StatusIsSet)
    {
        val[U("status")] = ModelBase::toJson(m_Status);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Users )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("users")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void CreateActivityOccurrenceRequest::fromJson(web::json::value& val)
{
    if(val.has_field(U("activity_id")))
    {
        setActivityId(ModelBase::int64_tFromJson(val[U("activity_id")]));
    }
    if(val.has_field(U("challenge_activity_id")))
    {
        setChallengeActivityId(ModelBase::int64_tFromJson(val[U("challenge_activity_id")]));
    }
    if(val.has_field(U("core_settings")))
    {
        if(!val[U("core_settings")].is_null())
        {
            std::shared_ptr<CoreActivityOccurrenceSettings> newItem(new CoreActivityOccurrenceSettings());
            newItem->fromJson(val[U("core_settings")]);
            setCoreSettings( newItem );
        }
    }
    if(val.has_field(U("entitlement")))
    {
        if(!val[U("entitlement")].is_null())
        {
            std::shared_ptr<ItemIdRequest> newItem(new ItemIdRequest());
            newItem->fromJson(val[U("entitlement")]);
            setEntitlement( newItem );
        }
    }
    if(val.has_field(U("event_id")))
    {
        setEventId(ModelBase::int64_tFromJson(val[U("event_id")]));
    }
    if(val.has_field(U("host")))
    {
        setHost(ModelBase::int32_tFromJson(val[U("host")]));
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
                m_Settings.push_back( std::shared_ptr<SelectedSettingRequest>(nullptr) );
            }
            else
            {
                std::shared_ptr<SelectedSettingRequest> newItem(new SelectedSettingRequest());
                newItem->fromJson(item);
                m_Settings.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("simulated")))
    {
        setSimulated(ModelBase::boolFromJson(val[U("simulated")]));
    }
    if(val.has_field(U("status")))
    {
        setStatus(ModelBase::stringFromJson(val[U("status")]));
    }
    {
        m_Users.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("users")))
        {
        for( auto& item : val[U("users")].as_array() )
        {
            if(item.is_null())
            {
                m_Users.push_back( std::shared_ptr<Participant>(nullptr) );
            }
            else
            {
                std::shared_ptr<Participant> newItem(new Participant());
                newItem->fromJson(item);
                m_Users.push_back( newItem );
            }
        }
        }
    }
}

void CreateActivityOccurrenceRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Activity_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("activity_id"), m_Activity_id));
    }
    if(m_Challenge_activity_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("challenge_activity_id"), m_Challenge_activity_id));
    }
    if(m_Core_settingsIsSet)
    {
        if (m_Core_settings.get())
        {
            m_Core_settings->toMultipart(multipart, U("core_settings."));
        }
        
    }
    if(m_EntitlementIsSet)
    {
        if (m_Entitlement.get())
        {
            m_Entitlement->toMultipart(multipart, U("entitlement."));
        }
        
    }
    if(m_Event_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("event_id"), m_Event_id));
    }
    if(m_HostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("host"), m_Host));
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
    if(m_SimulatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("simulated"), m_Simulated));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("status"), m_Status));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Users )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("users"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
}

void CreateActivityOccurrenceRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("activity_id")))
    {
        setActivityId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("activity_id"))));
    }
    if(multipart->hasContent(U("challenge_activity_id")))
    {
        setChallengeActivityId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("challenge_activity_id"))));
    }
    if(multipart->hasContent(U("core_settings")))
    {
        if(multipart->hasContent(U("core_settings")))
        {
            std::shared_ptr<CoreActivityOccurrenceSettings> newItem(new CoreActivityOccurrenceSettings());
            newItem->fromMultiPart(multipart, U("core_settings."));
            setCoreSettings( newItem );
        }
    }
    if(multipart->hasContent(U("entitlement")))
    {
        if(multipart->hasContent(U("entitlement")))
        {
            std::shared_ptr<ItemIdRequest> newItem(new ItemIdRequest());
            newItem->fromMultiPart(multipart, U("entitlement."));
            setEntitlement( newItem );
        }
    }
    if(multipart->hasContent(U("event_id")))
    {
        setEventId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("event_id"))));
    }
    if(multipart->hasContent(U("host")))
    {
        setHost(ModelBase::int32_tFromHttpContent(multipart->getContent(U("host"))));
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
                m_Settings.push_back( std::shared_ptr<SelectedSettingRequest>(nullptr) );
            }
            else
            {
                std::shared_ptr<SelectedSettingRequest> newItem(new SelectedSettingRequest());
                newItem->fromJson(item);
                m_Settings.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("simulated")))
    {
        setSimulated(ModelBase::boolFromHttpContent(multipart->getContent(U("simulated"))));
    }
    if(multipart->hasContent(U("status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("status"))));
    }
    {
        m_Users.clear();
        if(multipart->hasContent(U("users")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("users"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Users.push_back( std::shared_ptr<Participant>(nullptr) );
            }
            else
            {
                std::shared_ptr<Participant> newItem(new Participant());
                newItem->fromJson(item);
                m_Users.push_back( newItem );
            }
        }
        }
    }
}

int64_t CreateActivityOccurrenceRequest::getActivityId() const
{
    return m_Activity_id;
}


void CreateActivityOccurrenceRequest::setActivityId(int64_t value)
{
    m_Activity_id = value;
    m_Activity_idIsSet = true;
}
bool CreateActivityOccurrenceRequest::activityIdIsSet() const
{
    return m_Activity_idIsSet;
}

void CreateActivityOccurrenceRequest::unsetActivity_id()
{
    m_Activity_idIsSet = false;
}

int64_t CreateActivityOccurrenceRequest::getChallengeActivityId() const
{
    return m_Challenge_activity_id;
}


void CreateActivityOccurrenceRequest::setChallengeActivityId(int64_t value)
{
    m_Challenge_activity_id = value;
    m_Challenge_activity_idIsSet = true;
}
bool CreateActivityOccurrenceRequest::challengeActivityIdIsSet() const
{
    return m_Challenge_activity_idIsSet;
}

void CreateActivityOccurrenceRequest::unsetChallenge_activity_id()
{
    m_Challenge_activity_idIsSet = false;
}

std::shared_ptr<CoreActivityOccurrenceSettings> CreateActivityOccurrenceRequest::getCoreSettings() const
{
    return m_Core_settings;
}


void CreateActivityOccurrenceRequest::setCoreSettings(std::shared_ptr<CoreActivityOccurrenceSettings> value)
{
    m_Core_settings = value;
    m_Core_settingsIsSet = true;
}
bool CreateActivityOccurrenceRequest::coreSettingsIsSet() const
{
    return m_Core_settingsIsSet;
}

void CreateActivityOccurrenceRequest::unsetCore_settings()
{
    m_Core_settingsIsSet = false;
}

std::shared_ptr<ItemIdRequest> CreateActivityOccurrenceRequest::getEntitlement() const
{
    return m_Entitlement;
}


void CreateActivityOccurrenceRequest::setEntitlement(std::shared_ptr<ItemIdRequest> value)
{
    m_Entitlement = value;
    m_EntitlementIsSet = true;
}
bool CreateActivityOccurrenceRequest::entitlementIsSet() const
{
    return m_EntitlementIsSet;
}

void CreateActivityOccurrenceRequest::unsetEntitlement()
{
    m_EntitlementIsSet = false;
}

int64_t CreateActivityOccurrenceRequest::getEventId() const
{
    return m_Event_id;
}


void CreateActivityOccurrenceRequest::setEventId(int64_t value)
{
    m_Event_id = value;
    m_Event_idIsSet = true;
}
bool CreateActivityOccurrenceRequest::eventIdIsSet() const
{
    return m_Event_idIsSet;
}

void CreateActivityOccurrenceRequest::unsetEvent_id()
{
    m_Event_idIsSet = false;
}

int32_t CreateActivityOccurrenceRequest::getHost() const
{
    return m_Host;
}


void CreateActivityOccurrenceRequest::setHost(int32_t value)
{
    m_Host = value;
    m_HostIsSet = true;
}
bool CreateActivityOccurrenceRequest::hostIsSet() const
{
    return m_HostIsSet;
}

void CreateActivityOccurrenceRequest::unsetHost()
{
    m_HostIsSet = false;
}

std::vector<std::shared_ptr<SelectedSettingRequest>>& CreateActivityOccurrenceRequest::getSettings()
{
    return m_Settings;
}

void CreateActivityOccurrenceRequest::setSettings(std::vector<std::shared_ptr<SelectedSettingRequest>> value)
{
    m_Settings = value;
    m_SettingsIsSet = true;
}
bool CreateActivityOccurrenceRequest::settingsIsSet() const
{
    return m_SettingsIsSet;
}

void CreateActivityOccurrenceRequest::unsetSettings()
{
    m_SettingsIsSet = false;
}

bool CreateActivityOccurrenceRequest::getSimulated() const
{
    return m_Simulated;
}


void CreateActivityOccurrenceRequest::setSimulated(bool value)
{
    m_Simulated = value;
    m_SimulatedIsSet = true;
}
bool CreateActivityOccurrenceRequest::simulatedIsSet() const
{
    return m_SimulatedIsSet;
}

void CreateActivityOccurrenceRequest::unsetSimulated()
{
    m_SimulatedIsSet = false;
}

utility::string_t CreateActivityOccurrenceRequest::getStatus() const
{
    return m_Status;
}


void CreateActivityOccurrenceRequest::setStatus(utility::string_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool CreateActivityOccurrenceRequest::statusIsSet() const
{
    return m_StatusIsSet;
}

void CreateActivityOccurrenceRequest::unsetStatus()
{
    m_StatusIsSet = false;
}

std::vector<std::shared_ptr<Participant>>& CreateActivityOccurrenceRequest::getUsers()
{
    return m_Users;
}

void CreateActivityOccurrenceRequest::setUsers(std::vector<std::shared_ptr<Participant>> value)
{
    m_Users = value;
    m_UsersIsSet = true;
}
bool CreateActivityOccurrenceRequest::usersIsSet() const
{
    return m_UsersIsSet;
}

void CreateActivityOccurrenceRequest::unsetUsers()
{
    m_UsersIsSet = false;
}

}
}
}
}

