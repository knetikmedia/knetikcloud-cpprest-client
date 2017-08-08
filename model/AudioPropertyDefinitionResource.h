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
 * AudioPropertyDefinitionResource.h
 *
 * 
 */

#ifndef AudioPropertyDefinitionResource_H_
#define AudioPropertyDefinitionResource_H_


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
class  AudioPropertyDefinitionResource
    : public PropertyDefinitionResource
{
public:
    AudioPropertyDefinitionResource();
    virtual ~AudioPropertyDefinitionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AudioPropertyDefinitionResource members

    /// <summary>
    /// If provided, a file type the property must match
    /// </summary>
    utility::string_t getFileType() const;
    bool fileTypeIsSet() const;
    void unsetFile_type();
    void setFileType(utility::string_t value);
    /// <summary>
    /// If provided, the maximum length of the audio
    /// </summary>
    int32_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetMax_length();
    void setMaxLength(int32_t value);
    /// <summary>
    /// If provided, the minimum length of the audio
    /// </summary>
    int32_t getMinLength() const;
    bool minLengthIsSet() const;
    void unsetMin_length();
    void setMinLength(int32_t value);

protected:
    utility::string_t m_File_type;
    bool m_File_typeIsSet;
    int32_t m_Max_length;
    bool m_Max_lengthIsSet;
    int32_t m_Min_length;
    bool m_Min_lengthIsSet;
};

}
}
}
}

#endif /* AudioPropertyDefinitionResource_H_ */
