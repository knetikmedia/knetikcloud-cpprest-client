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
 * ErrorResource.h
 *
 * 
 */

#ifndef ErrorResource_H_
#define ErrorResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ErrorResource
    : public ModelBase
{
public:
    ErrorResource();
    virtual ~ErrorResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ErrorResource members

    /// <summary>
    /// Extra details about the error, if needed
    /// </summary>
    std::shared_ptr<Object> getDetails() const;
    bool detailsIsSet() const;
    void unsetDetails();
    void setDetails(std::shared_ptr<Object> value);
    /// <summary>
    /// The JSON key the message pertains to
    /// </summary>
    std::shared_ptr<Object> getField() const;
    bool fieldIsSet() const;
    void unsetField();
    void setField(std::shared_ptr<Object> value);
    /// <summary>
    /// The message explaining the error
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();
    void setMessage(utility::string_t value);

protected:
    std::shared_ptr<Object> m_Details;
    bool m_DetailsIsSet;
    std::shared_ptr<Object> m_Field;
    bool m_FieldIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};

}
}
}
}

#endif /* ErrorResource_H_ */
