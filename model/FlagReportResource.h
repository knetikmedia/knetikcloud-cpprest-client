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
 * FlagReportResource.h
 *
 * 
 */

#ifndef FlagReportResource_H_
#define FlagReportResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  FlagReportResource
    : public ModelBase
{
public:
    FlagReportResource();
    virtual ~FlagReportResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FlagReportResource members

    /// <summary>
    /// The context of that resource 
    /// </summary>
    utility::string_t getContext() const;
    void setContext(utility::string_t value);
    bool contextIsSet() const;
    void unsetContext();
    /// <summary>
    /// The context ID of that resource
    /// </summary>
    utility::string_t getContextId() const;
    void setContextId(utility::string_t value);
    bool context_idIsSet() const;
    void unsetContext_id();
    /// <summary>
    /// The date/time this resource was created in seconds since epoch
    /// </summary>
    int64_t getCreatedDate() const;
    void setCreatedDate(int64_t value);
    bool created_dateIsSet() const;
    void unsetCreated_date();
    /// <summary>
    /// The unique ID for that resource
    /// </summary>
    int64_t getId() const;
    void setId(int64_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// The reason of that resource required only in case of active resolution
    /// </summary>
    utility::string_t getReason() const;
    void setReason(utility::string_t value);
    bool reasonIsSet() const;
    void unsetReason();
    /// <summary>
    /// The resolution of that resource
    /// </summary>
    utility::string_t getResolution() const;
    void setResolution(utility::string_t value);
        /// <summary>
    /// The date/time this report was resolved in seconds since epoch. Null if not resolved yet
    /// </summary>
    int64_t getResolved() const;
    void setResolved(int64_t value);
    bool resolvedIsSet() const;
    void unsetResolved();
    /// <summary>
    /// The date/time this resource was last updated in seconds since epoch
    /// </summary>
    int64_t getUpdatedDate() const;
    void setUpdatedDate(int64_t value);
    bool updated_dateIsSet() const;
    void unsetUpdated_date();

protected:
    utility::string_t m_Context;
    bool m_ContextIsSet;
utility::string_t m_Context_id;
    bool m_Context_idIsSet;
int64_t m_Created_date;
    bool m_Created_dateIsSet;
int64_t m_Id;
    bool m_IdIsSet;
utility::string_t m_Reason;
    bool m_ReasonIsSet;
utility::string_t m_Resolution;
    int64_t m_Resolved;
    bool m_ResolvedIsSet;
int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
};

}
}
}
}

#endif /* FlagReportResource_H_ */
