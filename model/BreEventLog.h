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
 * BreEventLog.h
 *
 * 
 */

#ifndef BreEventLog_H_
#define BreEventLog_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"
#include "BreRuleLog.h"
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BreEventLog
    : public ModelBase
{
public:
    BreEventLog();
    virtual ~BreEventLog();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BreEventLog members

    /// <summary>
    /// The customer of the BRE event log
    /// </summary>
    utility::string_t getCustomer() const;
    void setCustomer(utility::string_t value);
    bool customerIsSet() const;
    void unsetCustomer();
    /// <summary>
    /// The event id of the BRE event log
    /// </summary>
    int64_t getEventId() const;
    void setEventId(int64_t value);
    bool event_idIsSet() const;
    void unsetEvent_id();
    /// <summary>
    /// The event name of the BRE event log
    /// </summary>
    utility::string_t getEventName() const;
    void setEventName(utility::string_t value);
    bool event_nameIsSet() const;
    void unsetEvent_name();
    /// <summary>
    /// The event start date of the BRE event log
    /// </summary>
    int64_t getEventStartDate() const;
    void setEventStartDate(int64_t value);
    bool event_start_dateIsSet() const;
    void unsetEvent_start_date();
    /// <summary>
    /// The id of the BRE event log
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// The event paramters of the BRE event log
    /// </summary>
    std::shared_ptr<Object> getParameters() const;
    void setParameters(std::shared_ptr<Object> value);
    bool parametersIsSet() const;
    void unsetParameters();
    /// <summary>
    /// The rules of the BRE event log
    /// </summary>
    std::vector<std::shared_ptr<BreRuleLog>>& getRules();
    bool rulesIsSet() const;
    void unsetRules();

protected:
    utility::string_t m_Customer;
    bool m_CustomerIsSet;
int64_t m_Event_id;
    bool m_Event_idIsSet;
utility::string_t m_Event_name;
    bool m_Event_nameIsSet;
int64_t m_Event_start_date;
    bool m_Event_start_dateIsSet;
utility::string_t m_Id;
    bool m_IdIsSet;
std::shared_ptr<Object> m_Parameters;
    bool m_ParametersIsSet;
std::vector<std::shared_ptr<BreRuleLog>> m_Rules;
    bool m_RulesIsSet;
};

}
}
}
}

#endif /* BreEventLog_H_ */
