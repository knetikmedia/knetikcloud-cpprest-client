/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * FormattedTextPropertyDefinitionResource.h
 *
 * 
 */

#ifndef FormattedTextPropertyDefinitionResource_H_
#define FormattedTextPropertyDefinitionResource_H_


#include "PropertyFieldListResource.h"
#include <cpprest/details/basic_types.h>
#include "PropertyDefinitionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  FormattedTextPropertyDefinitionResource
    : public PropertyDefinitionResource
{
public:
    FormattedTextPropertyDefinitionResource();
    virtual ~FormattedTextPropertyDefinitionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FormattedTextPropertyDefinitionResource members

    /// <summary>
    /// If provided, the maximum length of the text
    /// </summary>
    int32_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetMax_length();
    void setMaxLength(int32_t value);

protected:
    int32_t m_Max_length;
    bool m_Max_lengthIsSet;
};

}
}
}
}

#endif /* FormattedTextPropertyDefinitionResource_H_ */
