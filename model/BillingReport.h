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
 * BillingReport.h
 *
 * 
 */

#ifndef BillingReport_H_
#define BillingReport_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BillingReport
    : public ModelBase
{
public:
    BillingReport();
    virtual ~BillingReport();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BillingReport members

    /// <summary>
    /// 
    /// </summary>
    int64_t getCreated() const;
    void setCreated(int64_t value);
    bool createdIsSet() const;
    void unsetCreated();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getLastKnownFailures();
    bool last_known_failuresIsSet() const;
    void unsetLast_known_failures();
    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, int32_t>& getStatistics();
    bool statisticsIsSet() const;
    void unsetStatistics();

protected:
    int64_t m_Created;
    bool m_CreatedIsSet;
utility::string_t m_Id;
    bool m_IdIsSet;
std::vector<utility::string_t> m_Last_known_failures;
    bool m_Last_known_failuresIsSet;
std::map<utility::string_t, int32_t> m_Statistics;
    bool m_StatisticsIsSet;
};

}
}
}
}

#endif /* BillingReport_H_ */
