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
 * NotificationTypeResource.h
 *
 * 
 */

#ifndef NotificationTypeResource_H_
#define NotificationTypeResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  NotificationTypeResource
    : public ModelBase
{
public:
    NotificationTypeResource();
    virtual ~NotificationTypeResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NotificationTypeResource members

    /// <summary>
    /// The date the type was created, as a unix timestamp in seconds
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// Whether the email body should be resolved. If true, the external email delivery system will be expected to handle the templating (Mandrill/Mailchimp). default: false
    /// </summary>
    bool getEmailBodyTemplateExternal() const;
    bool emailBodyTemplateExternalIsSet() const;
    void unsetEmail_body_template_external();
    void setEmailBodyTemplateExternal(bool value);
    /// <summary>
    /// The id of a message template to resolve the email body. If null, no websocket message wil be sent
    /// </summary>
    utility::string_t getEmailBodyTemplateId() const;
    bool emailBodyTemplateIdIsSet() const;
    void unsetEmail_body_template_id();
    void setEmailBodyTemplateId(utility::string_t value);
    /// <summary>
    /// The id of a message template to resolve the email subject. If null, no websocket message wil be sent
    /// </summary>
    utility::string_t getEmailSubjectTemplateId() const;
    bool emailSubjectTemplateIdIsSet() const;
    void unsetEmail_subject_template_id();
    void setEmailSubjectTemplateId(utility::string_t value);
    /// <summary>
    /// The id of the notification type. Default: random
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// The name of the notification type
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// The id of a message template to resolve the SMS message. If null, no sms message wil be sent
    /// </summary>
    utility::string_t getSmsTemplateId() const;
    bool smsTemplateIdIsSet() const;
    void unsetSms_template_id();
    void setSmsTemplateId(utility::string_t value);
    /// <summary>
    /// The date the type was last updated, as a unix timestamp in seconds
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);

protected:
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
    bool m_Email_body_template_external;
    bool m_Email_body_template_externalIsSet;
    utility::string_t m_Email_body_template_id;
    bool m_Email_body_template_idIsSet;
    utility::string_t m_Email_subject_template_id;
    bool m_Email_subject_template_idIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
        utility::string_t m_Sms_template_id;
    bool m_Sms_template_idIsSet;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
};

}
}
}
}

#endif /* NotificationTypeResource_H_ */
