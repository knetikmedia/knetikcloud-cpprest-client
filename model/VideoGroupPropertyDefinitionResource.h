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
 * VideoGroupPropertyDefinitionResource.h
 *
 * 
 */

#ifndef VideoGroupPropertyDefinitionResource_H_
#define VideoGroupPropertyDefinitionResource_H_


#include "PropertyFieldListResource.h"
#include "FileGroupPropertyDefinitionResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  VideoGroupPropertyDefinitionResource
    : public FileGroupPropertyDefinitionResource
{
public:
    VideoGroupPropertyDefinitionResource();
    virtual ~VideoGroupPropertyDefinitionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// VideoGroupPropertyDefinitionResource members

    /// <summary>
    /// If provided, the maximum height of each video
    /// </summary>
    int32_t getMaxHeight() const;
    bool maxHeightIsSet() const;
    void unsetMax_height();
    void setMaxHeight(int32_t value);
    /// <summary>
    /// If provided, the maximum length of each video
    /// </summary>
    int32_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetMax_length();
    void setMaxLength(int32_t value);
    /// <summary>
    /// If provided, the maximum width of each video
    /// </summary>
    int32_t getMaxWidth() const;
    bool maxWidthIsSet() const;
    void unsetMax_width();
    void setMaxWidth(int32_t value);
    /// <summary>
    /// If provided, the minimum height of each video
    /// </summary>
    int32_t getMinHeight() const;
    bool minHeightIsSet() const;
    void unsetMin_height();
    void setMinHeight(int32_t value);
    /// <summary>
    /// If provided, the minimum length of each video
    /// </summary>
    int32_t getMinLength() const;
    bool minLengthIsSet() const;
    void unsetMin_length();
    void setMinLength(int32_t value);
    /// <summary>
    /// If provided, the minimum width of each video
    /// </summary>
    int32_t getMinWidth() const;
    bool minWidthIsSet() const;
    void unsetMin_width();
    void setMinWidth(int32_t value);

protected:
    int32_t m_Max_height;
    bool m_Max_heightIsSet;
    int32_t m_Max_length;
    bool m_Max_lengthIsSet;
    int32_t m_Max_width;
    bool m_Max_widthIsSet;
    int32_t m_Min_height;
    bool m_Min_heightIsSet;
    int32_t m_Min_length;
    bool m_Min_lengthIsSet;
    int32_t m_Min_width;
    bool m_Min_widthIsSet;
};

}
}
}
}

#endif /* VideoGroupPropertyDefinitionResource_H_ */
