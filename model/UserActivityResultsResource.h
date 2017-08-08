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
 * UserActivityResultsResource.h
 *
 * 
 */

#ifndef UserActivityResultsResource_H_
#define UserActivityResultsResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UserActivityResultsResource
    : public ModelBase
{
public:
    UserActivityResultsResource();
    virtual ~UserActivityResultsResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UserActivityResultsResource members

    /// <summary>
    /// The raw score. Null means non-compete or disqualification
    /// </summary>
    int64_t getScore() const;
    bool scoreIsSet() const;
    void unsetScore();
    void setScore(int64_t value);
    /// <summary>
    /// Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 5 tags and 50 characters each
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();
    void setTags(std::vector<utility::string_t> value);
    /// <summary>
    /// The id of the player
    /// </summary>
    int32_t getUserId() const;
        void setUserId(int32_t value);

protected:
    int64_t m_Score;
    bool m_ScoreIsSet;
    std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    int32_t m_User_id;
    };

}
}
}
}

#endif /* UserActivityResultsResource_H_ */
