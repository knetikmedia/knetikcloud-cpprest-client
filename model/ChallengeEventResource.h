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
 * ChallengeEventResource.h
 *
 * 
 */

#ifndef ChallengeEventResource_H_
#define ChallengeEventResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ChallengeEventResource
    : public ModelBase
{
public:
    ChallengeEventResource();
    virtual ~ChallengeEventResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ChallengeEventResource members

    /// <summary>
    /// The id of the challenge
    /// </summary>
    int64_t getChallengeId() const;
    bool challengeIdIsSet() const;
    void unsetChallenge_id();
    void setChallengeId(int64_t value);
    /// <summary>
    /// The end date in seconds
    /// </summary>
    int64_t getEndDate() const;
    bool endDateIsSet() const;
    void unsetEnd_date();
    void setEndDate(int64_t value);
    /// <summary>
    /// The id of the challenge event
    /// </summary>
    int64_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int64_t value);
    /// <summary>
    /// Indicate if the rewards have been given out already 
    /// </summary>
    utility::string_t getRewardStatus() const;
    bool rewardStatusIsSet() const;
    void unsetReward_status();
    void setRewardStatus(utility::string_t value);
    /// <summary>
    /// The start date in seconds
    /// </summary>
    int64_t getStartDate() const;
    bool startDateIsSet() const;
    void unsetStart_date();
    void setStartDate(int64_t value);

protected:
    int64_t m_Challenge_id;
    bool m_Challenge_idIsSet;
    int64_t m_End_date;
    bool m_End_dateIsSet;
    int64_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Reward_status;
    bool m_Reward_statusIsSet;
    int64_t m_Start_date;
    bool m_Start_dateIsSet;
};

}
}
}
}

#endif /* ChallengeEventResource_H_ */