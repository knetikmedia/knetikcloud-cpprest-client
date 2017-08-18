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
 * ActivityUserResource.h
 *
 * 
 */

#ifndef ActivityUserResource_H_
#define ActivityUserResource_H_


#include "ModelBase.h"

#include "MetricResource.h"
#include <cpprest/details/basic_types.h>
#include "SimpleUserResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ActivityUserResource
    : public ModelBase
{
public:
    ActivityUserResource();
    virtual ~ActivityUserResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ActivityUserResource members

    /// <summary>
    /// Whether this user is the &#39;host&#39; of the occurrence and has increased access to settings/etc (default: false)
    /// </summary>
    bool getHost() const;
    bool hostIsSet() const;
    void unsetHost();
    void setHost(bool value);
    /// <summary>
    /// The id of the activity user entry
    /// </summary>
    int64_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int64_t value);
    /// <summary>
    /// The date this user last joined the occurrence, unix timestamp in seconds
    /// </summary>
    int64_t getJoinedDate() const;
    bool joinedDateIsSet() const;
    void unsetJoined_date();
    void setJoinedDate(int64_t value);
    /// <summary>
    /// The date this user last left the occurrence, unix timestamp in seconds. Null if still present
    /// </summary>
    int64_t getLeftDate() const;
    bool leftDateIsSet() const;
    void unsetLeft_date();
    void setLeftDate(int64_t value);
    /// <summary>
    /// The metric for the user&#39;s results, after the game is over
    /// </summary>
    std::shared_ptr<MetricResource> getMetric() const;
    bool metricIsSet() const;
    void unsetMetric();
    void setMetric(std::shared_ptr<MetricResource> value);
    /// <summary>
    /// The current status of the user in the occurrence (default: present)
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(utility::string_t value);
    /// <summary>
    /// The user
    /// </summary>
    std::shared_ptr<SimpleUserResource> getUser() const;
        void setUser(std::shared_ptr<SimpleUserResource> value);

protected:
    bool m_Host;
    bool m_HostIsSet;
    int64_t m_Id;
    bool m_IdIsSet;
    int64_t m_Joined_date;
    bool m_Joined_dateIsSet;
    int64_t m_Left_date;
    bool m_Left_dateIsSet;
    std::shared_ptr<MetricResource> m_Metric;
    bool m_MetricIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    std::shared_ptr<SimpleUserResource> m_User;
    };

}
}
}
}

#endif /* ActivityUserResource_H_ */