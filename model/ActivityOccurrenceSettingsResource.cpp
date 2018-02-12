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



#include "ActivityOccurrenceSettingsResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ActivityOccurrenceSettingsResource::ActivityOccurrenceSettingsResource()
{
    m_Core_settingsIsSet = false;
    m_SettingsIsSet = false;
}

ActivityOccurrenceSettingsResource::~ActivityOccurrenceSettingsResource()
{
}

void ActivityOccurrenceSettingsResource::validate()
{
    // TODO: implement validation
}

web::json::value ActivityOccurrenceSettingsResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Core_settingsIsSet)
    {
        val[U("core_settings")] = ModelBase::toJson(m_Core_settings);
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

    return val;
}

void ActivityOccurrenceSettingsResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("core_settings")))
    {
        if(!val[U("core_settings")].is_null())
        {
            std::shared_ptr<CoreActivityOccurrenceSettings> newItem(new CoreActivityOccurrenceSettings());
            newItem->fromJson(val[U("core_settings")]);
            setCoreSettings( newItem );
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
}

void ActivityOccurrenceSettingsResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Core_settingsIsSet)
    {
        if (m_Core_settings.get())
        {
            m_Core_settings->toMultipart(multipart, U("core_settings."));
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
}

void ActivityOccurrenceSettingsResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
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
}

std::shared_ptr<CoreActivityOccurrenceSettings> ActivityOccurrenceSettingsResource::getCoreSettings() const
{
    return m_Core_settings;
}


void ActivityOccurrenceSettingsResource::setCoreSettings(std::shared_ptr<CoreActivityOccurrenceSettings> value)
{
    m_Core_settings = value;
    m_Core_settingsIsSet = true;
}
bool ActivityOccurrenceSettingsResource::coreSettingsIsSet() const
{
    return m_Core_settingsIsSet;
}

void ActivityOccurrenceSettingsResource::unsetCore_settings()
{
    m_Core_settingsIsSet = false;
}

std::vector<std::shared_ptr<SelectedSettingRequest>>& ActivityOccurrenceSettingsResource::getSettings()
{
    return m_Settings;
}

void ActivityOccurrenceSettingsResource::setSettings(std::vector<std::shared_ptr<SelectedSettingRequest>> value)
{
    m_Settings = value;
    m_SettingsIsSet = true;
}
bool ActivityOccurrenceSettingsResource::settingsIsSet() const
{
    return m_SettingsIsSet;
}

void ActivityOccurrenceSettingsResource::unsetSettings()
{
    m_SettingsIsSet = false;
}

}
}
}
}

