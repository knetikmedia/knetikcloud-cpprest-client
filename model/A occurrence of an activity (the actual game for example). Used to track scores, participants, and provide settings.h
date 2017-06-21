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

/*
 * A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings.h
 *
 * 
 */

#ifndef A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings_H_
#define A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings_H_


#include "ModelBase.h"

#include "ActivityUserResource.h"
#include "ActivityEntitlementResource.h"
#include "SelectedSettingResource.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings
    : public ModelBase
{
public:
    A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings();
    virtual ~A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings members

    /// <summary>
    /// The id of the activity
    /// </summary>
    int64_t getActivityId() const;
    void setActivityId(int64_t value);
        /// <summary>
    /// The id of the challenge activity (as part of the event, required if eventId set)
    /// </summary>
    int64_t getChallengeActivityId() const;
    void setChallengeActivityId(int64_t value);
    bool challenge_activity_idIsSet() const;
    void unsetChallenge_activity_id();
    /// <summary>
    /// The date this occurrence was created, unix timestamp in seconds
    /// </summary>
    int64_t getCreatedDate() const;
    void setCreatedDate(int64_t value);
    bool created_dateIsSet() const;
    void unsetCreated_date();
    /// <summary>
    /// The entitlement item required to enter the occurrence. Required if not part of an event. Must come from the set of entitlement items listed in the activity
    /// </summary>
    std::shared_ptr<ActivityEntitlementResource> getEntitlement() const;
    void setEntitlement(std::shared_ptr<ActivityEntitlementResource> value);
    bool entitlementIsSet() const;
    void unsetEntitlement();
    /// <summary>
    /// The id of the event
    /// </summary>
    int64_t getEventId() const;
    void setEventId(int64_t value);
    bool event_idIsSet() const;
    void unsetEvent_id();
    /// <summary>
    /// The id of the activity occurrence
    /// </summary>
    int64_t getId() const;
    void setId(int64_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// Indicate if the rewards have been given out already
    /// </summary>
    utility::string_t getRewardStatus() const;
    void setRewardStatus(utility::string_t value);
    bool reward_statusIsSet() const;
    void unsetReward_status();
    /// <summary>
    /// The values selected from the available settings defined for the activity. Ex: difficulty: hard. Can be left out if the activity is played during an event and the settings are already set at the event level. Ex: every monday, difficulty: hard, number of questions: 10, category: sport. Otherwise, the set must exactly match those of the activity.
    /// </summary>
    std::vector<std::shared_ptr<SelectedSettingResource>>& getSettings();
    bool settingsIsSet() const;
    void unsetSettings();
    /// <summary>
    /// Whether this occurrence will be ran as a simulation. Simulations will not be rewarded. Useful for bot play or trials
    /// </summary>
    bool getSimulated() const;
    void setSimulated(bool value);
    bool simulatedIsSet() const;
    void unsetSimulated();
    /// <summary>
    /// The date this occurrence was started, unix timestamp in seconds. null if not yet started
    /// </summary>
    int64_t getStartDate() const;
    void setStartDate(int64_t value);
    bool start_dateIsSet() const;
    void unsetStart_date();
    /// <summary>
    /// The current status of the occurrence (default: OPEN)
    /// </summary>
    utility::string_t getStatus() const;
    void setStatus(utility::string_t value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// The date this occurrence was last updated, unix timestamp in seconds
    /// </summary>
    int64_t getUpdatedDate() const;
    void setUpdatedDate(int64_t value);
    bool updated_dateIsSet() const;
    void unsetUpdated_date();
    /// <summary>
    /// The list of users participating in this occurrence. Can only be set directly with ACTIVITIES_ADMIN permission
    /// </summary>
    std::vector<std::shared_ptr<ActivityUserResource>>& getUsers();
    bool usersIsSet() const;
    void unsetUsers();

protected:
    int64_t m_Activity_id;
    int64_t m_Challenge_activity_id;
    bool m_Challenge_activity_idIsSet;
int64_t m_Created_date;
    bool m_Created_dateIsSet;
std::shared_ptr<ActivityEntitlementResource> m_Entitlement;
    bool m_EntitlementIsSet;
int64_t m_Event_id;
    bool m_Event_idIsSet;
int64_t m_Id;
    bool m_IdIsSet;
utility::string_t m_Reward_status;
    bool m_Reward_statusIsSet;
std::vector<std::shared_ptr<SelectedSettingResource>> m_Settings;
    bool m_SettingsIsSet;
bool m_Simulated;
    bool m_SimulatedIsSet;
int64_t m_Start_date;
    bool m_Start_dateIsSet;
utility::string_t m_Status;
    bool m_StatusIsSet;
int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
std::vector<std::shared_ptr<ActivityUserResource>> m_Users;
    bool m_UsersIsSet;
};

}
}
}
}

#endif /* A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings_H_ */
