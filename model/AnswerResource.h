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
 * AnswerResource.h
 *
 * 
 */

#ifndef AnswerResource_H_
#define AnswerResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Property.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  AnswerResource
    : public ModelBase
{
public:
    AnswerResource();
    virtual ~AnswerResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AnswerResource members

    /// <summary>
    /// The answer to the question. Different &#39;type&#39; values indicate different structures as the answer may be test, image, etc. See information on additional properties for the list and their structures
    /// </summary>
    std::shared_ptr<Property> getAnswer() const;
    void setAnswer(std::shared_ptr<Property> value);
        /// <summary>
    /// Whether the answer is correct or not
    /// </summary>
    bool getCorrect() const;
    void setCorrect(bool value);
        /// <summary>
    /// The unique ID for that resource
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
    bool idIsSet() const;
    void unsetId();

protected:
    std::shared_ptr<Property> m_Answer;
    bool m_Correct;
    utility::string_t m_Id;
    bool m_IdIsSet;
};

}
}
}
}

#endif /* AnswerResource_H_ */
