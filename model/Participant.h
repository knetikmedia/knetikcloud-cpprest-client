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
 * Participant.h
 *
 * 
 */

#ifndef Participant_H_
#define Participant_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "IdRef.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Participant
    : public ModelBase
{
public:
    Participant();
    virtual ~Participant();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Participant members

    /// <summary>
    /// Whether this user is the &#39;host&#39; of the occurrence and has increased access to settings/etc (default: false)
    /// </summary>
    bool getHost() const;
    bool hostIsSet() const;
    void unsetHost();
    void setHost(bool value);
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
    std::shared_ptr<IdRef> getUser() const;
        void setUser(std::shared_ptr<IdRef> value);

protected:
    bool m_Host;
    bool m_HostIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    std::shared_ptr<IdRef> m_User;
    };

}
}
}
}

#endif /* Participant_H_ */
