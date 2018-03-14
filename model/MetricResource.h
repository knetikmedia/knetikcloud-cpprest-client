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
 * MetricResource.h
 *
 * 
 */

#ifndef MetricResource_H_
#define MetricResource_H_


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
class  MetricResource
    : public ModelBase
{
public:
    MetricResource();
    virtual ~MetricResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MetricResource members

    /// <summary>
    /// The id of the activity occurence where this score/metric occurred
    /// </summary>
    int64_t getActivityOccurenceId() const;
        void setActivityOccurenceId(int64_t value);
    /// <summary>
    /// Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 10 tags and 50 characters each
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();
    void setTags(std::vector<utility::string_t> value);
    /// <summary>
    /// The id of the user this metric is for. Default to caller and requires METRICS_ADMIN permission to specify another
    /// </summary>
    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUser_id();
    void setUserId(int32_t value);
    /// <summary>
    /// The value/score of the metric
    /// </summary>
    int64_t getValue() const;
        void setValue(int64_t value);

protected:
    int64_t m_Activity_occurence_id;
        std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    int32_t m_User_id;
    bool m_User_idIsSet;
    int64_t m_Value;
    };

}
}
}
}

#endif /* MetricResource_H_ */
