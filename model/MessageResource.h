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
 * MessageResource.h
 *
 * 
 */

#ifndef MessageResource_H_
#define MessageResource_H_


#include "ModelBase.h"

#include "MessageContentResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MessageResource
    : public ModelBase
{
public:
    MessageResource();
    virtual ~MessageResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MessageResource members

    /// <summary>
    /// The content of the message in various formats
    /// </summary>
    std::shared_ptr<MessageContentResource> getContent() const;
        void setContent(std::shared_ptr<MessageContentResource> value);
    /// <summary>
    /// The id of the recipient, dependent on the recipient_type. The user&#39;s id or the topic&#39;s id. Required if sending directly to messaging service
    /// </summary>
    utility::string_t getRecipient() const;
    bool recipientIsSet() const;
    void unsetRecipient();
    void setRecipient(utility::string_t value);
    /// <summary>
    /// The type of recipient for the message. Either a user, or all users in a topic. Required if sending directly to messaging service
    /// </summary>
    utility::string_t getRecipientType() const;
    bool recipientTypeIsSet() const;
    void unsetRecipient_type();
    void setRecipientType(utility::string_t value);
    /// <summary>
    /// The subject of the message. Required for email messages
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetSubject();
    void setSubject(utility::string_t value);
    /// <summary>
    /// The type of message for websocket type hinting. will be added to the payload with the key _type
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);

protected:
    std::shared_ptr<MessageContentResource> m_Content;
        utility::string_t m_Recipient;
    bool m_RecipientIsSet;
    utility::string_t m_Recipient_type;
    bool m_Recipient_typeIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
};

}
}
}
}

#endif /* MessageResource_H_ */
