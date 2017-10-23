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
 * CreateActivityOccurrenceRequest.h
 *
 * A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings
 */

#ifndef CreateActivityOccurrenceRequest_H_
#define CreateActivityOccurrenceRequest_H_


#include "ModelBase.h"

#include "SelectedSettingRequest.h"
#include <cpprest/details/basic_types.h>
#include "Participant.h"
#include "ItemIdRequest.h"
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings
/// </summary>
class  CreateActivityOccurrenceRequest
    : public ModelBase
{
public:
    CreateActivityOccurrenceRequest();
    virtual ~CreateActivityOccurrenceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateActivityOccurrenceRequest members

    /// <summary>
    /// The id of the activity, only needed when outside of challenge/event
    /// </summary>
    int64_t getActivityId() const;
    bool activityIdIsSet() const;
    void unsetActivity_id();
    void setActivityId(int64_t value);
    /// <summary>
    /// The id of the challenge activity (required if playing in a challenge/event). Note that this is the challenge_activity_id in case the same activity apears twice in the challenge.
    /// </summary>
    int64_t getChallengeActivityId() const;
    bool challengeActivityIdIsSet() const;
    void unsetChallenge_activity_id();
    void setChallengeActivityId(int64_t value);
    /// <summary>
    /// The entitlement item required to enter the occurrence. Required if not part of an event. Must come from the set of entitlement items listed in the activity
    /// </summary>
    std::shared_ptr<ItemIdRequest> getEntitlement() const;
    bool entitlementIsSet() const;
    void unsetEntitlement();
    void setEntitlement(std::shared_ptr<ItemIdRequest> value);
    /// <summary>
    /// The id of the event this occurence is a part of, if any
    /// </summary>
    int64_t getEventId() const;
    bool eventIdIsSet() const;
    void unsetEvent_id();
    void setEventId(int64_t value);
    /// <summary>
    /// The values selected from the available settings defined for the activity. Ex: difficulty: hard. Can be left out if the activity is played during an event and the settings are already set at the event level. Ex: every monday, difficulty: hard, number of questions: 10, category: sport. Otherwise, the set must exactly match those of the activity.
    /// </summary>
    std::vector<std::shared_ptr<SelectedSettingRequest>>& getSettings();
    bool settingsIsSet() const;
    void unsetSettings();
    void setSettings(std::vector<std::shared_ptr<SelectedSettingRequest>> value);
    /// <summary>
    /// Whether this occurrence will be ran as a simulation. Simulations will not be rewarded. Useful for bot play or trials
    /// </summary>
    bool getSimulated() const;
    bool simulatedIsSet() const;
    void unsetSimulated();
    void setSimulated(bool value);
    /// <summary>
    /// The current status of the occurrence (default: SETUP).
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(utility::string_t value);
    /// <summary>
    /// The list of users participating in this occurrence. Can only be set directly with ACTIVITIES_ADMIN permission
    /// </summary>
    std::vector<std::shared_ptr<Participant>>& getUsers();
    bool usersIsSet() const;
    void unsetUsers();
    void setUsers(std::vector<std::shared_ptr<Participant>> value);

protected:
    int64_t m_Activity_id;
    bool m_Activity_idIsSet;
    int64_t m_Challenge_activity_id;
    bool m_Challenge_activity_idIsSet;
    std::shared_ptr<ItemIdRequest> m_Entitlement;
    bool m_EntitlementIsSet;
    int64_t m_Event_id;
    bool m_Event_idIsSet;
    std::vector<std::shared_ptr<SelectedSettingRequest>> m_Settings;
    bool m_SettingsIsSet;
    bool m_Simulated;
    bool m_SimulatedIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    std::vector<std::shared_ptr<Participant>> m_Users;
    bool m_UsersIsSet;
};

}
}
}
}

#endif /* CreateActivityOccurrenceRequest_H_ */
