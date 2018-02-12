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

/*
 * CoreActivitySettings.h
 *
 * 
 */

#ifndef CoreActivitySettings_H_
#define CoreActivitySettings_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CoreActivitySettings
    : public ModelBase
{
public:
    CoreActivitySettings();
    virtual ~CoreActivitySettings();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CoreActivitySettings members

    /// <summary>
    /// Whether the host can boot a user while the status is PLAYING. Default false
    /// </summary>
    bool getBootInPlay() const;
    bool bootInPlayIsSet() const;
    void unsetBoot_in_play();
    void setBootInPlay(bool value);
    /// <summary>
    /// Restriction for whether the host creating an occurrence can specify a custom launch address (such as their own ip address). Default &#39;false&#39;
    /// </summary>
    bool getCustomLaunchAddressAllowed() const;
    bool customLaunchAddressAllowedIsSet() const;
    void unsetCustom_launch_address_allowed();
    void setCustomLaunchAddressAllowed(bool value);
    /// <summary>
    /// Restriction for who can host an occurrence. admin disallows regular users, player means the user must also be a player in the occurrence if not admin, non-player means the user has the option to host without being a player. Default &#39;player&#39;
    /// </summary>
    utility::string_t getHostOption() const;
    bool hostOptionIsSet() const;
    void unsetHost_option();
    void setHostOption(utility::string_t value);
    /// <summary>
    /// Restriction for whether the host has control of the status once the game launches. If false they can only manage the game before (when setup and open). Default &#39;false&#39;
    /// </summary>
    bool getHostStatusControl() const;
    bool hostStatusControlIsSet() const;
    void unsetHost_status_control();
    void setHostStatusControl(bool value);
    /// <summary>
    /// Whether users can join while the status is PLAYING. Default false
    /// </summary>
    bool getJoinInPlay() const;
    bool joinInPlayIsSet() const;
    void unsetJoin_in_play();
    void setJoinInPlay(bool value);
    /// <summary>
    /// Whether users can leave while the status is PLAYING. Default false
    /// </summary>
    bool getLeaveInPlay() const;
    bool leaveInPlayIsSet() const;
    void unsetLeave_in_play();
    void setLeaveInPlay(bool value);
    /// <summary>
    /// The maximum number of players the game can hold
    /// </summary>
    int32_t getMaxPlayers() const;
    bool maxPlayersIsSet() const;
    void unsetMax_players();
    void setMaxPlayers(int32_t value);
    /// <summary>
    /// The minimum number of players the game can hold
    /// </summary>
    int32_t getMinPlayers() const;
    bool minPlayersIsSet() const;
    void unsetMin_players();
    void setMinPlayers(int32_t value);
    /// <summary>
    /// Restriction for who is able to report game end and results. Admin is always able to send results as well. Default &#39;none&#39;
    /// </summary>
    utility::string_t getResultsTrust() const;
    bool resultsTrustIsSet() const;
    void unsetResults_trust();
    void setResultsTrust(utility::string_t value);

protected:
    bool m_Boot_in_play;
    bool m_Boot_in_playIsSet;
    bool m_Custom_launch_address_allowed;
    bool m_Custom_launch_address_allowedIsSet;
    utility::string_t m_Host_option;
    bool m_Host_optionIsSet;
    bool m_Host_status_control;
    bool m_Host_status_controlIsSet;
    bool m_Join_in_play;
    bool m_Join_in_playIsSet;
    bool m_Leave_in_play;
    bool m_Leave_in_playIsSet;
    int32_t m_Max_players;
    bool m_Max_playersIsSet;
    int32_t m_Min_players;
    bool m_Min_playersIsSet;
    utility::string_t m_Results_trust;
    bool m_Results_trustIsSet;
};

}
}
}
}

#endif /* CoreActivitySettings_H_ */
