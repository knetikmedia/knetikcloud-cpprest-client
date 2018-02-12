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



#include "CoreActivitySettings.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CoreActivitySettings::CoreActivitySettings()
{
    m_Boot_in_play = false;
    m_Boot_in_playIsSet = false;
    m_Custom_launch_address_allowed = false;
    m_Custom_launch_address_allowedIsSet = false;
    m_Host_option = U("");
    m_Host_optionIsSet = false;
    m_Host_status_control = false;
    m_Host_status_controlIsSet = false;
    m_Join_in_play = false;
    m_Join_in_playIsSet = false;
    m_Leave_in_play = false;
    m_Leave_in_playIsSet = false;
    m_Max_players = 0;
    m_Max_playersIsSet = false;
    m_Min_players = 0;
    m_Min_playersIsSet = false;
    m_Results_trust = U("");
    m_Results_trustIsSet = false;
}

CoreActivitySettings::~CoreActivitySettings()
{
}

void CoreActivitySettings::validate()
{
    // TODO: implement validation
}

web::json::value CoreActivitySettings::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Boot_in_playIsSet)
    {
        val[U("boot_in_play")] = ModelBase::toJson(m_Boot_in_play);
    }
    if(m_Custom_launch_address_allowedIsSet)
    {
        val[U("custom_launch_address_allowed")] = ModelBase::toJson(m_Custom_launch_address_allowed);
    }
    if(m_Host_optionIsSet)
    {
        val[U("host_option")] = ModelBase::toJson(m_Host_option);
    }
    if(m_Host_status_controlIsSet)
    {
        val[U("host_status_control")] = ModelBase::toJson(m_Host_status_control);
    }
    if(m_Join_in_playIsSet)
    {
        val[U("join_in_play")] = ModelBase::toJson(m_Join_in_play);
    }
    if(m_Leave_in_playIsSet)
    {
        val[U("leave_in_play")] = ModelBase::toJson(m_Leave_in_play);
    }
    if(m_Max_playersIsSet)
    {
        val[U("max_players")] = ModelBase::toJson(m_Max_players);
    }
    if(m_Min_playersIsSet)
    {
        val[U("min_players")] = ModelBase::toJson(m_Min_players);
    }
    if(m_Results_trustIsSet)
    {
        val[U("results_trust")] = ModelBase::toJson(m_Results_trust);
    }

    return val;
}

void CoreActivitySettings::fromJson(web::json::value& val)
{
    if(val.has_field(U("boot_in_play")))
    {
        setBootInPlay(ModelBase::boolFromJson(val[U("boot_in_play")]));
    }
    if(val.has_field(U("custom_launch_address_allowed")))
    {
        setCustomLaunchAddressAllowed(ModelBase::boolFromJson(val[U("custom_launch_address_allowed")]));
    }
    if(val.has_field(U("host_option")))
    {
        setHostOption(ModelBase::stringFromJson(val[U("host_option")]));
    }
    if(val.has_field(U("host_status_control")))
    {
        setHostStatusControl(ModelBase::boolFromJson(val[U("host_status_control")]));
    }
    if(val.has_field(U("join_in_play")))
    {
        setJoinInPlay(ModelBase::boolFromJson(val[U("join_in_play")]));
    }
    if(val.has_field(U("leave_in_play")))
    {
        setLeaveInPlay(ModelBase::boolFromJson(val[U("leave_in_play")]));
    }
    if(val.has_field(U("max_players")))
    {
        setMaxPlayers(ModelBase::int32_tFromJson(val[U("max_players")]));
    }
    if(val.has_field(U("min_players")))
    {
        setMinPlayers(ModelBase::int32_tFromJson(val[U("min_players")]));
    }
    if(val.has_field(U("results_trust")))
    {
        setResultsTrust(ModelBase::stringFromJson(val[U("results_trust")]));
    }
}

void CoreActivitySettings::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Boot_in_playIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("boot_in_play"), m_Boot_in_play));
    }
    if(m_Custom_launch_address_allowedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("custom_launch_address_allowed"), m_Custom_launch_address_allowed));
    }
    if(m_Host_optionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("host_option"), m_Host_option));
        
    }
    if(m_Host_status_controlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("host_status_control"), m_Host_status_control));
    }
    if(m_Join_in_playIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("join_in_play"), m_Join_in_play));
    }
    if(m_Leave_in_playIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("leave_in_play"), m_Leave_in_play));
    }
    if(m_Max_playersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("max_players"), m_Max_players));
    }
    if(m_Min_playersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("min_players"), m_Min_players));
    }
    if(m_Results_trustIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("results_trust"), m_Results_trust));
        
    }
}

void CoreActivitySettings::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("boot_in_play")))
    {
        setBootInPlay(ModelBase::boolFromHttpContent(multipart->getContent(U("boot_in_play"))));
    }
    if(multipart->hasContent(U("custom_launch_address_allowed")))
    {
        setCustomLaunchAddressAllowed(ModelBase::boolFromHttpContent(multipart->getContent(U("custom_launch_address_allowed"))));
    }
    if(multipart->hasContent(U("host_option")))
    {
        setHostOption(ModelBase::stringFromHttpContent(multipart->getContent(U("host_option"))));
    }
    if(multipart->hasContent(U("host_status_control")))
    {
        setHostStatusControl(ModelBase::boolFromHttpContent(multipart->getContent(U("host_status_control"))));
    }
    if(multipart->hasContent(U("join_in_play")))
    {
        setJoinInPlay(ModelBase::boolFromHttpContent(multipart->getContent(U("join_in_play"))));
    }
    if(multipart->hasContent(U("leave_in_play")))
    {
        setLeaveInPlay(ModelBase::boolFromHttpContent(multipart->getContent(U("leave_in_play"))));
    }
    if(multipart->hasContent(U("max_players")))
    {
        setMaxPlayers(ModelBase::int32_tFromHttpContent(multipart->getContent(U("max_players"))));
    }
    if(multipart->hasContent(U("min_players")))
    {
        setMinPlayers(ModelBase::int32_tFromHttpContent(multipart->getContent(U("min_players"))));
    }
    if(multipart->hasContent(U("results_trust")))
    {
        setResultsTrust(ModelBase::stringFromHttpContent(multipart->getContent(U("results_trust"))));
    }
}

bool CoreActivitySettings::getBootInPlay() const
{
    return m_Boot_in_play;
}


void CoreActivitySettings::setBootInPlay(bool value)
{
    m_Boot_in_play = value;
    m_Boot_in_playIsSet = true;
}
bool CoreActivitySettings::bootInPlayIsSet() const
{
    return m_Boot_in_playIsSet;
}

void CoreActivitySettings::unsetBoot_in_play()
{
    m_Boot_in_playIsSet = false;
}

bool CoreActivitySettings::getCustomLaunchAddressAllowed() const
{
    return m_Custom_launch_address_allowed;
}


void CoreActivitySettings::setCustomLaunchAddressAllowed(bool value)
{
    m_Custom_launch_address_allowed = value;
    m_Custom_launch_address_allowedIsSet = true;
}
bool CoreActivitySettings::customLaunchAddressAllowedIsSet() const
{
    return m_Custom_launch_address_allowedIsSet;
}

void CoreActivitySettings::unsetCustom_launch_address_allowed()
{
    m_Custom_launch_address_allowedIsSet = false;
}

utility::string_t CoreActivitySettings::getHostOption() const
{
    return m_Host_option;
}


void CoreActivitySettings::setHostOption(utility::string_t value)
{
    m_Host_option = value;
    m_Host_optionIsSet = true;
}
bool CoreActivitySettings::hostOptionIsSet() const
{
    return m_Host_optionIsSet;
}

void CoreActivitySettings::unsetHost_option()
{
    m_Host_optionIsSet = false;
}

bool CoreActivitySettings::getHostStatusControl() const
{
    return m_Host_status_control;
}


void CoreActivitySettings::setHostStatusControl(bool value)
{
    m_Host_status_control = value;
    m_Host_status_controlIsSet = true;
}
bool CoreActivitySettings::hostStatusControlIsSet() const
{
    return m_Host_status_controlIsSet;
}

void CoreActivitySettings::unsetHost_status_control()
{
    m_Host_status_controlIsSet = false;
}

bool CoreActivitySettings::getJoinInPlay() const
{
    return m_Join_in_play;
}


void CoreActivitySettings::setJoinInPlay(bool value)
{
    m_Join_in_play = value;
    m_Join_in_playIsSet = true;
}
bool CoreActivitySettings::joinInPlayIsSet() const
{
    return m_Join_in_playIsSet;
}

void CoreActivitySettings::unsetJoin_in_play()
{
    m_Join_in_playIsSet = false;
}

bool CoreActivitySettings::getLeaveInPlay() const
{
    return m_Leave_in_play;
}


void CoreActivitySettings::setLeaveInPlay(bool value)
{
    m_Leave_in_play = value;
    m_Leave_in_playIsSet = true;
}
bool CoreActivitySettings::leaveInPlayIsSet() const
{
    return m_Leave_in_playIsSet;
}

void CoreActivitySettings::unsetLeave_in_play()
{
    m_Leave_in_playIsSet = false;
}

int32_t CoreActivitySettings::getMaxPlayers() const
{
    return m_Max_players;
}


void CoreActivitySettings::setMaxPlayers(int32_t value)
{
    m_Max_players = value;
    m_Max_playersIsSet = true;
}
bool CoreActivitySettings::maxPlayersIsSet() const
{
    return m_Max_playersIsSet;
}

void CoreActivitySettings::unsetMax_players()
{
    m_Max_playersIsSet = false;
}

int32_t CoreActivitySettings::getMinPlayers() const
{
    return m_Min_players;
}


void CoreActivitySettings::setMinPlayers(int32_t value)
{
    m_Min_players = value;
    m_Min_playersIsSet = true;
}
bool CoreActivitySettings::minPlayersIsSet() const
{
    return m_Min_playersIsSet;
}

void CoreActivitySettings::unsetMin_players()
{
    m_Min_playersIsSet = false;
}

utility::string_t CoreActivitySettings::getResultsTrust() const
{
    return m_Results_trust;
}


void CoreActivitySettings::setResultsTrust(utility::string_t value)
{
    m_Results_trust = value;
    m_Results_trustIsSet = true;
}
bool CoreActivitySettings::resultsTrustIsSet() const
{
    return m_Results_trustIsSet;
}

void CoreActivitySettings::unsetResults_trust()
{
    m_Results_trustIsSet = false;
}

}
}
}
}

