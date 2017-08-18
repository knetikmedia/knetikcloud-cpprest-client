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
 * BatchReturn.h
 *
 * 
 */

#ifndef BatchReturn_H_
#define BatchReturn_H_


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
class  BatchReturn
    : public ModelBase
{
public:
    BatchReturn();
    virtual ~BatchReturn();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BatchReturn members

    /// <summary>
    /// The result body
    /// </summary>
    std::shared_ptr<Object> getBody() const;
    bool bodyIsSet() const;
    void unsetBody();
    void setBody(std::shared_ptr<Object> value);
    /// <summary>
    /// The HTTP response code
    /// </summary>
    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetCode();
    void setCode(int32_t value);
    /// <summary>
    /// Full URI of REST call
    /// </summary>
    utility::string_t getUri() const;
    bool uriIsSet() const;
    void unsetUri();
    void setUri(utility::string_t value);

protected:
    std::shared_ptr<Object> m_Body;
    bool m_BodyIsSet;
    int32_t m_Code;
    bool m_CodeIsSet;
    utility::string_t m_Uri;
    bool m_UriIsSet;
};

}
}
}
}

#endif /* BatchReturn_H_ */