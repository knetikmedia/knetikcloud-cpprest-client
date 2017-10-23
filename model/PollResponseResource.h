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
 * PollResponseResource.h
 *
 * 
 */

#ifndef PollResponseResource_H_
#define PollResponseResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "SimpleUserResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PollResponseResource
    : public ModelBase
{
public:
    PollResponseResource();
    virtual ~PollResponseResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PollResponseResource members

    /// <summary>
    /// The answer to the poll
    /// </summary>
    utility::string_t getAnswer() const;
        void setAnswer(utility::string_t value);
    /// <summary>
    /// The date the poll was answered, in seconds since unix epoc
    /// </summary>
    int64_t getAnsweredDate() const;
    bool answeredDateIsSet() const;
    void unsetAnswered_date();
    void setAnsweredDate(int64_t value);
    /// <summary>
    /// The id of the poll response
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// The id of the poll
    /// </summary>
    utility::string_t getPollId() const;
        void setPollId(utility::string_t value);
    /// <summary>
    /// The user
    /// </summary>
    std::shared_ptr<SimpleUserResource> getUser() const;
        void setUser(std::shared_ptr<SimpleUserResource> value);

protected:
    utility::string_t m_Answer;
        int64_t m_Answered_date;
    bool m_Answered_dateIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Poll_id;
        std::shared_ptr<SimpleUserResource> m_User;
    };

}
}
}
}

#endif /* PollResponseResource_H_ */
