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
 * ActivityOccurrenceJoinResult.h
 *
 * 
 */

#ifndef ActivityOccurrenceJoinResult_H_
#define ActivityOccurrenceJoinResult_H_


#include "ModelBase.h"

#include "ActivityEntitlementResource.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ActivityOccurrenceJoinResult
    : public ModelBase
{
public:
    ActivityOccurrenceJoinResult();
    virtual ~ActivityOccurrenceJoinResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ActivityOccurrenceJoinResult members

    /// <summary>
    /// The details on the entitlement object needed to enter the occurrence (if any)
    /// </summary>
    std::shared_ptr<ActivityEntitlementResource> getEntitlement() const;
    void setEntitlement(std::shared_ptr<ActivityEntitlementResource> value);
    bool entitlementIsSet() const;
    void unsetEntitlement();
    /// <summary>
    /// Zero if the user was/could be added to the occurrence. Jsapi error code indicating the reason of the failure otherwise
    /// </summary>
    int32_t getErrorCode() const;
    void setErrorCode(int32_t value);
        /// <summary>
    /// An error message if failure
    /// </summary>
    utility::string_t getMessage() const;
    void setMessage(utility::string_t value);
    bool messageIsSet() const;
    void unsetMessage();
    /// <summary>
    /// The user&#39;s id
    /// </summary>
    int64_t getUserId() const;
    void setUserId(int64_t value);
    
protected:
    std::shared_ptr<ActivityEntitlementResource> m_Entitlement;
    bool m_EntitlementIsSet;
int32_t m_Error_code;
    utility::string_t m_Message;
    bool m_MessageIsSet;
int64_t m_User_id;
    };

}
}
}
}

#endif /* ActivityOccurrenceJoinResult_H_ */
